#include<iostream.h>
#include<conio.h>
int b[30];
void mergesort(int *a,int low,int high)
{
	int i,j,k,m;
	if(low>=high)
	return ;

	int mid=(low+high)/2;
	cout<<"\n calling mergesort with low= "<<low<<" high= "<<mid;
	mergesort(a,low,mid);
	cout<<"\n calling mergesort with low= "<<mid+1<<" high= "<<high;
	mergesort(a,mid+1,high);
	cout<<"\n the values for the algo are low= "<<low<<" mid= "<<mid<<" high= "<<high;
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
		  b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	if(i>mid && j<=high)
	{
		while(j<high)
		{
			b[k++]=a[j++];
		}
	}
	if(j>high && i<=mid)
	{
		while(i<=mid)
		{
			b[k++]=a[i++];
		}
	}
	cout<<"\nafter this pass array is \n";
	for(m=low;m<k;m++)
	cout<<" "<<b[m];
}

void main()
{
	clrscr();
	cout<<"\nenter the array size\n";
	int i,j,n;
	cin>>n;
	int a[20];
	cout<<"\nenter the array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	cout<<"\nthe sorted array is = \n";
	for(i=0;i<n;i++)
	cout<<" "<<b[i];
	getch();
}