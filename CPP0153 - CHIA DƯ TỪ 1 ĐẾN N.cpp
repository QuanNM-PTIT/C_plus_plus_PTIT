//// Created by Nguyễn Mạnh Quân
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//#define mp make_pair
//#define fi first
//#define se second
//#define pb push_back
//#define sz size()
//#define ll long long
//#define FOR(i, a, b) for(int i = a; i <= b; ++i)
//#define FORD(i, a, b) for(int i = a; i >= b; --i)
//#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
//#define vi vector<int>
//#define vll vector<ll>
//
//int main()
//{
//    faster();
//    int t, a, m;
//    cin >> t;
//    while(t--)
//    {
//        int ans = -1;
//        cin >> a >> m;
//        for(int i = 0; i < m; ++i)
//        {
//            if(a * i % m == 1)
//            {
//                ans = i;
//                break;
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
//

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long n, k, ans, a, b;
    while(t--)
    {
        scanf("%lld%lld", &n, &k);
        a = k - 1;
        b = n % k;
        if(!k) ans = 0;
        else ans = a * (a + 1) / 2 * (n / k) + b * (b + 1) / 2;
        printf("%lld\n", ans);
    }
    return 0;
}


