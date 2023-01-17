/* Create a 1-d array and accept its elements from the user. Print the middle element of the array. Also, reverse the array. */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[50], num, temp;

    cout << "Enter the number of element: " << endl;
    cin >> num;

    cout << "Enter The " << num << " elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "The middle element in the array: " << arr[num/2] << endl;

    for (int i = 0; i < num / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[num-1-i];
        arr[num-i-1]  = temp;
    }
    
    cout << "The reverse elements of the array: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}