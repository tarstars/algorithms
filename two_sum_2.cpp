//  two_sum_2
//  https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//  Created by Maria Ryzhova on 11.12.16.
//  Copyright © 2016 Maria Ryzhova. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a[] = {-2, -1, 0, 3, 5, 6, 7, 9, 13, 14};
    int size = sizeof(a)/sizeof(int);
    int sum = 12;
    int i = 0;
    int j = size-1;
    sort(a, a + size);
    int sum1;

    while (i<j){
        sum1 = a[i]+a[j];
        if (sum1 == sum){
            cout<< i <<" and "<< j <<endl;
            i++;
            j--;
        }
        else {
            if (sum1<sum) {
                i++;
            }
            else {
                j--;
            }
        }
    }
    return 0;
}
