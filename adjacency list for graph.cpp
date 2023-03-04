#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;    //n=no of nodes, m=no of edges
    cin>>n>>m;
    
    vector<vector<int>> adjm(n+1,vector<int>(n+1, 0)); 
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adjm[x][y]=1;
        adjm[y][x]=1;
        
    }
    
    cout<<"adjacency matrix of above graph:"<<endl;
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {   
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;i<n+1;i++)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(adjm[3][7]==1)
    {
        cout<<"there is an edge between 3 and 7"<<endl;
    }
    
    else
    {
        cout<<"there is an no edge between 3 and 7"<<endl;
    }
    
    cout<<endl<<endl;
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adjm[x].push_back(y);
        adjm[y].push_back(x);
    }
    
    cout<<"adjacency list of above graph:"<<endl;
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<"->";
        for(int x:adjm[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}







