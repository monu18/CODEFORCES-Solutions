#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {

    string a;
    int len,i,flag,len1;
    cin>>a;

    len=a.length();
    len1=(len+1)/2;
    //printf("%d\n",len1);
    for(i=0; i<len1; i++)
    {
        if(a[i]=='A'&&a[len-i-1]=='A')
        {
            flag=1;
        }
        else if(a[i]=='H'&&a[len-i-1]=='H')
        {
            flag=1;
        }
        else if(a[i]=='I'&&a[len-i-1]=='I')
        {
            flag=1;
        }
        else if(a[i]=='M'&&a[len-i-1]=='M')
        {
            flag=1;
        }
        else if(a[i]=='b'&&a[len-i-1]=='d')
        {
            flag=1;
        }
        else if(a[i]=='d'&&a[len-i-1]=='b')
        {
            flag=1;
        }
        else if(a[i]=='O'&&a[len-i-1]=='O')
        {
            flag=1;
        }
        else if(a[i]=='o'&&a[len-i-1]=='o')
        {
            flag=1;
        }
        else if(a[i]=='T'&&a[len-i-1]=='T')
        {
            flag=1;
        }
        else if(a[i]=='U'&&a[len-i-1]=='U')
        {
            flag=1;
        }
        else if(a[i]=='V'&&a[len-i-1]=='V')
        {
            flag=1;
        }
        else if(a[i]=='v'&&a[len-i-1]=='v')
        {
            flag=1;
        }
        else if(a[i]=='W'&&a[len-i-1]=='W')
        {
            flag=1;
        }
        else if(a[i]=='w'&&a[len-i-1]=='w')
        {
            flag=1;
        }
        else if(a[i]=='X'&&a[len-i-1]=='X')
        {
            flag=1;
        }
        else if(a[i]=='Y'&&a[len-i-1]=='Y')
        {
            flag=1;
        }
        else if(a[i]=='x'&&a[len-i-1]=='x')
        {
            flag=1;
        }
        else if(a[i]=='p'&&a[len-i-1]=='q')
        {
            flag=1;
        }
        else if(a[i]=='q'&&a[len-i-1]=='p')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("TAK\n");
    else
        printf("NIE\n");




  return 0;
}
