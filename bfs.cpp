#include <iostream>
using namespace std;
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
int bfs(int v){
	for(int i=1;i<=n;i++){
		if(a[v][i] && !visited[i]){
			q[++r]=i;
		}
		if(f<=r){
			visited[q[f]]=1;
			bfs(q[f++]);
		}
	}
}
int main(){
	int v;
	cout<<"vertices = ";
	cin>>n;
	for(int i=1;i<=n;i++){
		q[i]=0;
		visited[i]=0;
	}
	cout<<"enter values"<<endl;
	for(i=1; i<=n; i++) {
		for(j=1;j<=n;j++) {
			cin>>a[i][j];
		}
	}
	cout<<"starting"<<endl;
	cin>>v;
	bfs(v);
	cout<<"reachable points"<<endl;
	for(i=1; i <= n; i++) { 
		if(visited[i])
			cout<<i<<endl;
		else {
	cout<<"not possible"<<endl;
			break;
		}
	}
}
		
