#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

#define all(arr) arr.begin(),arr.end()
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
#define inf 0x3f3f3f3f
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define space ' '
#define kick(t) cout << "Case #" << t+1 << ":" << endl;

typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

template <typename T>
void input(vector<T> &arr,lli n) {
  T temp;
  for(lli i=0;i<n;i++) cin>>temp, arr.push_back(temp);
}

template <typename T>
void output(vector<T> arr) {
  for(auto x:arr) cout<<x<<" ";
  cout<<endl;
}


template <typename T>
void input_set(set<T> &arr,lli n) {
  T temp;
  for(lli i=0;i<n;i++) cin>>temp, arr.insert(temp);
}

lli mul(lli a, lli b) {
  return (a%MOD*b%MOD)%MOD;
}

lli power(lli a,lli b) {
  lli ans = 1;
  while(b > 0) {
    if(b&1)
      ans = mul(ans, a);
    a = mul(a,a);;
    b >>= 1;
  }
  return ans;
}
vector<vector<int>> adj(vertex);
void minEdgeDFSUtil(vector<bool>& visited,
                           int src, int des, int& min_num_of_edges,
                           int& edge_count)
{
    // For keeping track of visited
    // nodes in DFS
    visited[src] = true;
 
    // If we have found the destination vertex
    // then check whether count of total number of edges
    // is less than the minimum number of edges or not
    if (src == des) {
        if (min_num_of_edges > edge_count)
            min_num_of_edges = edge_count;
    }
 
    // If current vertex is not destination
    else {
 
        // Recur for all the vertices
        // adjacent to current vertex
        list<int>::iterator i;
 
        for (i = adj[src].begin(); i != adj[src].end(); i++) {
            int v = *i;
 
            if (!visited[v]) {
                edge_count++;
 
                minEdgeDFSUtil(visited, v, des, min_num_of_edges,
                               edge_count);
            }
        }
    }
 
    // Decrement the count of number of edges
    // and mark current vertex as unvisited
    visited[src] = false;
    edge_count--;
}
 
// Function to print minimum number of edges
// It uses recursive minEdgeDFSUtil
minEdgeDFS(int u, int v)
{
    // To keep track of all the
    // visited vertices
    vector<bool> visited(V, false);
 
    // To store minimum number of edges
    int min_num_of_edges = INT_MAX;
 
    // To store total number of
    // edges in each path
    int edge_count = 0;
 
    minEdgeDFSUtil(visited, u, v, min_num_of_edges,
                   edge_count);
 
    // Print the minimum number of edges
    cout << min_num_of_edges;
}


void solve(int testcase) {
    int vertex, edges;
    vector<vector<int> > adj(vertex);
    cin >> vertex;
    edges=vertex-1;
    for(int i=0; i<edges; i++) {
        int u, v;
        cin >> u >> v, --u, --v;
        adj[u].pb(v);
    }
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  lli testcases=1;
  //cin >> testcases;
  for(int testcase=0; testcase<testcases; testcase++) {
    solve(testcase);
  }
}
