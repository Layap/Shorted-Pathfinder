#include <iostream>
#include <string>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
	string time;
	cin>>time;
	if(time[8]=='P')
	{
		string hour(time,0,2);
		int hr = stoi(hour);
		if(hr!=12)
			hr += 12;
		hour = to_string(hr);
		time[0] = hour[0];
		time[1] = hour[1];
	}
	if(time[8]=='A' && time[0]=='1' && time[1]=='2')
	{
		time[0] = '0';
		time[1] = '0';
	}
	string time2(time,0,8);
	cout<<time2;
	return 0;
}