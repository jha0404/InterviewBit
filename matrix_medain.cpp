#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solution(vector<vector<int> > &A)
{
	int min=INT_MAX;
	int max=INT_MIN;
	int i;
	int r=A.size();
	int c=A[0].size();
	for(i=0;i<r;i++)
	{
		if(A[i][0]<min)
			min=A[i][0];
	}
	for(i=0;i<r;i++)
	{
		if(A[i][c-1]>max)
			max=A[i][c-1];
	}
	 int desired = (r * c + 1) / 2;
	 while(min<max)
	 {
	 	int mid = min + (max - min) / 2; 
	 	int place=0;
	 	for(i=0;i<r;i++){
	 		place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
	 		//cout<<place<<" ";
	 	}
	 	/*if(place==desired)
	 		return mid;*/
	 	 if(place<desired)
	 		min=mid+1;
	 	else
	 		max=mid;
	 }
	 return min;
}
int main()
{
	std::vector< vector<int> > v;
	int i;
	int r,c;
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		std::vector<int> temp;
		int j;
		for(j=0;j<c;j++)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
		temp.clear();
	}
	int k=solution(v);
	/*for(i=0;i<r;i++)
		cout<<*(v[i].begin())<<" ";*/
	cout<<k;
	return 0;
	
}