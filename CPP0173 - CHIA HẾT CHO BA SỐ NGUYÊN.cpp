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

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll lcm = a * b / gcd(a, b);
        lcm = lcm * c / gcd(lcm, c);
        ll temp2 = pow(10, d - 1);
        if(lcm <= temp2)
        {
            ll temp3 = temp2 / lcm;
            if(temp2 % lcm == 0 && lcm * temp3 < temp2 * 10) cout << lcm * temp3;
            else if(temp2 % lcm != 0 && lcm * (temp3 + 1) < temp2 * 10) cout << lcm * (temp3 + 1);
            else cout << -1;
        }
        else
        {
            if(lcm < temp2 * 10) cout << lcm;
            else cout << -1;
        }
        cout << endl;
    }
    return 0;
}
