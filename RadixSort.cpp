#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;


void counting(int n,char a[][6],int j)
{
  
  char temp[6];
   int i=0;
   int count=0;
  	while(1)
	{
	  if(a[i][j]>a[i+1][j])
		{
		  
		  strcpy(temp,a[i]);
		  strcpy(a[i],a[i+1]);
		  strcpy(a[i+1],temp);  
		   i++;   
		}
	   else
	 	{
		  i++;
		}
 	 
	    if(i==n-1)
		{
		  count++;
		  i=0;
		  	if(count==5)
			{
				break;
			}
		}
	    
	}

}

void sort(int n, char a[][6])
 {
  int i=7,j=5;
 
  while(i)
	{
	 
  	 counting(n,a,j);
	 j--;
	 i=i-1;
	  
	}
	
  cout<<"THe sorted array is "<<endl;
     for(i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";
	}
 }


int main()
{
 int n;
 cout<<"Enter the number of strings in the array: ";
 cin>>n;

 int i;
 
 char a[n][6];
 cout<<"Enter the strings in the array: ";
  for(i=0;i<n;i++)
	{
	  cin>>a[i];
	}
 
 sort(n,a);


 
 
 return 0;
}
