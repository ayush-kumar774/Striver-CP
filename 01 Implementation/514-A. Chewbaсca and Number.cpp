#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 && str[i] == '9')
        {
            str[i] = '9';
        }
        else if (str[i] > '4) 
        { 
            str[i]= ('9' - str[i] + '0)';
        }
        // else { // if it is greater than 4 then only we need to subtract it from 9 otherwise it doesnot make any sense
        //     str[i] = min(('9' - str[i] + '0'), (int)str[i]);
        // }
    }

    cout << str << endl;

    return 0;
}
