#include<iostream>
using namespace std;

// insert and delete element in an array
//1. insert new element at a given index
void insertFunction(int *arr, int position, int value,int &n, int size)
{
    //check conditions
    if (n >= size) 
    {
        cout << "Array is full!" << endl;
        return;
    }
    if (position < 0 || position > n) {
        cout << "Invalid index!" << endl;
        return;
    }
    //shift elements by one index
    for(int i=n; i>position; i--)
    {
        arr[i]=arr[i-1];
    }
    //write over the given index
    arr[position]=value;

    //increase the array size by 1
    n++;
}
void deleteFunction(int *arr, int position,int &n, int size)
{
    //condition
    if (position < 0 || position >= n) 
    {
        cout << "Invalid index!" << endl;
        return;
    }
    //shift each element after the position by 1 index and write over the given index
    for(int i=position; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}
//2. delete element at given indext
int main()
{
    //declare an array with 5 elements
    int size=10;
    int a[size]={1, 2, 3, 4, 5};
    int n=5;
    //Before inserting in element
    cout<<"Before insert in elements:"<< endl;
     for(int i=0; i<n; i++)
    {
        cout<< a[i]<< endl;
    }
    //insert 10 at index 2
    //use a function to do that
    insertFunction(a, 2, 10,n, size);
    //check if the above function really work
    cout<<"After insert in element:"<< endl;
    for(int i=0; i<n; i++)
    {
        cout<< a[i]<< endl;
    }
    //delete an element at a given index
    //Ex delete 10 from the above function
    cout<<"After deleted array element"<< endl;
    deleteFunction(a,2,n, size);
    for(int i=0; i<n; i++)
    {
        cout<< a[i]<< endl;
    }
}