#include<iostream.h>
#include<conio.h>
int main()
{
    clrscr();
    int a[50];
    cout<<"\nEnter the size of array\n";
    int n,i,j,k,temp,flag=0;
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nthe array entered is =\n";
    for(i=0;i<n;i++)
    cout<<" "<<a[i];
    for(i=1;i<n;i++)
    {
       temp=a[i];
       j=i-1;
       flag=0;
       while(temp<a[j])
       {
            if(j<0)
            break;
            a[j+1]=a[j];
            j--;
            flag=1;
       }
       if(flag==1)
       a[j+1]=temp;
       cout<<"\n pass "<<i+1<<" and the array is =\n";
       for(k=0;k<n;k++)
       cout<<" "<<a[k];
    }
    cout<<"\nThe sorted array is =\n";
    for(i=0;i<n;i++)
    cout<<" " <<a[i];
    getch();
    return 0;
}












