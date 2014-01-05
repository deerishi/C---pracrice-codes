#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int a[30][20];
static count=0;
void insertion_sort(int size,int row)
{

	int temp,flag,i,j,k;
   //	cout<<"\nrow = "<<row<<" size = "<<size<<" the array presented  is\n";
   //	for(i=0;i<size;i++)
   //	cout<<" "<<a[row][i];

	for(i=1;i<size;i++)
	{
		temp=a[row][i];
		j=i-1;
		flag=0;
		while(temp<a[row][j])
		{
			if(j<0)
			break;
			a[row][j+1]=a[row][j];
			flag=1;
			j--;
		}
		if(flag==1)
		a[row][j+1]=temp;
	   //	cout<<"\n Pass "<<i<<" and the array is \n";
  //		for(k=0;k<size;k++)
//		cout<<" "<<a[row][k];

	}
	count++;
	getch();
   /*	if(count==5)
	{
		cout<<"\ncalling exit";
		exit(0);
	}*/
}
void main()
{
	clrscr();
	int a2[5],row=0,size=0;
	cout<<"\n enter the array \n";
	int i,j,k,temp_arr[10],m,index,index2;
   //	for(i=0;i<10;i++)
   //	cin>>a2[i];
	a2[0]=1;a2[1]=12;a2[2]=123;a2[3]=9;a2[4]=13;
	int h;
	cout<<"\nthe entered array is\n";
	for(i=0;i<5;i++)
	cout<<" "<<a2[i];

	for(i=4;i>0;i--)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				index=j+i*k;
				if(index<5)
				{
				   a[row][size]=a2[index];
				   temp_arr[size]=index;
				   size=size+1;
		  //		   cout<<"\n index = "<<index;
		//		   cout<<"\ngrouping factor  i = "<<i<<"starting index j = "<<j<<endl;
				}
			}

	  //		cout<<"\n size="<<size<<" and row= "<<row<<endl;

			insertion_sort(size,row);
			for(m=0;m<size;m++)
			{
				index2=temp_arr[m];
				a2[index2]=a[row][m];
			}
			row=row+1;
			size=0;

		}

		cout<<"\n\t\t\t now after  the array after i= "<<i<<" pass is\n";
		for(h=0;h<5;h++)
		cout<<" "<<a2[h];
	}

	cout<<"\nthe final sorted array is =\n";
	for(i=0;i<5;i++)
	cout<<" "<<a2[i];

	getch();

	}