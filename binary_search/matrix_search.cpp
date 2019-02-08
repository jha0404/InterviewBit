#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solution(vector<vector<int> > &A, int B)
{
	int i;
	for(i=0;i<A.size();i++)
	{
		if(binary_search(A[i].begin(),A[i].end(),B))
			return 1;
	}
	return 0;
}
int main()
{
	vector<vector<int> > A;
	int i,j,n,m,b;
	cin>>n>>m>>b;
	std::vector<int> temp;
	for(i=0;i<n;i++)
	{
         for(j=0;j<m;j++)
         {
         	int x;
         	cin>>x;
         	temp.push_back(x);
         }
         A.push_back(temp);
         temp.clear();
	}
	int p=solution(A,b);
	cout<<p;
	return 0;

}