#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,i,Hike,result=0;
	cin>>n;
	string hike;
	cin>>hike;
	for(i=0;i<n;i++)
	{
		if(hike[i] == 'U')
		{
			Hike++;
			if(Hike == 0)
				result++;
		}
		else
		{
			Hike--;
		}

	}
	cout<<result;
	return 0;
}