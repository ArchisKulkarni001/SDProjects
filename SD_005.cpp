#include<iostream>
using namespace std;
struct element
{
    int start[20],endp[20],cost[20];
};
class prims
{
public:
    int vertex,edge,matrix[10][10];
    string r[10];
    element b;
    prims()
    {
        r[0]="Pune";
        r[1]="Mumbai";
        r[2]="Nagpur";
        r[3]="Nashik";
        r[4]="Thane";
        r[5]="Alibag";
    }
    void input()
    {
        int i;
        for(i=0;i<edge;i++)
        {
            cout<<"\nEnter data:";
            cin>>b.start[i]>>b.endp[i]>>b.cost[i];
        }


    }
    void cost_matrix()
    {
        int i,j;
        for(i=0;i<edge;i++)
        {
            for(j=0;j<edge;j++)
            {
                matrix[i][j]=999;
            }
        }
        for(i=0;i<edge;i++)
        {
            matrix[b.start[i]][b.endp[i]]=b.cost[i];
        }

    }
     void display()
    {
        int i,j;
        for(i=0;i<edge;i++)
        {
            cout<<b.start[i]<<"\t"<<b.endp[i]<<"\t"<<b.cost[i];
            cout<<"\n";
        }
        cout<<"\nMatrix is";
          for(i=0;i<edge;i++)
            {
                cout<<"\n";
                for(j=0;j<edge;j++)
                    {
                        cout<<matrix[i][j]<<"\t";
                    }
            }

    }

       void compute()
    {
        int visited[vertex];
        visited[0]=1;
        int c=0,i,j,s=0;
        for(i=1;i<vertex;i++)
            visited[i]=0;
    while (c<vertex-1)
    {
       int min=9999,x=0,y=0;
      for (int i = 0; i<vertex; i++)
        {
        if (visited[i]==1)
        {
            for (int j = 0; j <vertex; j++)
            {
                if (visited[j]==0 && matrix[i][j])
                {
                  if (min > matrix[i][j])
                    {
                      min = matrix[i][j];
                      x = i;
                      y = j;
                    }
                }
            }
        }
        s=s+matrix[x][y];
          cout <<r[x] <<  " - " << r[y] << " :  " << matrix[x][y];
          cout << endl;
          visited[y]=1;
          c++;
        }
        cout<<"The total money required:"<<s<<endl;
    }
    }
};
int main()
{
    prims a;
    cout<<"\nEnter number of vertex and edges:";
    cin>>a.vertex>>a.edge;
    a.input();
    a.cost_matrix();
    a.display();
    a.compute();
}

