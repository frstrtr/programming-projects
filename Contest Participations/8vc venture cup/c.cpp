#include<bits/stdc++.h>
#define pii pair<int,int>
#define mkp make_pair
#define fs first
#define sc second
#define pb push_back
#define ppb pop_back()
#define pf printf
#define pf1(a) printf("%d\n",a)
#define hi printf("hi!\n");
#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sf1ll(a) scanf("%I64d",&a)
#define sf2ll(a,b) scanf("%I64d %I64d",&a,&b)
#define sf3ll(a,b,c) scanf("%I64d %I64d %I64d",&a,&b,&c)
#define pcase(x) printf("Case %d: ",x)
#define MX 1000000007
#define inf 1000000007
#define pi acos(-1.0)
#define mem(arr,x) memset((arr), (x), sizeof((arr)));
#define FOR(i,x) for(int i=0;i<(x); i++)
#define FOR1(i, x) for(int i = 1; i<=x ; i++)

using namespace std;
typedef long long int lint;
typedef double dbl;

vector<int> edge[10007];
int n;
int mark[10007];

void dfs(int node) {
    vector<int> & e = edge[node];

    mark[node]=1;

    FOR(i, e.size()) {
        int next=e[i];
        if(mark[next]) continue;

        dfs(next);
    }
}

int main()
{
    int t, tst = 1;
    sf1(n);

    FOR1(i, n) {
        int j;
        sf1(j);

        edge[i].pb(j);
        edge[j].pb(i);
    }

    int res=0;

    FOR1(i, n) {
        if(mark[i]) continue;

        res++;

        dfs(i);
    }

    cout << res << endl;
    return 0;
}
