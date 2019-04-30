#include<iostream>
using namespace std;

class set
{public:
  int set1[50],size=-1;
void create()
{
int i,m;
cout<<"\nEnter how many elements to add:";
cin>>m;
for(i=0;i<m;i++){cout<<"\nEnter element:";
cin>>set1[i];size++;}
}
void display()
{int i;
for(i=0;i<=size;i++){cout<<"\nElement:"<<set1[i];}
}
void insert()
{
  int element;
  cout<<"Insert in set:"; 
  cin>>element;
set1[size]=element;size++;
size++;
}  
void remove()
{
  int element,ch; 
  cout<<"Enter the posision of element to be remove";
  cin>>element;
for(int i=element;i<=size;i++){set1[i]=set1[i+1];}
size--;
  }

void contains()
{
 int element,ch=0;
  cout<<"Enter the element to be searched:";
  cin>>element;
  for(int i=0;i<=size;i++){if(set1[i]==element){ch=1;break;}}
if(ch==1){cout<<"\nElement present!";}
else{cout<<"\nElement not present!";}
}
void size1()
{
int i,n=1;
for(i=0;i<=size;i++){cout<<"\nhi";n++;}
cout<<"\nSize is:"<<n;
}
};
int intersection(set s1,set s2)
{int i,j,a[50],b=0;
for(i=0;i<=s1.size;i++)
{
for(j=0;j<=s2.size;j++){if(s2.set1[j]==s1.set1[i]){a[b]=s2.set1[j];b++;}}
}
for(i=0;i<b;i++){cout<<"\nElement:"<<a[i];}
return a[50];
}

void Union(set s1,set s2)
{
int a[100],i,b=0,m[50],j;
for(i=0;i<=s1.size;i++){a[i]=s1.set1[i];b++;}
for(i=0;i<=s2.size;i++){a[b]=s2.set1[i];b++;}
m[50]=intersection(s1,s2);
for(i=0;i<b;i++)
{
for(j=0;j<b;j++){if(m[j]==a[i]){for(int i=j;i<b;i++){a[i]=a[i+1];}}}
}
for(i=0;i<b;i++){cout<<"\nElement:"<<a[i];}
}

int main()
{
  int ch,flag=0,au[50];
set s1,s2;
s1.create();
s2.create();
while(flag!=1)
{
cout<<"\n1. Insert \n2. Remove \n3. Contains \n4.Size \n5.Display \n6.Intersection \n7.Union \n8.Exit";
  cout<<"\nEnter your choice:";
  cin>>ch;
      switch (ch)
      {
        case 1 :    cout<<"\nFor set1:";s1.insert();cout<<"\nFor set2:";s2.insert();break;
        case 2 :    cout<<"\nFor set1:";s1.remove();cout<<"\nFor set2:";s2.remove();break;
        case 3 :    cout<<"\nFor set1:";s1.contains();cout<<"\nFor set2:";s2.contains();break;
	case 4 :    cout<<"\nFor set1:";s1.size1();cout<<"\nFor set2:";s2.size1();break;
	case 5 :    cout<<"\nFor set1:";s1.display();cout<<"\nFor set2:";s2.display();break;
	case 6 :    au[50]=intersection(s1,s2);break;
	case 7 :    Union(s1,s2);break;	
        case 8 :    flag=1;break;
        default :   cout<<"Invallied choice";
      }
    
  }
 
  return 0;   
}
