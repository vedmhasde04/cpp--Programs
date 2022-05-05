#include <bits/stdc++.h>
using namespace std;
class Graph
{
int V;
list<int> *adj; // Pointer to array containing adjacency lists
public:
Graph(int V);
void addEdge(int v, int w);
void BFS(int s);
};
Graph::Graph(int V)
{
this->V = V;
adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
adj[v].push_back(w);
}
void Graph::BFS(int s) // prints BFS traversal from s
{
bool *visited = new bool[V];
for (int i = 0; i < V; i++)
visited[i] = false; // initilize all vertices as not visited
list<int> queue;
visited[s] = true; // mark current node visited
queue.push_back(s); // enqueue it
// 'i' will be used to get all adjacent vertices of a vertex
list<int>::iterator i;
while (!queue.empty())
{
// Dequeue a vertex from queue and print it
s = queue.front();
cout << s << " ";
queue.pop_front();
for (i = adj[s].begin(); i != adj[s].end(); ++i)
{
if (!visited[*i])
{
visited[*i] = true;
queue.push_back(*i);
}
}
}
56;
57;
58;
59;
60;
61;
62;
63;
64;
65;
66;
67;
68;
69;
70;
71;
72;
73;
74;
75;
76;
77;
78;
}
int main()
{
Graph g(7);
g.addEdge(0, 1);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(0, 3);
g.addEdge(3, 2);
g.addEdge(4, 3);
g.addEdge(4, 2);
g.addEdge(3, 5);
g.addEdge(5, 4);
g.addEdge(6, 4);
g.addEdge(5, 6);
cout << "Breadth First Traversal \n";
g.BFS(1);
return 0;
}