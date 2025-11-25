#include<iostream>
using namespace std ;
#define MAX 20

int main(){
int n ,start;

int adj[MAX][MAX];
int visited[MAX];
int Stack[MAX];
int top=-1;
cout<<"Enter no of nodes";
cin>>n;
cout<<"enter adjacency matrix: ";
for(int i=0;i<n; i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>adj[i][j];
    }
}
cout<<"enter start node ";
char s;
cin>>s;
start=s-'A';
for(int i=0;i<n;i++)
{
    visited[i]=0;}
    Stack[++top]=start;
    visited[start]=1;

cout<<"DFS traversal: ";
while(top!=-1)
{
    int node =Stack[top--];
    cout<<char(node+'A')<<" ";
    for(int i=0;i<n;i++)
    {
        if(adj[node][i]==1&&!visited[i])
        {
            Stack[++top]=i;
            visited[i]=1;
        }
    }
}
return 0;}



