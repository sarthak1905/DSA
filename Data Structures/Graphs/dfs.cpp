#include<bits/stdc++.h>

using namespace std;

void print_dfs(vector<vector<int>> &graph)
{
    stack<int> st;
    st.push(0);
    while(!st.empty())
    {
        int current_node = st.top();
        st.pop();
        cout << current_node << " ";
        for(auto i:graph[current_node])
            st.push(i);
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
    print_dfs(graph);
    //print_graph(graph);
    return 0;
}