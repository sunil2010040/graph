#include<bits/stdc++.h>
using namespace std; 

vector<int> shortestpath(vector<pair<int,int>edges,int n,int m,int s,int t)
{
    unordered_map<int,list<int>>adj;
    
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    unordered_map<int,bool>visited;
    unordered_map<int,int>parent;
    
    queue<int>q;
    q.push(s);
    visited[s]=true;
    
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        
        for(auto i:adj[front])
        {
            if(!visited[i])
            {
                visited[i]=true;
                parent[i]=front;
                q.push(i);
            }
        }
    }
    
    vetcor<int>ans;
    int currentnode=t;
    while(currentnode!=s)
    {
        currentnode=parent[currentnode];
        ans.push_back(currentnode);
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
    
}