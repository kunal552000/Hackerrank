/*

Numeros the Artist had two lists that were permutations of one another. He was very proud. Unfortunately, while transporting them from one exhibition to another, some numbers were lost out of the first list. Can you find the missing numbers?

As an example, the array with some numbers missing, . The original array of numbers . The numbers missing are .

Notes

If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
You have to print all the missing numbers in ascending order.
Print each missing number once, even if it is missing multiple times.
The difference between maximum and minimum number in the second list is less than or equal to .
Function Description

Complete the missingNumbers function in the editor below. It should return a sorted array of missing numbers.

missingNumbers has the following parameter(s):

arr: the array with missing numbers
brr: the original array of numbers
Input Format

There will be four lines of input:

 - the size of the first list, 
The next line contains  space-separated integers 
 - the size of the second list, 
The next line contains  space-separated integers 

Constraints

Output Format

Output the missing numbers in ascending order.

Sample Input

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
Sample Output

204 205 206

*/


//CODE

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int k =0;k<n;k++)
    cin>>arr[k];
    int  m;
    cin>>m;
    int brr[m];
    for(int l=0;l<m;l++)
    cin>>brr[l];
    sort(arr,arr+n);
    sort(brr,brr+m);
    int a[m-n];
    int z = 0;
    long i=0,j=0;
    while(j<m)
    {
        if(arr[i]==brr[j])
        {
            i++;
            j++;
        }
        else
        {
           // cout<<brr[j]<<" ";
           a[z]=brr[j];
            j++;
            z++;
        }
    }
   // sort(a,a+z);
    for(int k=0;k<z;k++)
    {
        if(a[k]!=a[k+1])
        cout<<a[k]<<" "; 
    }
    return 0;
}
