#include<iostream>

using namespace std;


void counting(int n,int a[])
{
	int j,k,l;
	int m[n];
	for(j=0;j<n;j++)
	{
		m[j]=0;
	}
   
	j=0;
    while(1)
    {
    	if(j==n)
    	{
    		break;
    	}

    	if(k<n)
    	{
    		if(a[j]==k)
    		{
    			m[k]=m[k]+1;
    		}
    		k++;
    	}
    	else if(k==n)
    	{
    		k=0;
    		j++;
    	}

    }



 	cout<<"The frequency array is "<<endl;

    for(j=0;j<n;j++)
    {
    	cout<<m[j]<<" ";
    	
    }

    for(j=1;j<n;j++)
    {
    	m[j]=m[j]+m[j-1];
    }

    cout<<endl<<"The cumulative array is"<<endl;

    for(j=0;j<n;j++)
    {
    	cout<<m[j]<<" ";
    	
    }

    cout<<endl<<"The sorted array is "<<endl;

    int count=0;
    	j=0;
    	while(1)
    	{
    		if(j==n)
    		{
    			break;
    		}
    		if(count<m[j])
    		{	
    			cout<<j<<" ";
    			count++;
    		}
    		else if(count==m[j])
    		{
    			j++;
    		}

    	}




}


int main()
{
	int n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;

	int i;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

   counting(n,a);

	return 0;
}