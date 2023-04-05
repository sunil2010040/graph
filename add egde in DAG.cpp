#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph
{
    public:
    unordered_map<int,list<pair<int,int>>>adj;
    
    void addedge(int u,int v,int w)
    {
        pair<int,int>p=make_pair(v,w);
        adj[u].push_back(p);
    }
    
    void printadj()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j: i.second)
            {
                cout<<"("<<j.first<<","<<j.second<<"),";
                
            }
            cout<<endl;
        }
    }
};



int main()
{
    graph g;
    g.addedge(0,1,5);
    g.addedge(0,2,3);
    g.addedge(1,2,2);
    g.addedge(1,3,6);
    g.addedge(2,3,7);
    g.addedge(2,4,4);
    g.addedge(2,5,2);
    g.addedge(3,4,-1);
    g.addedge(4,5,5-2);
    
    g.printadj();
    return 0;
}

