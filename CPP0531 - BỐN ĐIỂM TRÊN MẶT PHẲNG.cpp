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

struct ToaDo
{
    int x;
    int y;
    int z;
};

ToaDo point[4];
ToaDo vec[3];
ToaDo vec_AB;

void input()
{
    F(i, 0, 4) cin >> point[i].x >> point[i].y >> point[i].z;
}

void solve()
{
    vec[0].x = (point[1].x - point[0].x);
    vec[0].y = (point[1].y - point[0].y);
    vec[0].z = (point[1].z - point[0].z);
    vec[1].x = (point[2].x - point[0].x);
    vec[1].y = (point[2].y - point[0].y);
    vec[1].z = (point[2].z - point[0].z);
    vec[2].x = (point[3].x - point[0].x);
    vec[2].y = (point[3].y - point[0].y);
    vec[2].z = (point[3].z - point[0].z);
    vec_AB.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
    vec_AB.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
    vec_AB.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x;
    int ans = 0;
    ans = vec_AB.x * vec[2].x + vec_AB.y * vec[2].y + vec_AB.z * vec[2].z;
    if (!ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        input();
        solve();
    }
    return 0;
}
