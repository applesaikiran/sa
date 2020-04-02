#include <iostream>
#include <stdlib.h>
#include <thread>
using namespace std;
int x=0,y=0;
int px=0,py=0;
int p=0;
char c='>';
void input()
{
char s;
cin>>s;
if(s=='s')
{
y=y+1;
for(int s=0;s<p;s++)
c='v';
}
if(s=='w')
{
y=y-1;
c='^';
}
if(s=='a')
{
x=x-1;
c='<';
}
if(s=='d')
{
x=x+1;
c='>';
}
}
void print()
{
system("CLS");
if((x==px)&&(y==py))
{
px=rand()%10;
py=rand()%10;
p=p+1;
}
cout<<"############################################################"<<endl;
for(int j=0;j<=20;j++)
{
for(int i=0;i<=30;i++)
{
if((i==0)||(i==30))
{
cout<<"#";
}
if((i==px)&&(j==py))
{
cout<<'x';
}
else
{
cout<<" ";
}
if((i==x)&&(j==y))
{
cout<<c;
}
else
{
if((c=='<')&&(j==y)&&(i-x<p)&&(i-x>0))
{
     cout<<"0";
}
else if((c=='>')&&(j==y)&&(x-i<p)&&(x-i>0))
{
     cout<<"0";
}
else if((c=='^')&&(i==x)&&(j-y<p)&&(j-y>0))
{
cout<<"0";
}
else if((c=='v')&&(i==x)&&(y-j<p)&&(y-j>0))
{
     cout<<"0";
}
else
{cout<<" ";}
}
}
cout<<endl;
}
cout<<"############################################################"<<endl;
cout<<"x "<<x<<" | "<<"y "<<y<<" | "<<"p "<<p-1<<endl;
cout<<"A/W/S/D to move"<<endl;
}
int main()
{
max_execution_time=5000
while(true)
{
print();
input();
}
return 0;
}
