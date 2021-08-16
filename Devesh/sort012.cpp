#include<bits/stdc++.h>

using namespace std;

// Sorting array of 0 1 and 2
// approach 1 sorting
// approach 2 counting 0,1 and 2 then filling the array again
// approach 3 below

int main(void){
    vector<int> arr = {2,1,0,2,1,2,0,2,1};
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
