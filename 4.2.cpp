#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///SMO-1702027
ll FACTORIAL(ll n)
{
    if (n >= 1)
        return n*FACTORIAL(n-1);
    else
        return 1;
}

int main()
{
    ll n;
    scanf("%lld",&n);
    printf("%lld",FACTORIAL(n));
    return 0;
}

