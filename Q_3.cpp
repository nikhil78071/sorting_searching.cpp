#include<iostream.h>
#include<conio.h>

int linear_search(int a[],int e, int v)
{
  int low=0,high=e-1,middle;
      while(low<=high)
 {
          middle=(low+high)/2;
          if (a[middle]==v)
            return middle+1;

          if (a[middle]<v)
            low=middle+1;

          if (a[middle]>v)
             high=middle-1;
    }
            return -1;
}

int main()
{
    clrscr();
    int a[20],e,v,p;
    cout<<"Enter the number of elements:";
    cin>>e;
    cout<<"Enter the entries(in ascending order):";
    for (int i=0;i<e;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to search for:";
    cin>>v;
    p=linear_search(a,e,v);
    if(p!=-1 )
    cout<<"Element found at:"<<p<<"position";
    else
    cout<<"Element not found!";
    getch();
}