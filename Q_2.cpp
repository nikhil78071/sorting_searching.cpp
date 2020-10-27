#include<iostream.h>
#include<conio.h>

int linear_search(int a[],int e, int v)
{
        for(int i=0;i<e;i++)
    {
        if (a[i]==v)
        {
            return i+1;
        }
    }
            return -1;
}
int main()
{
    clrscr();
    int a[10],e,v,p;
    cout<<"Enter the number of elements:";
    cin>>e;
    cout<<"Enter the entries:";
    for (int i=0;i<e;i ++)
    {
        cin >> a[i];
    }
    cout<<"Enter the element to search for:" ;
    cin>>v;
    p=linear_search(a,e,v);
    if (p!= -1 )
        cout<<"Element found at:"<<p<<"position";
    else
        cout<<"Element not found";       
    getch();    
}