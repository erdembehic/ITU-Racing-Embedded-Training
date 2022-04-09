//Author: <Kubra Tiryaki>
//ITU Racing Embedded Team 2022
//leetcode #560 C++ Solution
//Contact <tiryaki21@itu.edu.tr>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int subarrSum(vector<int>& nums, int k) {
        int size = nums.size(); 
        int counter = 0; 
        for(int i = 0; i < size; i++) 
        {
            int sum = 0;
            for(int j = i ; j < size; j++) 
            {
                sum += nums[j];   
                if(sum == k) 
                    counter++; 
            }   
        }
        
        return counter;
    }
	
	int main() {
   		vector <int> nums = {1,1,1};
    	int k = 2;
    	cout<<"Number of subarrays" <<subarrSum(nums,k)<<endl;
  		return 0;
	}