//Author : Rana Tilki
//ITU Racing Embedded Team 2022
//Leet Code #416 c++ solution 
//contact: tilkir18@itu.edu.tr
#include <iostream>
using namespace std;

class Solution{
    int sum;
    int* arr;
    int n;
    public:
        bool canPartition(int* , int);
        bool Subset(int ,int ,int*);
};

bool Solution::canPartition(int arr[], int n)
{
   //if (sum%2 == 1) return false;
   //else return Subset(n, sum/2, arr);
    if(n <= 1)
        return false;
    int sum = 0;
    for(int i = 0; i < n; i ++)
        sum = sum + arr[i];
    if((sum % 2) != 0)
        return false;
    int target = sum/2;
    return Subset(n, target, arr);
}

bool Solution::Subset(int i, int target, int arr[]){
    if(i == 0 && target != 0)
        return false;
    if(target == 0)
        return true;
    if (arr[i - 1] > target)
       return Subset(i-1, target, arr);
    return Subset(i-1, target - arr[i-1], arr) || Subset(i-1, target, arr);
}

int main()
{
    Solution S;
    int arr[] = {1, 5, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    S.canPartition(arr, n);
    if(S.canPartition(arr, n)) 
        cout << "True" <<endl;
    else    
        cout << "False" <<endl;
    return 0;
}