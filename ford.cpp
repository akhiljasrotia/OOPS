#include<iostream>
#include<stdlib.h>
#include<limits.h>

using namespace std;


int main()
{
	int n;
	cout<<"Enter the number of vertices ";
	cin>>n;
	int i,j;
	int a[n][n];

	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					cin>>a[i][j];
						if(a[i][j]==0)
							{
							   a[i][j]=INT_MAX;	
							}
				}
		}


	int dist[n];

	for(i=0;i<n;i++)
		{
		 
		   	dist[i]=INT_MAX;
			  
		}

	int source;
	cout<<"Enter the source ";
	cin>>source;

	dist[source]=0;


	int k;

	for(k=0;k<n-1;k++)
		{
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(dist[i]!=INT_MAX && dist[j]>dist[i]+a[i][j] && a[i][j]!=INT_MAX)
								{
									dist[j]=dist[i]+a[i][j];
								}
						}
				}
		}
	for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(dist[i]!=INT_MAX && dist[j]>dist[i]+a[i][j] && a[i][j]!=INT_MAX)
								{
									cout<<"Negative cycle"<<endl;
									i=j=n;
								}
						}
				}

	cout<<"The distance array from "<<source<<" is ";
	for(i=0;i<n;i++)
	{
		cout<<dist[i]<<" ";
	}
}		
