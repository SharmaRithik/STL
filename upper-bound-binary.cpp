#include<algorithm>
using namespace std;
int binaryupper(int a[],int m,int l,int u)
{
        int mid,c=0;
        if(l<=u)
        {
                mid=(l+u)/2;
                if(m==a[mid])
                {

                        return binaryupper(a,m,mid+1,u);
                }
                else if(m<a[mid])
                {
                        return binaryupper(a,m,l,mid-1);
                }
                else
                {
                        return binaryupper(a,m,mid+1,u);
                }
        }
 else
                return u;
  }
int main(){
int t,n,m;
cin>>t>>n;
int arr[t];
for(int i=0;i<t;i++){
        cin>>arr[i];
}
sort(arr,arr+t);
cout<<binaryupper(arr,n,0,t)<<endl;
return 0;
}
