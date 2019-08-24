#include <iostream>
#include<algorithm>
using namespace std;
int binarylower(int a[],int m,int low,int up)
{
        int mid,c=0;
        if(low<=up)
        {
                mid=(low+up)/2;
                if(m==a[mid])
                {
                        c=m;
                        return binarylower(a,m,low,mid-1);
                }
                else if(m<a[mid])
                {
                        return binarylower(a,m,low,mid-1);
                }
                else
                {
                        return binarylower(a,m,mid+1,up);
                }
        }
        else
                return low;
  }
int main(){
int t,n,m;
cin>>t>>n;
int arr[t];
for(int i=0;i<t;i++){
        cin>>arr[i];
}
sort(arr,arr+t);
cout<<binarylower(arr,n,0,t)<<endl;
return 0;
}
