#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>v;
        queue<int>q;
        q.push(0);
        vector<int>visited(V,0);
        visited[0]=1;
        
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            v.push_back(front);
            for(auto i:adj[front])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;            
                    
                }
            }
        }
        return v;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
