#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///SMO-1702027
void f1(char* txt,char* str, int n){
    char strng[80];
    int i=0,j=0,k=0;

    while(txt[i] != '\0')
    {
        if(i==n-1)
        {
            while(str[k] != '\0')
            {
                strng[j] = str[k];
                j++;
                k++;
            }
            int l=strlen(str);
            if(k==l)
            {
                strng[j]=txt[n];
                j++;
            }
        }
        else
        {
            strng[j] =txt[i];
            j++;
        }
        i++;
    }
    strng[j]='\0';
    puts(strng);
}
int main()
{
    char text[]="AAAAA",str[]="BBB";
    int x=1, y=3, z=6;
    f1(text,str,x);
    cout<<endl;
    f1(text,str,y);
    cout<<endl;
    f1(text,str,z);
    cout<<endl;
    return 0;
}
