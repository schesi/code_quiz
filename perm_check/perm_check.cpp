/*
 * perm_check.cpp
 *
 *  Created on: Sep 5, 2016
 *      Author: schesi
 *  Description: Check if an array A is a permutation
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

    size_t i;
    int result = 1; // set this to 1 initially
    std::sort(A.begin(), A.end()); // sort vector and check that is a sequence
    for(i=0; i< (A.size() - 1); i++)
    {
        if( !(A[i+1] == ( A[i]+1 ) )) result = 0;
    }

    return result;
}

int main(void)
{
	vector<int> vec1{3, 4, 2 ,1};
	vector<int> vec2{3, 1, 9};
	cout << "Vec1 is a permutation: " << solution(vec1) << endl;
	cout << "Vec2 is a permutation: " << solution(vec2) << endl;
}



