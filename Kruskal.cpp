#include<bits/stdc++.h>
using namespace std;

/**
 * u, v and w are vertices and weight respectively
*/
class Edge {
  public:
    int u, v, w;
};

bool Comparator(Edge& a, Edge& b)
{
    return a.w < b.w;
}

void PrintAllEdges(vector<Edge>& edges)
{
    int n = edges.size();
    cout << "u\v\tw\n";
    for (int i = 0; i < n; i++) {
        cout << edges[i].u << "\t" << edges[i].v << "\t" << edges[i].w << '\n';
    }
}
int32_t main()
{
    int n; 
    cin >> n;
    vector<Edge> edges(n);
    for (auto& it : edges) {
        cin >> it.u >> it.v >> it.w; 
    }
    // Sorted in decreasing order
    sort(edges.begin(), edges.end(), Comparator);
    PrintAllEdges(edges);
    return 0;
}
