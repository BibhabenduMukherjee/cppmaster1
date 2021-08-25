#pragma GCC optimize("O3")
#pragma GCC target("sse4")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

using namespace std;

#define sp << " " <<
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define int long long
#define double long double
#define INF (1e18 + 13)
#define mod2 998244353
#define PI 3.1415926535898

int power(int p, int j)
{
    int res = 1;
    p = p % mod;
    while (j > 0)
    {
        if (j & 1)
            res = (res * p) % mod;
        j = j >> 1;
        p = (p * p) % mod;
    }
    return res;
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int dice(int d, int p)
{
    uniform_int_distribution<int> uid(d, p);
    return uid(rng);
}
/*
int read()
{
       int cc = getc(stdin);
       for (;cc < '0' || cc > '9';)  cc = getc(stdin);
       int dp = 0;
       for (;cc >= '0' && cc <= '9';)
       {
          dp = dp * 10 + cc - '0';
          cc = getc(stdin);
       }
      return dp;
}

inline void print(int n)
{
  if (n == 0)
  {
    putchar('0');
    putchar('\n');
  }
  else if (n == -1)
  {
    putchar('-');
    putchar('1');
    putchar('\n');
  }
  else
  {
    char buf[20];
    buf[19] = '\n';
    int i = 18;
    while (n)
    {
      buf[i--] = n % 10 + '0';
      n /= 10;
    }
    while (buf[i] != '\n')
      putchar(buf[++i]);
  }
}

int n;

vector<vector<int>> mat_mul(vector<vector<int>> a,vector<vector<int>> b)
{
    int n=2;
    vector<vector<int>> dp2(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                dp2[i][j]+=((a[i][k]*b[k][j])%mod);
                dp2[i][j]%=mod;
            }
        }
    }
    return dp2;
}

vector<vector<int>> pow_mat(vector<vector<int>> mat_a,int p)
{
    if(p==1)
        return mat_a;
    vector<vector<int>> temp=pow_mat(mat_a,p/2);
    vector<vector<int>> res=mat_mul(temp,temp);
    if(p&1)
        res=mat_mul(res,mat_a);
    return res;
}
*/

bool is_prime[50013];
vector<int> primes;
vector< vector<int> > dp(50013);
double h=0;

class CentroidDecomp {
	
    using vi = vector<int>;
	using vvi = vector<vi>;
	int n;
	vi sub;
    vvi g;

  public:

    void dfs(int n,int p,int r,int d)
    {
        dp[r][d]++;
        for(auto i:g[n])
            if(i!=p)
                dfs(i,n,r,d+1);
    }

    void dfs1(int n,int p,int d,vector<int> &f)
    {
        while(f.size()<d+1)
            f.pb(0);
        f[d]++;
        for(auto i:g[n])
            if(i!=p)
                dfs1(i,n,d+1,f);
    }

	vi parent;
	CentroidDecomp(int n) {
		this -> n = n;
		sub.assign(n + 5, 0);
		g.assign(n + 5, vi());
		parent.assign(n + 5, 0);
	}
	CentroidDecomp(int n, vvi g) : CentroidDecomp(n) {
		this -> g = g;
	}
	CentroidDecomp(int n, vi *g) : CentroidDecomp(n) {
		for (int i = 0; i <= n; ++i) {
			this -> g[i] = g[i];
		}
	}
	// Calculate sizes of subtrees of each node.
	int subsize(int src, int par) {
		sub[src] = 1;
		for (int e: g[src]) {
			if (e != par) {
				sub[src] += subsize(e, src);
			}
		}
		return sub[src];
	}
	// Find the centroid in a subtree.
	int centroid(int src, int par, int n) {
		for (int e: g[src]) {
			if (e != par) {
				if (sub[e] > n / 2) {
					return centroid(e, src, n);
				}
			}
		}
		return src;
	}

	int decomp(int src, int par) {
		int nn = subsize(src, par);
		int c = centroid(src, par, nn);
		if (par == -1) {
			par = c;
		}

		dp[c].resize(nn/2+1);
		dfs(c,c,c,0);
		for(int i=0;i<primes.size();i++)
            if(primes[i]<dp[c].size())
                h+=2*dp[c][primes[i]];
            else
                break;
        vector<int> f;
        for(int e:g[c])
        {
            f.clear();
            dfs1(e,c,1,f);
            for(int i=0;i<f.size();i++)
                dp[c][i]-=f[i];
            for(int i=0;i<primes.size();i++)
            {
                if(primes[i]<(f.size()+dp[c].size()))
                {
                    for(int j=1;j<(f.size())&&j<primes[i];j++)
                        if((primes[i]-j)<dp[c].size())
                            h+=f[j]*dp[c][primes[i]-j];
                }
                else
                    break;
            }
            for(int i=0;i<f.size();i++)
                dp[c][i]+=f[i];
        }

		parent[c] = par;
		for (int e: g[c]) {
			g[e].erase(find(g[e].begin(), g[e].end(), c));
			int x = decomp(e, c);
			
		}
		return c;
	}
};

void precomp_primes(int n)
{
    for(int i=2;i*i<=n;i++)
        if(is_prime[i]==0)
            for(int j=i*i;j<=n;j+=i)
                is_prime[j]=1;
    for(int i=2;i<n;i++)
        if(is_prime[i]==0)
            primes.pb(i);
}

void solve()
{
    precomp_primes(50013);
    int n;
    cin >> n;
    vector<int> g[n+1];
    for(int i=0;i<n-1;i++)
    {
        int d,p;
        cin >> d >> p;
        g[d].pb(p);
        g[p].pb(d);
    }
    CentroidDecomp o(n,g);
    o.decomp(1,-1);
    double t=(n-1)*n;
    cout << fixed << setprecision(13) << h/t;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("test_file.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=1;
    //cin >> t;
    int y=t;
    while(t--)
    {
        //cout << "Case #" << y-t << ": ";
        solve();
    }
    return 0;
}
