#include<iostream>

using namespace std;

int n1,n2;
int a[100],b[100];

class set{

  public:
  
  void un(int n1, int n2, int a[] ,int b[])
   {
     
     int j=0,k=0;
   
	cout<<"The union of the sets is :";
     while((j<n1) && (k<n2))
      {
        if(a[j]<b[k])
        {
           cout<<a[j]<<" ";
           j++;  
        } 
        else if(a[j]>b[k])
        {
           cout<<b[k]<<" ";
           k++;
        }
        else if(a[j]==b[k])
        {
           cout<<a[j]<<" ";
           j++;
           k++; 	
        }
 
      }
	
        while(j<n1)
      {
        cout<<a[j]<<" ";
         j++;
      } 

     while(k<n2)
      {
        cout<<b[k]<<" ";
   	k++;
      } 
   cout<<endl;
   }
 
   
    void in(int n1, int n2, int a[] ,int b[])
   {
     
     int j=0,k=0;
   
	cout<<"The intersection of the sets is :";
     while((j<n1) && (k<n2))
      {
        if(a[j]<b[k])
        {
           
           j++;  
        } 
        else if(a[j]>b[k])
        {
          
           k++;
        }
        else if(a[j]==b[k])
        {
           cout<<a[j]<<" ";
           j++;
           k++; 	
        }
 
      }
     cout<<endl;
   }

 
   void prob(int n1, int n2, int a[] ,int b[])
    {
      int m,i;
      cout<<endl<<"Enter the no of elements in X ";
      cin>>m;
      
      int x[m];
      cout<<"Enter the elements of X ";
      
      for(i=0;i<m;i++)
      {
        cin>>x[i];
      }   
   
      int z=0,j,k;
      cout<<"The pairs are : "<<endl;
    
     for(j=0;j<n1;j++)
      {
       for(k=0;k<n2;k++)
         {
        if(a[j]+b[k]==x[z])
            {
             cout<<a[j]<<" "<<b[k]<<" "<<endl;
             z++;
             break;
            } 
         
         }
      }
  
    }

};



   int main()
   {
     class set s;
     
     int i;
     cout<<"Enter the number of elements in set A ";

     cin>>n1;
     int a[n1];
     cout<<"Enter the elements of A in sorted order ";
    
     for(i=0;i<n1;i++)
     {
       cin>>a[i];
  
     }
     
     cout<<"Enter the number of elements in set B ";
     cin>>n2;
     int b[n2];
     cout<<"Enter the elements of B in sorted order ";
    
     for(i=0;i<n2;i++)
     {
       cin>>b[i];
     }
     
 
    
     s.un(n1,n2,a,b);
     s.in(n1,n2,a,b);
     s.prob(n1,n2,a,b);
     return 0;
     
    }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
