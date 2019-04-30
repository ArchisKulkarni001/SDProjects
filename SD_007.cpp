#include<iostream>
using namespace std;
class table_main
{
    public:
    int a[10];
    int size=10,prime=7;
    table_main()
    {
        int i;
        for(i=0;i<size;i++)
            a[i]=0;
    }
    void insert_variable(int numbers)
    {
        int counter=0;
        int index=numbers%size;
        if(a[index]==0){a[index]=numbers;}
        else
        {
            int index1=prime - index % prime;
            int i;
            for(i=0;i<size;i++)
            {
                int index2=(index+i*index1)%size;
                if(a[index2]==0){a[index2]=numbers;break;}
            }
        }
    }

    void display()
    {
        int i;
        cout<<"\nHash Table:";
        for(i=0;i<size;i++)
        {
            cout<<"\nNumber:"<<a[i];
        }
    }

};
int main()
{
    table_main m;
    cout<<"\nEnter values for table:";
    int i,v;
    for(i=0;i<m.size;i++)
    {
        cout<<"\nEnter value:";
        cin>>v;
        m.insert_variable(v);
    }
    m.display();
}

