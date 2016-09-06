/*
 * circular_shift.cpp
 *
 *  Created on: Sep 5, 2016
 *      Author: schesi
 *
 * Description: this program returns the unpaired element
 * 				in an odd array filled with paired elements
 * 				but one
 */
#include <iostream>
#include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(std::vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    // search for number in the array
    size_t i;
    int unpair_num = 0;

    for(i = 0; i < A.size(); i++){
        if(!std::binary_search(A.begin(), A.end(), A[i])) unpair_num = A[i];
    }

    return unpair_num;

}

int main(void)
{
	std::vector<int> vec{9, 3, 9, 3, 9, 7, 9};

	std::cout << "The unpaired element is = " << solution(vec) << std::endl;
	return 0;
}
