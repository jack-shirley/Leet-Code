#include <stdio.h>
#include <iostream>
#include <vector>
#include "twosum.cpp"


int main(){
    std::printf("asdf");
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    

    Solution sol;
    std::vector<int> answer = sol.twoSum(vec,8);

    std::cout << answer[0] << "," << answer[1] << std::endl;
    return 0;
}