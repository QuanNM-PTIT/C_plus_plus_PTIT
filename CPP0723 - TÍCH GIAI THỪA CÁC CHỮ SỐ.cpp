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
  
string giaithua(char a)
{
    if (a=='0' || a=='1') return "1";
    else if (a=='2') return "2";
    else if (a=='3') return "3";
    else if (a=='4') return "322";
    else if (a=='5') return "5";
    else if (a=='6') return "53";
    else if (a=='7') return "7";
    else if (a=='8') return "7222";
    else if (a=='9') return "7332";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string a;
        cin >> n >> a;
        string tmp = "";
        for (int i = 0; i < a.length(); ++i) tmp += giaithua(a[i]);
        sort(tmp.begin(), tmp.end(), greater<char>());
        while(tmp[tmp.length()-1] == '1') tmp.erase(tmp.end() - 1);
        cout<< tmp <<endl;
    }
    return 0;
}
