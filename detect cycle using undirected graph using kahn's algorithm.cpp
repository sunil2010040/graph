vector<int> topological_sort(vector<vector<int>>&edges,int v,int e)
{
    for(int i=0;i<e;i++)
    {
        int u=edges[i].first-1;
        int v=edges[i].second-1;
        
        adj[u].push_back[v];
    }
    
    vector<int>indegree(v);
    for(auto i:adj)
    {
        for(auto j:second)
        {
            indegree[j]++;
        }
    }
    
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    
    
    
    int count=0;
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        
        count++;
        
        for(auto neighbour:adj[front])
        {
            indegree[neighbour]--;
            if(indegree[neighbour]==0)
            {
                q.push(neighbour);
            }
        }
    }
    
    if(count==n)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}    
    
    
    
    

 