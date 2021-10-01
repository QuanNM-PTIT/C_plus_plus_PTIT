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
#define PI 3.141592653589793238
#define endl '\n'

struct toaDo
{
    double x, y;
};

double calc(toaDo a, toaDo b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b. y) * (a.y - b.y));
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        toaDo A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        double AB, AC, BC;
        AB = calc(A, B);
        AC = calc(A, C);
        BC = calc(B, C);
        if(AB + AC > BC && AC + BC > AB && AB + BC > AC)
        {
            double p = (AB + AC + BC) / 2;
            double s = sqrt(p * (p - AB) * (p - AC) * (p - BC));
            double r = (AB * AC * BC) / (4 * s);
            cout << setprecision(3) << fixed << PI * r * r << endl;
        }
        else cout << "INVALID\n";
    }
    return 0;
}