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
int a[20][20];
  
void swap(int r1, int r2, int c)
{
    F(i, 0, c)
    {
        int tmp = a[r1][i];
        a[r1][i] = a[r2][i];
        a[r2][i] = tmp;
    }
}

int calc()
{
    int rank = m;
 
    F(i, 0, rank)
    {
        if (a[i][i])
        {
           F(j, 0, n)
           {
               if (i != j)
               {
                 double mul = (double) a[j][i] / a[i][i];
                 F(x, 0, rank) a[j][x] -= mul * a[i][x];
               }
           }
        }
        else
        {
            bool check = 1;
            F(j, i + 1, n)
            {
                if(a[j][i])
                {
                    swap(i, j, rank);
                    check = 0;
                    break;
                }
            }
            if(check)
            {
                --rank;
                F(j, 0, n) a[j][i] = a[j][rank];
            }
            --i;
        }
    }
    return rank;
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
        cout << calc() << endl;
    }
    return 0;
}
