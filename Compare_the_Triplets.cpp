#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int* a = new int[3];
    int* b = new int[3];
    int i,A=0,B=0;
    for(i=0;i<3;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            A++;
        if(b[i]>a[i])
            B++;
    }
    cout<<A<<" "<<B;
    return 0;
}