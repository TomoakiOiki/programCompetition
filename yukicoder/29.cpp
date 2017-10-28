#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define aLL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define MAX_N 1000
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}


int main(){
    int n;
    cin >> n;
    int times[10];
    int level = 0;
    for(int i = 0;i < 10;i++)times[i] = 0;

    for(int i = 0;i < n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        a--;b--;c--;
        times[a]++;
        times[b]++;
        times[c]++;
    }
    for(int i = 0;i < 10;i++){
        while(times[i] > 1){
            times[i] -= 2;
            level++;
        }
    }
    int sum = 0;
    for(int i = 0;i < 10;i++){
        sum += times[i];
    }
    level += sum/4;
    P(level);
}
