#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,p,front,back;
	cin>>n>>p;
	double t;
	t = (double)n/2;
	if(floor(t) == t)
	{
		front = p/2;
		back = (n-p+1)/2;
	}
	else
	{
		front = p/2;
		back = (n-p)/2;
	}
	cout<<min(front,back);
	return 0;
}