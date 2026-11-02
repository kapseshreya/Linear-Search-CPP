#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int n, key;

    cout << "Enter the number of students: ";
    cin >> n;

    int arr[100];

    if (n <= 0 || n > 100)
    {
        cout << "Invalid number of students.";
        return 0;
    }

    cout << "Enter the roll numbers of students:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the roll number to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Student attended the training program.";
    else
        cout << "Student did not attend the training program.";

    return 0;
}
#BINARY SEARCH#
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n, key;

    cout << "Enter the number of students: ";
    cin >> n;

    int arr[100];

    if (n <= 0 || n > 100)
    {
        cout << "Invalid number of students.";
        return 0;
    }

    cout << "Enter the roll numbers in sorted order:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the roll number to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Student attended the training program.";
    else
        cout << "Student did not attend the training program.";

    return 0;
}
