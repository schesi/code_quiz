/*
 * Name: binary_gap.cpp
 * Author: Simone Chesi
 * Description: Find the largest sequence of zeros in a
 * 				positive integer N
 */

#include <iostream>
#include <algorithm>


int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    bool found_one = false; //initial flag
    int count_zeros = 0; // current sequence of zeros
    int max_seq_zeros = 0; // max sequence of zeros
    int tmp_num; //

    tmp_num = N;

    while(tmp_num) // continue untill the entire number is processed
    {
        if( (tmp_num & 1) == 1) // I found you one
        {
            if( found_one == false ) // activate the flag
            {
                found_one = true;
            }
            else
            {
                max_seq_zeros = std::max(max_seq_zeros, count_zeros);
                count_zeros = 0;
            }
        }
        else // I found zero
        {
            count_zeros++;
        }
        tmp_num >>=1; // move number to the right by one
    }

   return max_seq_zeros;
}


int main() {
	int N = 12673;  // 11000110000001 max bin gap = 6
	int result = 0;
	result = solution(N);
	std::cout << "The binary gap of "<< N << " is " << result << std::endl; // prints !!!Hello World!!!
	return 0;
}
