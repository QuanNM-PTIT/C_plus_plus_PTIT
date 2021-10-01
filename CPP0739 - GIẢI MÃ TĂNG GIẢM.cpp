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
 
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans = "";
        stack<int> st;
        FOR(i, 0, s.length())
        {
            st.push(i+1);
            if (i == s.length() || s[i] == 'I')
            {
                while(!st.empty())
                {
                    stringstream ss;
                    string tmp;
                    ss << st.top();
                    ss >> tmp;
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}  
