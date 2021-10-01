// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int n, m;
int rNum[] = {-1, 0, 0, 1};
int cNum[] = {0, -1, 1, 0};
int a[1005][1005];

struct Point
{
    int x;
    int y;
};

struct queueNode
{
    Point pt;
    int dis;
};

bool check(int r, int c)
{
    return (r >= 0) && (r < n) && (c >= 0) && (c < m);
}

int BFS(Point start, Point end)
{
    if(!a[start.x][start.y] || !a[end.x][end.y]) return -1;
    bool visited[1005][1005] = {};
    visited[start.x][start.y] = 1;
    queue<queueNode> q;
    queueNode s = {start, 0};
    q.push(s);
    while(!q.empty())
    {
        queueNode cur = q.front();
        Point pt = cur.pt;
        if (pt.x == end.x && pt.y == end.y) return cur.dis;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = pt.x + rNum[i];
            int c = pt.y + cNum[i];
            if(check(r, c) && a[r][c] && !visited[r][c])
            {
                visited[r][c] = 1;
                queueNode tmp = { {r, c}, cur.dis + 1 };
                q.push(tmp);
            }
        }
    }
    return -1;
}

int main()
{
    faster();
    int T, x, y, z, t;
    cin >> T;
    while(T--)
    {
        cin >> n >> m >> x >> y >> z >> t;
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        cout << BFS({x, y}, {z, t}) << endl;
    }
    return 0;
}

