#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solution(std::vector<int>&A,int B)
{
	int k=lower_bound(A.begin(),A.end(),B)-A.begin();
	return k;


}
int main()
{
	int i,n,b;
	cin>>n>>b;
	std::vector<int> v;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int k=solution(v,b);
	cout<<k;
	return 0;

}