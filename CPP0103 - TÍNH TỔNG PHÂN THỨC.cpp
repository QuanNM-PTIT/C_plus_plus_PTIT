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

bool check(string &s)
{
    if(s.length() < 2) return 0;
    int len = s.length() - 1;
    return (s[len - 1] == '8' && s[len] == '6');
}

int main()
{
    faster();
    int n;
    cin >> n;
    double sum = 1;
    FOR(i, 2, n) sum += 1.0 / i;
    cout << setprecision(4) << fixed << sum;
    return 0;
}
