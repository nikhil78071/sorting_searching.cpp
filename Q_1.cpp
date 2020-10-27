#include<iostream>
#include<conio.h>
using namespace std;

void selection_sort (int a[],int e )
{int i,j ;
    for(i = 1; i <= e; i++)
        for(j = i+1; j <= e; j++)
    {
        if (a[i]>a[j])
            {
        a[i] = a[i]+a[j];
        a[j] = a[i]-a[j];
        a[i] = a[i]-a[j];
            }
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<e;i++)
    {
        cout <<a[i]<<"\t";
    }
}
void bubble_sort (int a[],int e )
{int i,j ;
    for (i = 1; i <= e; i++)
        for (j = 1; j <= e-1; j++)
    {
        if (a[i]>a[j])
            {
        a[i] = a[i]+a[j];
        a[j] = a[i]-a[j];
        a[i] = a[i]-a[j];
            }
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<e;i++)
    {
        cout <<a[i]<<"\t";
    }
}

void insertion_sort (int a[], int e)
{
    for(int k=1; k<e; k++)
    {
        int temp = a[k];
        int j= k-1;
        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        [j+1] = temp;
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<el;i++)
    {
        cout <<a[i]<<"\t";
    }
}
void main ()
{ 
    int i,ch , e, a[10];
    cout <<"Enter the number of elements:" ;
    cin>> e;
    cout<<"Enter the elements of the array to be sorted:" ;
    for (i=1; i<= e; i++)
    {
        cin>>a[i];
    }
     cout<<" \n**** MENU ****\n";
     cout<<"\n1. SELECTION SORT\n";
     cout<<"\n2. BUBBLE SORT\n";
     cout<<"\n3. INSERTION SORT\n";
     cout<<"\nEnter choice:\n";
     cin >> ch;
     if (ch == 1)
        selection_sort(a,e);
     if (ch == 2)
        bubble_sort(a,e);
     if (ch==3)
        insertion_sort(a,e);
     getch();
}