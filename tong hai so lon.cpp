#include<iostream>
#include<string>
using namespace std;
string cong(string s,string x)
{
    while (s.size()<x.size())
        s='0'+s;
    while(x.size()<s.size())
        x='0'+x;
    int nho=0;
    string c="";
    for(int i=s.size()-1;i>=0;i--)
    {
        int tong=(s[i]-'0')+(x[i]-'0')+nho;
        if(tong>=10)
            nho=1;
        else nho=0;
        c=char(tong%10+'0')+c;
    }
    if(nho==1)
        c='1'+c;
    /*while(c.size()>1&&c[0]=='0')
    {
        c.erase(0,1);
    }*/
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<cong(a,b)<<endl;
    }
}
