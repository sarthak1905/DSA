#include<bits/stdc++.h>

using namespace std;

void print_bfs(vector<vector<int>> &graph)
{
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int current_node = q.front();
        q.pop();
        cout << current_node << " ";
        for(auto i:graph[current_node])
            q.push(i);
    }
    return;
}


void print_graph(vector<vector<int>> &graph)
{
    for(int i = 0; i < graph.size(); ++i)
    {
        cout << i << "-> ";
        for(int j=0; j<graph[i].size(); ++j)
            cout << graph[i][j] << " ";
        cout << endl;
    }
    return;
}


int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<vector<int>> graph(nodes);
    for(int i = 0; i < edges; ++i)
    {
        int start_node, end_node;
        cin >> start_node >> end_node;
        graph[start_node].push_back(end_node);
        //graph[end_node].push_back(start_node);
    }
    print_bfs(graph);
    cout << endl;
    print_graph(graph);
    return 0;
}