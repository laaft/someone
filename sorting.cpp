//* This sorting algorithm is know as intro sort which is a combination of three sorting algorithms(quick sort, heap sort and insertion sort). It is considered to be the best sorting algorithm.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //? To sort arrays
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n); //* takes two arguments, first-> address from where you have to start the sorting and second-> the address just greater than the address of the element till which you want the array to be sorted. Here we have given second argument as (arr+n) which will sort the whole array upto arr[n-1].
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //? To sort vectors
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}