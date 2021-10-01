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
char a[405][405];

void Fill(int x, int y, char Cur, char New)
{
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (a[x][y] != Cur) return;
    a[x][y] = New;
    Fill(x + 1, y, Cur, New);
    Fill(x - 1, y, Cur, New);
    Fill(x, y + 1, Cur, New);
    Fill(x, y - 1, Cur, New);
}

void Solve()
{
   F(i, 0, n) F(j, 0, m) if(a[i][j] == 'O') a[i][j] = '-';
   F(i, 0, n) if(a[i][0] == '-') Fill(i, 0, '-', 'O');
   F(i, 0, n) if(a[i][m - 1] == '-') Fill(i, m - 1, '-', 'O');
   F(i, 0, m) if(a[0][i] == '-') Fill(0, i, '-', 'O');
   F(i, 0, m) if(a[n - 1][i] == '-') Fill(n - 1, i, '-', 'O');
   F(i, 0, n) F(j, 0, m) if(a[i][j] == '-') a[i][j] = 'X';
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        Solve();
        F(i, 0, n)
        {
            F(j, 0, m) cout << a[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}

