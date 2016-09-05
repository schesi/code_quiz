/*
 * circular_shift.cpp
 *
 *  Created on: Sep 5, 2016
 *      Author: schesi
 *  Description: this program performs K times a right circular
 *  			 shift of the elements inside a vector
 */
#include <algorithm>
#include <iostream>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

std::vector<int> solution(std::vector<int> &A, int K) {
    // simply add the last element in the front and
	// take out the last
	if(!A.empty()) // check if vector is empty
	{
	    while(K)
	    {
	        A.insert(A.begin(),A.back());
	        A.pop_back();
	        K--;
	    }
	}
	else
	{
		std::cout << "Vector is empty" << std::endl;
	}


    return A;
}

int main(void)
{
	std::vector<int> test_vec{1, 2, 3, 4, 5, 6}; // test vector

	int K = 3; // shift times
	test_vec = solution(test_vec, K);

	std::cout << "Vector = ";
	for(size_t i = 0; i < test_vec.size(); i++)
		std::cout << test_vec[i] << " ";
	std::cout << std::endl;




	return 0;
}


