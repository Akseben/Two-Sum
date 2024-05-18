// Two Sums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();     //commits size to memory to reduce memory usage from grabbing it multiple times during the for loops

        for (int i = 0; i < n - 1; i++) { //nested for loop, runs through each pair of numbers without comparing the same pos
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return { i,j };  //returns indices if nums match target value
                }
            }
        }
        return {};
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

