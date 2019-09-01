#include <iostream>
using namespace std;
bool arr[10][10];
void initialize(){
        for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                        arr[i][j]=false;
                }
        }
}
int main(){
int x,y,nodes,edges;
initialize();
cout<<"enter no of nodes = ";
cin>>nodes;
cout<<endl<<"enter no of edges = ";
cin>>edges;
for(int i=0;i<edges;i++){
        cin>>x>>y;
        arr[x][y]=true;
}
for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
                if(arr[i][j]==true){cout<<i<<" "<<j<<" = "<<arr[i][j]<<endl;
        }
     }
}
        return 0;
}
