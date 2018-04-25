#include<iostream>
#include<limits.h>

using namespace std;





int main()
{
  int end=4;

  // cout<<"Enter the maximum value of the graph ";
  // cin>>end;
  int x = INT_MAX;
  int matrix[4][4] = {{x, 3,2,5},
                      {3, x, 4, x},
                      {2, 4, x, 1},
                      {5, x, 1, x},
                     };

  int tree[end][2];

  int i,j;
  /* for(i=0;i<end;i++){
   	for(j=0;j<end;j++){
   		matrix[i][j] = INT_MAX;
   	}
   }*/



	int weight,choice;
	
   /*  for(i=0;i<end;i++)
     		{
     			for(j=0;j<end;j++)
     					{
     						cout<<"Write 1 if you want to enter at positions "<<i+1<<" and "<<j+1<<" ";
     							cin>>choice;
     							if(choice==1)
     									{
     										cout<<"Enter the weight ";
     										cin>>weight;
     										matrix[i][j]=weight;
     										matrix[j][i]=weight;
     									}
     					}
    		}*/

	 for(i=0;i<end;i++)
		{
			for(j=0;j<end;j++)
				{
					
					cout<<matrix[i][j]<<" ";
						
				}
				cout<<endl;
				
		}

 //Prim's ALgorithm
		int min = matrix[0][0];
		int pos1,pos2;

		for(i=0;i<end;i++)
		{
			for(j=0;j<end;j++)
				{	
					if(matrix[i][j]<min)
					{
						min=matrix[i][j];
						pos1=i;
						pos2=j;
					}
				}
		}

		tree[0][0]=pos1;
		tree[0][1]=pos2;

		cout<<"The min cost edge is "<<min<<" and the pos is  "<<pos1<<" "<<pos2<<" ";

		int near[end];
		int k=0;
		j=0;
		for(i=0;i<end;i++)
				{
					near[i]=0;
				}

				for(i=0;i<end;i++)
						{
							
								if(matrix[i][pos1]>matrix[i][pos2])
									{
										near[i]=pos2+1;
									}	
									else
									{
										 near[i]=pos1+1;
									}
									
							

						}
						near[pos1]=0;
						near[pos2]=0;
						cout<<endl;

		

				for(i=1;i<end-1;i++)
								{
									int min1=INT_MAX;
									int index;
									for(j=0;j<end;j++)
											{
												if(near[j]!=0 && matrix[j][near[j]-1]<min1)
														{
															min1=matrix[j][near[j]-1];
															index = j;
														}
											}
											j = index;
											tree[i][0]=j;
											tree[i][1]=near[j]-1;

											min = min + matrix[j][near[j]-1];
											near[j]=0;

											for(k=0;k<end;k++)
											{
												if(near[k]!=0 && matrix[k][near[k]-1]>matrix[k][j])
														{
															near[k]=j+1;
														}
											}
											

											cout<<endl;
								}
								for(i=0;i<end;i++){
									cout<<near[i]<<" ";
								}
								cout<<endl;
								for(i=0;i<end-1;i++){
									for(j=0;j<2;j++){
										cout<<tree[i][j]+1<<" ";
									}
									cout<<endl;
								}
								cout<<"The minimum cost of the tree is "<<min;

return 0;
}




























