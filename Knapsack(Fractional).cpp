#include<iostream>

using namespace std;

void sort(int size , float value[], float memory[])
{
	int i,j;
	int temp,temp1,temp0;
	float value1[size];
	float memory1[size];
	float per[size];

	for(i=0;i<size;i++)
	{
		value1[i]=value[i];
		memory1[i]=memory[i];
		per[i]=value[i]/memory[i];
		
	}	
	
	for(i=0;i<size;i++)
	  {
		for(j=i+1;j<size;j++)
		  {
		    if(per[i]<per[j])
			{					
	
			  temp0=per[i];			
		          per[i]=per[j];
			  per[j]=temp0;

			  temp=value1[i];
			  value1[i]=value1[j];
			  value1[j]=temp;
 
  			  temp1=memory1[i];
			  memory1[i]=memory1[j];
			  memory1[j]=temp1;
				
			}
		  }	
	  }

}


int knapsack(int max,float value[],float memory[],int size)
	{
	
	 float profit=0;
	 int i=0;
	  while(1)
	  {
 		if(max<=0 || i==size)
		{
		  break;
		}
   		if(max-memory[i]>=0)
		{
	 		profit=profit+value[i];
			max=max-memory[i];
			cout<<max<<" ";
		}
		if(max-memory[i]<0)
		{
			profit=profit+(value[i]/memory[i])*(max);
			cout<<value[i]<<" "<<memory[i]<<" "<<max<<" ";
			max=0;	
		}		
		i++;
		
	  }

	  cout<<"The maximum value that can be inserted is "<<profit;
	
	}


int main()
{
 int size;

 cout<<"Enter the number of tasks ";
 cin>>size;

 float value[size];

 cout<<"Enter the value of the task ";
  
 for(int i=0;i<size;i++)
	{
	  cin>>value[i];
	}

 float memory[size];

 cout<<"Enter the memory consumed by the tasks ";
 
 for(int i=0;i<size;i++)
	{
	  cin>>memory[i];
	}


  int max; 

 cout<<"Enter the size of the RAM ";
 cin>>max;


   sort(size,value,memory);

   	
   knapsack(max,value,memory,size);
	
return 0;	
}
