#include<bits/stdc++.h>

using namespace std;

const int N=1e5+2;
bool visited[N];
vector<int>adj[N];

void dfs(int node)
{
    visited[node]=1;
    cout<<node<<" ";
    
    vector<int>::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(visited[*it]);
        else
        {
            dfs(*it);
        }
    }
}

int main()
{
    for(int i=0;i<N;i++)
    {
        visited[i]=false;
    }
    
    int n,m;
    cin>>n>>m;
    
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        
        adj[x].push_back(y);// done in such a way so that it was a undirected graph
        adj[y].push_back(x);
    }
    
    dfs(1);
    return 0;
   
}