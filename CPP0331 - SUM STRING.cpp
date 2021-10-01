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

string string_sum(string str1, string str2)
{
    if (str1.size() < str2.size()) swap(str1, str2);
  
    int m = str1.length();
    int n = str2.length();
    string ans = "";
    int carry = 0;
    F(i, 0, n)
    {
        int ds = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry) % 10;
        carry = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry) / 10;
        ans = char(ds + '0') + ans;
    }
    F(i, n, m)
    {
        int ds = (str1[m - 1 - i] - '0' + carry) % 10;
        carry = (str1[m - 1 - i] - '0' + carry) / 10;
        ans = char(ds + '0') + ans;
    }
    if (carry) ans = char(carry + '0') + ans;
    return ans;
}

bool check(string str, int beg, int len1, int len2)
{
    string s1 = str.substr(beg, len1);
    string s2 = str.substr(beg + len1, len2);
    string s3 = string_sum(s1, s2);
    int s3_len = s3.length();
    if (s3_len > str.size() - len1 - len2 - beg) return 0;
    if (s3 == str.substr(beg + len1 + len2, s3_len))
    {
        if (beg + len1 + len2 + s3_len == str.size()) return 1;
        return check(str, beg + len1, len2, s3_len);
    }
    return 0;
}

bool isSumString(string str)
{
    int n = str.length();
    F(i, 1, n) for(int j = 1; i + j < n; ++j) if(check(str, 0, i, j)) return 1;
    return 0;
}
  
// Driver code
int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(isSumString(s)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
