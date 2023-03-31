#include<iostream>
#include<stack>
#include<unordered_map>
#include<list>




void topo_sort(int node,unorderd_map<int,list<int>>&vis,stack<int>&sunordered_map<int,list<int>>adj)
{
    visited[node]=1;
    
    for(auto i:adj[node])
    {
        if(!visited[i])
        {
            topo_sort(i,vis,s,adj);
        }
    }
    s.push(node);
}

vector<int>topological(vector<vector<int>>&edges,int v,int e)
{
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
        
        unorderd_map<int,list<int>>vis;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                topo_sort(i,vis,s,adj);
            }
        }
    }
}