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

bool check(int n)
{
    int cnt=0;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        int kt = 0;
        while(n % i == 0)
        {
            cnt++;
            kt++;
            if(kt == 2) return 0;
            n /= i;
        }
    }
    if(n > 1) cnt++;
    return cnt == 3;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}
