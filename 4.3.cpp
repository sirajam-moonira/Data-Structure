#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///SMO-1702027
ll N(ll n)
{
    if (n== 0)
    {
        return 0;
    }
    else if (n== 1)
    {
        return 1;
    }
    else
    {
        return(N(n-1) + N(n-2));
    }
}

int main()
{
    ll n;
    scanf("%lld",&n);
    if (n< 0)
    {
        return 0;
    }
    else
    {
        printf("%lld",N(n));
    }

    return 0;
}


