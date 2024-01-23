#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "([[{}]])";
    stack<char> s;
    int i = 0;
    bool flag=false;
    while (i < str.length())
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            cout<<i<<" ";
            char first = s.top();
            s.pop();
            char second = str[i];
            cout<<first<<" "<<second<<endl;
            if ((first == '(' && second == ')') || (first == '[' && second == ']') || (first == '{' && second == '}'))
            {
                i++;
                continue;
            }
            else
            {
                flag=true;
                cout<<"Not balanced "<<i<<endl;
                break;
            }
        }
        i++;
    }
    if(flag==false){
        cout<<"Balanced"<<endl;
    }
}
