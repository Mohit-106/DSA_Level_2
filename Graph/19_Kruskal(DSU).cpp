#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src = 0;
    int nbr = 0;
    int wt = 0;

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

class comp
{
public:
    bool operator()(Edge const &a, Edge const &b) const
    {
        return a.wt > b.wt;
    }
};

int find(int x, vector<int> &par, vector<int> &rank)
{
    if (par[x] == x)
    {
        return x;
    }
    par[x] = find(par[x], par, rank);
    return par[x];
}

void Union(int x, int y, vector<int> &par, vector<int> &rank)
{
    if (rank[x] > rank[y])
    {
        par[y] = x;
    }
    else if (rank[y] > rank[x])
    {
        par[x] = y;
    }
    else
    {
        par[x] = y;
        rank[y]++;
    }
}

int main()
{

    int vtces;
    cin >> vtces;
    vector<vector<Edge>> graph(vtces, vector<Edge>());
    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back(Edge(u, v, w));
        graph[v].push_back(Edge(v, u, w));
    }

    vector<bool> visited(vtces);
    priority_queue<Edge, vector<Edge>, comp> pq;
    for (int i = 0; i < vtces; i++)
    {
        for (Edge e : graph[i])
        {
            pq.push(e);
        }
    }

    vector<int> rank(vtces, 0);
    vector<int> par(vtces);
    for (int i = 0; i < vtces; i++)
    {
        par[i] = i;
    }

    while (pq.size() > 0)
    {

        Edge top = pq.top();
        pq.pop();
        int srcLeader = find(top.src, par, rank);
        int nbrLeader = find(top.nbr, par, rank);

        if (srcLeader != nbrLeader)
        {
            cout << top.src << "-" << top.nbr << "@" << top.wt << endl;
            Union(srcLeader, nbrLeader, par, rank);
        }
        
    }

    return 0;
}

//    public static void kruskals(ArrayList<Edge>[] graph){
//        PriorityQueue<Edge> pq = new PriorityQueue<>();
//        for(int v = 0; v < graph.length; v++){
//            for(Edge e: graph[v]){
//                pq.add(e);
//            }
//        }
//        parent = new int[graph.length];
//        rank = new int[graph.length];
//        for(int i = 0; i < graph.length; i++){
//            parent[i] = i;
//            rank[i] = 0;
//        }

//        while(pq.size() > 0){
//            Edge e = pq.remove();

//            int srcLead = find(e.src);
//            int nbrLead = find(e.nbr);

//            if(srcLead != nbrLead){
//                System.out.println(e.src + "-" + e.nbr + "@" + e.wt);

//                union(srcLead, nbrLead);
//            }
//        }
//    }

//    static int[] parent;
//    static int[] rank;

//    public static int find(int x){
//        if(parent[x] == x){
//            return x;
//        } else {
//            parent[x] = find(parent[x]);
//            return parent[x];
//        }
//    }
//    public static void union(int s1l, int s2l){
//        if(rank[s1l] < rank[s2l]){
//            parent[s1l] = s2l;
//        } else if(rank[s2l] < rank[s1l]){
//            parent[s2l] = s1l;
//        } else {
//            parent[s1l] = s2l;
//            rank[s2l]++;
//        }
//    }
// }