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

struct toaDo
{
    double x, y;
};

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        double sum = 0;
        cin >> n;
        toaDo a[n];
        F(i, 0, n) cin >> a[i].x >> a[i].y;
        --n;
        F(i, 0, n) sum += (a[i].x * a[i + 1].y - a[i].y * a[i + 1].x);
        sum += (a[n].x * a[0].y - a[n].y * a[0].x);
        cout << setprecision(3) << fixed << sum / 2 << endl;
    }
    return 0;
}
