#include<iostream>
using namespace std;
struct element
{
int ele[5];
};
class flight
{
public:
element m[5];
flight()
{
m[0].ele[1]=m[0].ele[3]=m[1].ele[2]=m[3].ele[2]=m[3].ele[4]=1;
}
void input()
{
cout<<"\n1.Mumbai";
cout<<"\n2.Pune";
cout<<"\n3.Delhi";
cout<<"\n4.Kolkata";
cout<<"\n5.Dubai";
string src,dst;
cout<<"\nEnter source:";
cin>>src;
cout<<"\nEnter destination:";
cin>>dst;
int s=getnum(src);
int d=getnum(dst);
compute(s,d);
}

void compute(int s,int d)
{
if(m[s-1].ele[d-1]==1){cout<<"\nCongratulations,flight found!";}
else{cout<<"\nSorry,flight not found!";}
}

int getnum(string ip)
{
if(ip=="Mumbai"){return 1;}
if(ip=="Pune"){return 2;}
if(ip=="Delhi"){return 3;}
if(ip=="Kolkata"){return 4;}
if(ip=="Dubai"){return 5;}

}
};

int main()
{
int flag=0;
flight f;
while(flag==0)
{
int ch;
cout<<"\n1.Input data\n2.Exit\nEnter choice:";
cin>>ch;
if(ch==1){f.input();}
else{flag=1;}
}
}

