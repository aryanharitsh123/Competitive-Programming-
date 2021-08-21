#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
void add_edge(vector<int> adj[],
			int src, int dest)
{
	adj[src].push_back(dest);
	adj[dest].push_back(src);
}

void find_paths(vector<vector<int> >& paths,
				vector<int>& path,
				vector<int> parent[],
				int n, int u)
{

	if (u == -1) {
		paths.push_back(path);
		return;
	}

	for (int par : parent[u]) {

		path.push_back(u);

		find_paths(paths, path, parent,
				n, par);

		path.pop_back();
	}
}

void bfs(vector<int> adj[],
		vector<int> parent[],
		int n, int start)
{
	vector<int> dist(n, INT_MAX);

	queue<int> q;

	q.push(start);
	parent[start] = { -1 };
	dist[start] = 0;

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int v : adj[u]) {
			if (dist[v] > dist[u] + 1) {

				dist[v] = dist[u] + 1;
				q.push(v);
				parent[v].clear();
				parent[v].push_back(u);
			}
			else if (dist[v] == dist[u] + 1) {

				parent[v].push_back(u);
			}
		}
	}
}

void print_paths(vector<int> adj[],
				int n, int start, int end)
{
	vector<vector<int> > paths;
	vector<int> path;
	vector<int> parent[n];

	bfs(adj, parent, n, start);

	find_paths(paths, path, parent, n, end);

	/*for (auto v : paths) {

		reverse(v.begin(), v.end());

		for (int u : v)
			cout << u << " ";
		cout << endl;
	}*/
    cout << paths.size()%MOD << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
    cin >> n >> m;
	vector<int> adj[n];
    int u,v;
	for(int i=0;i<m;i++){
        cin >> u >> v;
        u--,v--;
	    add_edge(adj, u, v);
    }
	int src = 0;
	int dest = n - 1;

	print_paths(adj, n, src, dest);

	return 0;
}
