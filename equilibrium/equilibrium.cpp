/* 
 * The equilibrium index of a sequence is an index such that the sum of
 * elements at lower indexes is equal to the sum of elements at higher indexes.
 * For example, in a sequence A:
 *
 *      A[0]=-7 A[1]=1 A[2]=5 A[3]=2 A[4]=-4 A[5]=3 A[6]=0
 *
 * 3 is an equilibrium index, because:
 *
 *      A[0]+A[1]+A[2]=A[4]+A[5]+A[6]
 *
 * 6 is also an equilibrium index, because:
 *
 *      A[0]+A[1]+A[2]+A[3]+A[4]+A[5]=0
 *
 *  Write a function that, given a sequence, returns its equilibrium index (any) 
 *  or -1 if no equilibrium index exists. Assume that the sequence may be very long.
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int solution(const vector<int> &A)
{
    int k, m, lsum, rsum, n;
    n = A.size();
    for(k = 0; k < n; ++k) {
        lsum = 0; rsum = 0;
        for(m = 0; m < k; ++m){
            lsum += A[m];
            cout << "left = " << lsum << endl;
        }
        for(m = k + 1; m < n; ++m){
            rsum += A[m];
            cout << "right = " << rsum << endl;
            if (lsum == rsum) return k;
        }
        
    }
    return -1;
    
}

int main(void)
{
    cout << "Equilibrium problem" << endl;
    vector<int> vec{1, 2, 3, 6, 2, 4};
    //vector<int> vec1{-7, 1, 5, 2, -4, 3, 0};
    cout << "Eq index = " << solution(vec) << endl;
    return 0;
}

