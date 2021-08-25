


#include<stdio.h>
#define MAXN   100005

int par[MAXN], sz[MAXN];
/*
    par[i] = parent of the i-th node
    sz[i]  = size of the component which is being represented by the i-th node
*/

void init(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        par[i] = i;
        sz[i] = 1;
    }
}

int findParent(int idx)
{
    if(par[idx] == idx) return idx;
    return par[idx] = findParent(par[idx]);
}

void Union(int u, int v)
{
    int par_u = findParent(u);
    int par_v = findParent(v);

    if(par_u == par_v) return;

    par[par_u] = par_v;     // updating the parent of the new component
    sz[par_v] += sz[par_u]; // updating the size of the new component
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k, n, cur_sz;
    int u, v, mx = 0, mn = MAXN;

    scanf("%d", &n);
    init(2*n);
    

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &u, &v);
        Union(u, v);
    }

    for(i = 1; i <= 2*n; i++)
    {
        cur_sz = sz[findParent(i)];
        if(cur_sz > mx) mx = cur_sz;
        if(cur_sz > 1 && cur_sz < mn) mn = cur_sz;
    }

    printf("%d %d\n", mn, mx);
    return 0;
}
