#include <bits/stdc++.h>
using namespace std;
int pushToStack(int element, int top, int arr[], int capacity)
{
    if (capacity - 1 == top)
    {
        cout << "Stack is already full and cannot insert an element" << endl;
        return -1;
    }
    else
    {
        top++;
        arr[top] = element;
    }
    return top;
}
void printElements(int arr[], int top)
{
    int temp = top;
    while (top != -1)
    {
        cout << arr[top] << " ";
        top--;
    }
}
int main()
{
    int n;
    cout << "Enter capacity of stack" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter 1 to push an element into stack" << endl;
    cout << "Enter 2 to pop an element from stack" << endl;
    cout << "Enter 3 to check if stack is empty or not" << endl;
    cout << "Enter 4 to get top element" << endl;
    cout << "Enter 5 to print all elements of stack" << endl;
    cout << "Enter 6 to exit from application" << endl;
    int choice;
    cout << "\n\n";
    cout << "Enter your choice" << endl;
    cin >> choice;
    int top = -1;
    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter an element to push into stack ";
            cin >> element;
            top = pushToStack(element, top, arr, n);
            break;
        case 5:
            printElements(arr, top);
            break;
        case 6:
            exit(0);
            break;
        }
        cout<<"Do u still wanna use this application??"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
    }
}
