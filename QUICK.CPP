#include<iostream.h>
#include<conio.h>
void quick(int *a,int low,int high)
{
	int i,j,k,pivot,temp;
	if(low>=high)
	return;
	cout<<"\n the array for sorint is=\n";
	for(i=low;i<high;i++)
	cout<<" "<<a[i]      ;
	pivot=a[low];
	i=low+1;
	j=high-1;

	cout<<"\nin quick i = "<<i<<" j= "<<j;
	while(i<=j)
	{
		cout<<"\n in while i = "<<i<<" j= "<<j;
		getch();
		while(a[i]<pivot&&i<high)
		{   cout<<"\n increamenting ia["<<i<<"] = "<<a[i]<<" and pivot = "<<pivot;
			i++;
		}
		cout<<"\n for swapping i="<<i;
		while(pivot<a[j]&&j>low)
		{
			  cout<<"\n decreamenting ja["<<j<<"] = "<<a[j]<<" and pivot = "<<pivot;
			j--;
		}
		cout<<"\n for swapping j="<<j;
		if(i<j)
		{
			cout<<"\n now swapping "<<i<<" and "<<j;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;

		   //	cout<<"\n after swapping "<<i<<" and "<<j;
		}


	}
	if(j>low)
	{
	   temp=a[low];
	   a[low]=a[j];
	   a[j]=temp;
	}
   cout<<"\nnow calling sort with low = "<<low<<" high = "<<j;
   quick(a,low,j);
	cout<<"\nnow calling sort with low = "<<j+1<<" high = "<<high;
   quick(a,j+1,high);
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

	quick(a,0,n);

	cout<<"\nthe sorted array is =\n";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
	getch();
}