#include <iostream>
using namespace std;

int main()
{
    cout<<"enter the number \n";
    int curval =0, val = 0;

    if(cin>>curval)
    {
        int cnt = 1;
        while (cin>>val)
        {
            if(curval == val )
            {
                ++cnt;
            }
            else
            {
                cout<<curval<<" occurs"<< cnt << "times \n";
                curval = val;
                cnt = 1;
            }
        }
        cout<<curval<< " occurs "<<cnt<<" times \n";
        
    }

    return 0;
}