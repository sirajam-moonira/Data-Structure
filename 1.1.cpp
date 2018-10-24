#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///SMO-1702027
void findpos(string & strng, string & substrng){

    int sbl= substrng.length();
    int max= strng.length()- sbl +1;

    int i=0, j=0 ,k=0;

    for(i = 0, j = 0; strng[i]!='\0' && substrng[j]!='\0'; i++)
    {
        if(strng[i] == substrng[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if(j == sbl)
        cout<<substrng<<"   found at position "<< i - j + 1<<" from :   "<<strng<<endl;
    else
        cout<<substrng<<"   not found from :   "<<strng<<endl;

}
int main()
{
    string S="JOHN PAUL JONES", T="A THING OF BEAUTY IS A JOY FOREVER";
    string sb1="JO",sb2="JOY",sb3="A",sb4="THE";
    findpos(S,sb1);
    findpos(T,sb1);cout<<endl;
    findpos(S,sb2);
    findpos(T,sb2);cout<<endl;
    findpos(S,sb3);
    findpos(T,sb3);cout<<endl;
    findpos(S,sb4);
    findpos(T,sb4);cout<<endl;
    return 0;
}
