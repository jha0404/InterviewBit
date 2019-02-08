#include <iostream>
using namespace std;
int solution(int A)
{
	long long int start=1,end=A;
	long long int ans;
	while(start<=end)
	{
		long long int mid=(start+end)/2;
		if(mid*mid==A)
			return mid;
		if(mid*mid<A)
		{
			start=mid+1;
			ans=mid;
		}
		else
			end=mid-1;
	}
	return ans;
}
int main()
{
	int a;
	cin>>a;
	int k=solution(a);
	cout<<k;
	return 0;

}