/*

Given two strings, determine if they share a common substring. A substring may be as small as one character.

For example, the words "a", "and", "art" share the common substring . The words "be" and "cat" do not share a substring.

Function Description

Complete the function twoStrings in the editor below. It should return a string, either YES or NO based on whether the strings share a common substring.

twoStrings has the following parameter(s):

s1, s2: two strings to analyze .
Input Format

The first line contains a single integer , the number of test cases.

The following  pairs of lines are as follows:

The first line contains string .
The second line contains string .
Constraints

 and  consist of characters in the range ascii[a-z].
Output Format

For each pair of strings, return YES or NO.

Sample Input

2
hello
world
hi
world
Sample Output

YES
NO

*/

//CODE

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int p;
    cin>>p;
    for(int k =0;k<p;k++)
    {
    string s1,s2;
    cin>>s1>>s2;
    int a[26]={0};
    int b[26]={0};
    int i =0,j,flag = 0,m=0,n;
    while(s1[i] != '\0'){
        if(s1[i]>='a'&&s1[i]<='z')
        {
            j  = s1[i]-'a';
            ++a[j];
        }
        ++i;

    }
    while(s2[m] != '\0'){
        if(s2[m]>='a'&&s2[m]<='z')
        {
            j  = s2[m]-'a';
            ++b[n];
        }
        ++m;

    }
    for(int s =0;s<26;s++)
    {
        if(a[s]==b[s])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }
    return 0;
}
    




