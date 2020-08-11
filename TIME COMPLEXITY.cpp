/*

A prime is a natural number greater than  that has no positive divisors other than  and itself. Given  integers, determine the primality of each integer and print whether it is Prime or Not prime on a new line.

Note: If possible, try to come up with an  primality algorithm, or see what sort of optimizations you can come up with for an  algorithm. Be sure to check out the Editorial after submitting your code!

Function Description

Complete the primality function in the editor below. It should return Prime if  is prime, or Not prime.

primality has the following parameter(s):

n: an integer to test for primality
Input Format

The first line contains an integer, , denoting the number of integers to check for primality.
Each of the  subsequent lines contains an integer, , the number you must test for primality.

Constraints

Output Format

For each integer, print whether  is Prime or Not prime on a new line.

Sample Input

3
12
5
7
Sample Output

Not prime
Prime
Prime

*/


//CODE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int p;
    cin>>p;
    while(p-- > 0){
        int n;
        cin>>n;
       int c=0;
        for(int i =2;i<=sqrt(n);i++)
        if(n%i==0){
            cout<<"Not prime"<<endl;
            c = 1;
            break;
        }
        if(n==1)
        cout<<"Not prime"<<endl;
        else if(c==0)
        cout<<"Prime"<<endl;
    }  
    return 0;
}
