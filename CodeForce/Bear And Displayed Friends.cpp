/*
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
typedef long long LL;

const int MOD = 1e9 + 7;
const int MAXN = 2*1e5 + 10;
void add(LL &x, LL y) { x += y; x %= MOD; }
bool vis[MAXN];
int a[MAXN];
struct Node {
    int index, v;
    friend bool operator < (Node a, Node b) {
        return a.v > b.v;
    }
};
int main()
{
    int n, q, k;
    while(scanf("%d%d%d", &n, &k, &q) != EOF) {
        for(int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            vis[i] = false;
        }
        priority_queue<Node> Q; Node now;
        while(q--) {
            int op, id;
            scanf("%d%d", &op, &id);
            if(op == 1) {
                now.index = id; now.v = a[id];
                Q.push(now);
                vis[id] = true;
                if(Q.size() > k) {
                    now = Q.top(); Q.pop();
                    vis[now.index] = false;
                }
            }
            else {
                printf(vis[id] ? "YES\n" : "NO\n");
            }
        }
    }
    return 0;
}
*/