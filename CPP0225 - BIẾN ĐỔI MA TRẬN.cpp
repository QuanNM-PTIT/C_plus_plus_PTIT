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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int t, n, a[105][105];
int maxRow, maxColumn, sumAll;

int main()
{
    faster();
    cin >> t;
    while(t--)
    {
        sumAll = 0;
        priority_queue<int> pqRow, pqColumn;
        cin >> n;
        FOR(i, 1, n)
        {
            int sum = 0;
            FOR(j, 1, n)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
            pqRow.push(sum);
        }
        FOR(i, 1, n)
        {
            int sum = 0;
            FOR(j, 1, n) sum += a[j][i];
            pqColumn.push(sum);
        }
        maxRow = pqRow.top();
        maxColumn = pqColumn.top();
        while(!pqRow.empty())
        {
            sumAll += pqRow.top();
            pqRow.pop();
        }
        cout << max(maxRow, maxColumn) * n - sumAll << endl;
    }
    return 0;
}
