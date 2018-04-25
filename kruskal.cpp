#include<iostream>
#include<algorithm>
using namespace std;
class Edge
{
	private:

		int source;
		int dest;
		int weight;

	public:

		void input()
		{
			cout<<"Enter the Source  : ";
			cin>>source;
			cout<<"Enter the Destination : ";
			cin>>dest;
			cout<<"Enter the Weight of the link: ";
			cin>>weight;
		}

		int getSource()
		{
			return source;
		}

		int getDest()
		{
			return dest;
		}

		int getWeight()
		{
			return weight;
		}
};

bool cweight(Edge e1 , Edge e2)
{
	return e1.getWeight() < e2.getWeight();
}


int findParent(int v , int parent[])
{
	if(parent[v] == v)
		return v;
	return findParent(parent[v],parent);
}

void kruskal(Edge *input , int n , int e)
{
	sort(input , input + e,cweight);
	Edge *output = new Edge[n-1];
	int parent[n];
	for(int i = 0; i < n; i++)
		parent[i] = i;

	int count = 0, i = 0;
	while(count != n-1)
	{
		Edge current_edge = input[i];
		int src_parent = findParent(current_edge.getSource(),parent);
		int dest_Parent = findParent(current_edge.getDest(),parent);

		if(src_parent != dest_Parent)
		{
			output[count++] = current_edge;
			parent[src_parent] = dest_Parent;
		}
		i++;
	}
	for(int i = 0;i < n-1; i++)
	{
		cout<<output[i].getSource()<<" "<<output[i].getDest()<<" "<<output[i].getWeight()<<endl;
	}
}

int main()
{
	int n,e;
	cout<<"Enter the number of vertices : ";
	cin>>n;
	cout<<"Enter the number of edges : ";
	cin>>e;
	Edge *input = new Edge[e];
	for(int i = 0; i < e; i++)
		input[i].input();
	kruskal(input,n,e);
}
