/*

A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.

Function Description

Complete the function isBalanced in the editor below. It must return a string: YES if the sequence is balanced or NO if it is not.

isBalanced has the following parameter(s):

s: a string of brackets
Input Format

The first line contains a single integer , the number of strings.
Each of the next  lines contains a single string , a sequence of brackets.

Constraints

, where  is the length of the sequence.
All chracters in the sequences ? { {, }, (, ), [, ] }.
Output Format

For each string, return YES or NO.

Sample Input

3
{[()]}
{[(])}
{{[[(())]]}}
Sample Output

YES
NO
YES

*/

//CODE

#include <bits/stdc++.h>
#include<stack>

using namespace std;

// Complete the isBalanced function below.
bool arepair(char opening ,char closing)
{
    if(opening == '(' && closing == ')')
    return true;
    else if(opening == '{' && closing == '}')
    return true;
    else if(opening == '[' && closing == ']')
    return true;
    else
    return false;
}
string isBalanced(string s) {
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(st.empty() || !arepair(st.top(),s[i]))
            return "NO";
            else
            st.pop();
        }
    }
    return st.empty() ? "YES" : "NO";



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
