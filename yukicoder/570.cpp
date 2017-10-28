#include "bits/stdc++.h"

#define rep(a,b) for(int a = 0;a < b;a++)
#define REP(i, x, n) for(int i = x; i < n; i++)
#define P(a) cout << a << endl
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int dx[] = { 1, -1 , 0 , 0 };
int dy[] = { 0,  0,  1, -1 };
ll MOD = 1000000007;
unsigned long long str_to_int(std::string str) {
  unsigned long long ret;
  std::stringstream ss; ss << str;
  ss >> ret;
  return ret;
}

int main() {
  vector<int> v;
  string s[] = {"A","B","C"};
  rep(i,3){
    int a;cin >> a;
    v.push_back(a);
  }
  map<int,string> m;
  rep(i,3){
    m[v[i]] = s[i];
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  rep(i,3){
    cout << m[v[i]] << endl;
  }
}
