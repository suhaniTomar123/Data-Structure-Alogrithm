#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = INT_MIN;
    int currentSum = 0;

    int start = 0, ansStart = 0, ansEnd = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(currentSum == 0)
            start = i;

        currentSum += arr[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
            ansStart = start;
            ansEnd = i;
        }

        if(currentSum < 0)
            currentSum = 0;
    }

    cout << "Maximum Sum = " << maxSum << endl;
    cout << "Subarray = ";
    for(int i = ansStart; i <= ansEnd; i++)
        cout << arr[i] << " ";
}
