#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int N,x,cntr=0;
	cin>>N;
	vector<int> v;
	for(int i;i<N;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	x = v.back();
	while(v.back()==x)
	{
		cntr++;
		v.pop_back();
	}
	cout<<cntr;
	return 0;
}