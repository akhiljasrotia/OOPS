#include <iostream>
#include <cmath>
using namespace std;
void bin_add(int b[],int n)
{
	if(b[n-1]==0)
		b[n-1]=1;
	else if(b[n-1]==1)
	{
		b[n-1]=0;
		if(n-1>0)
			bin_add(b,n-1);
	}
}
int main()
{
	int n, rsum=0,sum=0;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter "<<n<<" elements: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nEnter Required Sum: ";
	cin>>rsum;
	int bin[n]={0};
	for(int i=0;i<pow(2,n);i++)
	{
		//cout<<endl;
		sum=0;
		for(int j=0;j<n;j++)
		{
			if(bin[j]==1)
				sum+=a[j];
		}
		if(sum==rsum)
		{	
			for(int j=0;j<n;j++)
				if(bin[j]==1)
					cout<<a[j]<<"+";
			cout<<"="<<sum;
			cout<<endl;
		}
		bin_add(bin,n);
	}
	cout<<endl;
	return 0;
}
