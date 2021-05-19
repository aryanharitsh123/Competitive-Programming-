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
#define add(a, b) (a%MOD+b%MOD)%MOD

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

vector<int> sizeOfSubtree;
vector<vector<int> > adjList;

lli finalAns;

int calSize(int rootNode, int parentNode) {
  int currentSize = 1;
  for(auto toNode:adjList[rootNode]) {
    if(toNode == parentNode) {
      continue;
    }
    currentSize += calSize(toNode, rootNode);
  }
  sizeOfSubtree[rootNode] = currentSize;
  return currentSize;
}

void valueDFS(int rootNode, lli curValue, int parentNode) {
  set<pi, greater<pi> > q;
  for(auto toNode:adjList[rootNode]) {
    if(toNode==parentNode) continue;
    q.insert({sizeOfSubtree[toNode], toNode});
  }

  lli mulValue = 1;
  for(auto currentPair:q) {
    int toNode = currentPair.second;
    if(toNode==parentNode) continue;
    finalAns = add(finalAns, mul(curValue, mulValue));
    valueDFS(toNode, mul(curValue, mulValue), rootNode);
    ++mulValue;
  }
}

void solve(int testcase) {
    
    lli vertices, valueRoot;
    cin >> vertices >> valueRoot;
    adjList.clear();
    adjList.resize(vertices);
    lli fromNode, toNode;
    for(int index = 0; index < vertices-1; index++) {
      cin >> fromNode >> toNode, fromNode--, toNode--;
      adjList[fromNode].push_back(toNode);
      adjList[toNode].push_back(fromNode);
    }

    vector<int> valueNode(vertices, 0);
    int rootNode = 0;
    valueNode[rootNode] = valueRoot;
    sizeOfSubtree.clear();
    sizeOfSubtree.resize(vertices, 0);
    calSize(rootNode, -1);
    finalAns = 0;
    valueDFS(rootNode, 1, -1);
    finalAns = add(finalAns, valueRoot);
    cout <<  finalAns << endl;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  lli testcases=1;
  cin >> testcases;
  for(int testcase=0; testcase<testcases; testcase++) {
    solve(testcase);
  }
}
