#include <iostream>
using namespace std;

class binarysearchalgo
{
    public:
    int n, l, mid, h, key;
    
    void binarysearch()
    {
        cout << "Enter size of the array: ";
    cin >> n;
    cout << endl;
    int A[n];
    cout <<"Enter elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout <<"\nEnter the key Element: ";
    cin >> key;
    cout << endl;
    l = 0;
    h = n - 1;
    while(l <= h)
    {
        mid = (l + h) / 2;
        if(key == A[mid])
        {
            cout << "Key: " << key << " found at " << mid << endl;
            return ;
        }
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << key << " not Found";
    }
    
};

int main()
{
 binarysearchalgo bl;
 bl.binarysearch();
}