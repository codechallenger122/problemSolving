#include <iostream>

using namespace std;

int getMaxSubArray(int* arr, int lenArr) {
    int * curSum = new int[lenArr];
    int * maxSum = new int[lenArr];
    curSum[0] = maxSum[0] = arr[0];
    for(int i=1;i<lenArr;i++) {
        curSum[i] = max(curSum[i-1] + arr[i], arr[i]);
        maxSum[i] = max(curSum[i], maxSum[i-1]);
    }
    return maxSum[lenArr-1];
}

int main()
{
    //int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[] = {5, 4, -1, 7, 8};
    int lenArr = sizeof(arr)/ sizeof(arr[0]);
    int result = getMaxSubArray(arr, lenArr);
    cout << result << endl;

    return 0;
}
