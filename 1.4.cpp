#include<bits/stdc++.h>
using namespace std;
#define size 3000000
typedef long long ll;
///SMO-1702027
void DEL(char* txt,int m, int n){
    cout<<"After Deleting:"<<endl;
    char str[size];
    int i=0,j=0,k=m-1;
    for(j=0; j<k; j++)
    {
        str[i]=txt[j];
        i++;
    }
    for(j=j+n; txt[j]!='\0'; j++)
    {
        str[i]=txt[j];
        i++;
    }
    str[j]='\0';
    puts(str);
}
void REP(string & str, string & substr1, string & substr2)
{
    cout<<"After removing:"<<endl;
    int b= substr1.length();
    int n= substr2.length();
    int max= str.length()- b +1;

    int i=0, j=0,k=0;

    for(i = 0, j = 0; str[i]!='\0' && substr1[j]!='\0'; i++)
    {
        if(str[i] == substr1[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    char new_str[80]= {'\0'};
    if(j==b)
    {
        int m=i-j+1;
        for(i=0; i<m-1; i++)
        {
            new_str[k]=str[i];
            k++;
        }

        int save=i;
        for(i=0; substr2[i]!='\0'; i++)
        {
            new_str[k]=substr2[i];
            k++;
        }

        int n=save+j;
        for(n; str[n]!='\0'; n++)
        {
            new_str[k]=str[n];
            k++;
        }
        new_str[k]='\0';

        cout<<new_str<<endl;

    }

    else
    {
        cout<<str<<endl;
    }
}
int main()
{
    char text1[]="AAABBB",text2[]="JOHN PAUL JONES";
    DEL(text1,2,2);///delete
    cout<<endl;
    DEL(text2,6,5);
    cout<<endl;
    string s1="AAABBB", s2="AA", s3="BB", a1="JOHN PAUL JONES", a2="PAUL", a3="DAVID";
    REP(s1,s2,s3);///replace
    cout<<endl;
    REP(a1,a2,a3);
    return 0;
}
