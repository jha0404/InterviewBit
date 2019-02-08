#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> solution(std::vector<int>&A,int B)
{
	std::vector<int> v;
	int start_index=-1;
	int end_index=-1;
	int k=lower_bound(A.begin(),A.end(),B)-A.begin();
	if(A[k]==B)
	{
		start_index=k;

	}
	else
	{
		v.push_back(start_index);
		v.push_back(end_index);
		return v;
	}
	int l=upper_bound(A.begin(),A.end(),B)-A.begin();
	if(A[l-1]==B)
		end_index=l-1;
	v.push_back(start_index);
	v.push_back(end_index);
	return v;
}
int main()
{
	std::vector<int> v;
	int b,n,i;
	cin>>n>>b;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	std::vector<int> A;
	A=solution(v,b);
	for(i=0;i<2;i++)
		cout<<A[i]<<" ";
	return 0;

}