#include <iostream>
#include <array>

using namespace std;

// insert the element
void Insert(array<int, 100> &arr, int &n) {
    int idx, ele;
    cout << "Enter the index number : ";
    cin >> idx;
    cout << "Enter the element : ";
    cin >> ele;
    if (idx >= n) {
        cout << "Invalid index." << endl;
        return;
    }
    for (int i = n - 1; i >= idx; i--) {
        arr[i+1] = arr[i];
    }
    arr[idx] = ele;
    n++;
    cout << "After insertion the array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// delete the element
void Delete(array<int, 100> &arr, int &n) {
    int pos;
    cout << "Enter the delete index number : ";
    cin >> pos;
    if (pos >= n) {
        cout << "Invalid index." << endl;
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "After the delete the element : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// main function
int main() {
    int n;
    cout<<"Enter the array size: ";
    cin >> n;
    array<int, 100> arr;
    cout<<"Enter elements are : ";
    for (int i=0;i<n;i++)
        {
        int x;
        cin >> x;
        arr[i] = x;
        }
    while(true)
    {
        int press;
        cout<<endl<<"Press 1 for insert"<<endl;
        cout<<"Press 2 for delete"<<endl;
        cout<<"press 0 for exits code"<<endl;
        cin>>press;
        if (press == 1) {
            Insert(arr, n);
        } else if (press == 2) {
            Delete(arr, n);
        } else {
            cout << "Exit" << endl;
            break;
        }
    }
    return 0;
}
