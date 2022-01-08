#include<bits/stdc++.h>
#include <regex>
using namespace std;
typedef long long int lli;

#define all(arr) arr.begin(),arr.end()
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

    int nn;
    string s;

vector<int> computeLPS(string& s1)
{
    // Stores the longest proper prefix
    // and suffix for each character
    // in the string s1
    vector<int> lps(s1.length());
    int len = 0;
 
    // Set lps value 0 for the first
    // character of the string s1
    lps[0] = 0;
 
    int i = 1;
 
    // Iterate to fill the lps vector
    while (i < s1.length()) {
        if (s1[i] == s1[len]) {
            len = len + 1;
            lps[i] = len;
            i = i + 1;
        }
        else {
 
            // If there is no longest
            // proper prefix which is
            // suffix, then set lps[i] = 0
            if (len == 0) {
                lps[i] = 0;
                i = i + 1;
            }
 
            // Otherwise
            else
                len = lps[len - 1];
        }
    }
 
    return lps;
}
 
// Function to replace all the occurrences
// of the substring S1 to S2 in string S
string modifyString(string& s, string& s1,
                  string& s2)
{
    vector<int> lps = computeLPS(s1);
    int i = 0;
    int j = 0;
 
    // Stores all the starting index
    // from character S1 occurs in S
    vector<int> found;
 
    // Iterate to find all starting
    // indexes and store all indices
    // in a vector found
    while (i < s.length()) {
        if (s[i] == s1[j]) {
            i = i + 1;
            j = j + 1;
        }
 
        // The string s1 occurence is
        // found and store it in found[]
        if (j == s1.length()) {
            found.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < s.length()
                 && s1[j] != s[i]) {
            if (j == 0)
                i = i + 1;
            else
                j = lps[j - 1];
        }
    }
 
    // Stores the resultant string
    string ans = "";
    int prev = 0;
 
    // Traverse the vector found[]
    for (int k = 0; k < found.size(); k++) {
        if (found[k] < prev)
            continue;
        ans.append(s.substr(prev, found[k] - prev));
        ans.append(s2);
        prev = found[k] + s1.size();
    }
 
    ans.append(s.substr(prev,
                        s.length() - prev));
 
    // Print the resultant string
    if(ans.size()==0) return s;
    else return ans;
}
void solve(int testcase) {
    cin >> nn;
    cin >> s;
    string a  = "01";
    string b= "2";
    string c  = "12";
    string d= "3"; 
    string e  = "23";
    string f= "4";
    string g  = "34";
    string h= "5";
    string i  = "45";
    string j= "6";
    string k  = "56";
    string l= "7";
    string m  = "67";
    string n= "8";
    string o  = "78";
    string p= "9";
    string q  = "89";
    string r= "0";
    string ss = "90";
    string t= "1";
    for(int x=0;x<1e4;x++){
        s=modifyString(s,a,b);
        s=modifyString(s,c,d);
        s=modifyString(s,e,f);
        s=modifyString(s,g,h);
        s=modifyString(s,i,j);
        s=modifyString(s,k,l);
        s=modifyString(s,m,n);
        s=modifyString(s,o,p);
        s=modifyString(s,q,r);
        s=modifyString(s,ss,t);
    }

    cout << "Case #" << testcase+1 << ": " << s << endl;
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
