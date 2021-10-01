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

string de101 = "ABBADCCABDCCABD", de102 = "ACCABCDDBBCDDBB";

int main()
{
    faster();
    ll F[93];
    F[1] = 1;
    F[2] = 1;
    FOR(i, 3, 92) F[i] = F[i - 1] + F[i - 2];
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}

