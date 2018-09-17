#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the matrix ";
	cin>>n;
	cout<<endl;

	int i,j;
	int matrix[n][n];
	int choice;

	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					cout<<"Enter 1 if there is a link between "<<i<<" and "<<j<<" ";
					cin>>choice;
							if(choice==1)
						{
							cout<<"Enter the weight ";
				 			cin>>matrix[i][j];
				 		}
				 			else
				 		{
				 			matrix[i][j]=INT_MAX;
				 		}

				}
				cout<<endl<<endl;
		}


		cout<<endl;

		cout<<"The input matrix is :"<<endl;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					cout<<matrix[i][j]<<" ";

				}
				cout<<endl;
		}


		//DIJKSTRA'S ALGORITHM 


		int source;

		cout<<endl;
		cout<<"Enter the source ";
		cin>>source;
		cout<<endl;


		int s[n],d[n];
		for(i=0;i<n;i++)
				{
					s[i]=0;
					d[i]=matrix[source][i];
				}
				d[source]=0;




			for(i=0;i<n;i++)
					{
						int min=INT_MAX,pos;
						for(int j=0;j<n;j++)
						{
								if(d[j]<min && s[j]==0)
							{
								min=d[j];
								pos=j;
							}

						}
						s[pos]=1;
						for(int k=0;k<n;k++)
						{

							if(matrix[pos][k]!=INT_MAX && s[k]==0 && d[k]>d[pos]+matrix[pos][k] && d[k]!=INT_MAX) 
									{
										d[k]=d[pos]+matrix[pos][k];
									}
						}
						// cout<<"The distance array is \n";
						// for(i=0;i<n;i++)
						// {

						// 	cout<<d[i]<<" ";
						// }
						// cout<<endl;



					}

					cout<<"The distance array is \n";
					for(i=0;i<n;i++)
					{

						cout<<d[i]<<" ";
					}




	return 0;
}
