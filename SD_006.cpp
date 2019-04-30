#include<iostream>
using namespace std;

class my_heap
{
   int heap[20],heap1[20],n1=0;
   public:
   my_heap()
   { heap[0]=0;  heap1[0]=0;
   }
   void getdata()
   {
        cout<<"\n Enter the no. of students:";
   cin>>n1;
   int x,i;
   for(i=0;i<n1;i++)
   {
        cout<<"\n Enter the marks:";
         cin>>x;
       insert1(heap,x);
       insert2(heap1,x);
   }
   }
   void insert1(int heap[],int x)
   {
       int n;
   n=heap[0];
   heap[n+1]=x;
   heap[0]=n+1;

   upadjust1(heap,n+1);
   }
   void upadjust1(int heap[],int i)
   {
        int temp;
    while(i>1&&heap[i]>heap[i/2])
    {
       temp=heap[i];
       heap[i]=heap[i/2];
       heap[i/2]=temp;
       i=i/2;
    }
   }
   void insert2(int heap1[],int x)
   {
       int n;
   n=heap1[0];
   heap1[n+1]=x;
   heap1[0]=n+1;

   upadjust2(heap1,n+1);
   }
   void upadjust2(int heap1[],int i)
   {
       int temp1;
    while(i>1&&heap1[i]<heap1[i/2])
    {
       temp1=heap1[i];
       heap1[i]=heap1[i/2];
       heap1[i/2]=temp1;
       i=i/2;
    }
   }
   void minmax()
   {
        cout<<"\n Max marks:"<<heap[1];
        cout<<"\n Min marks:"<<heap1[1];
   }
};

int main()
{
  my_heap h;
  h.getdata();
  h.minmax();
  return 0;
}

