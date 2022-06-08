//GFG Problem: Sorting array of 0,1,2 without sorting algo

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int arr0=0, arr1=0, arr2=0;
    for (int i=0; i<n; i++){
        if (a[i] == 0)
            arr0++;
        else if (a[i] == 1)
            arr1++;
        else
            arr2++;
    } 
    int i=0;
    while(arr0--){
        a[i++] = 0;
    }
    while(arr1--){
        a[i++] = 1;
    }
    while(arr2--){
        a[i++] = 2;
    }
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
