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
//#define F(i, a, b) for(int i = a; i < b; ++i)
//#define FD(i, a, b) for(int i = a; i > b; --i)
//#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define vi vector<int>
//#define vll vector<ll>
//#define vb vector<bool>
//#define endl '\n'

#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000005];
    scanf("%s", s);
    int A = 0, B = 0, len = strlen(s);
    for(int i = 0; i < len; ++i)
    {
        if(s[i] == 'A')
        {
            if(A < B) B = A + 1;
            else ++B;
        }
        else
        {
            if(A < B) ++A;
            else A = B + 1;
        }
    }
    printf("%d", A);
    return 0;
}
