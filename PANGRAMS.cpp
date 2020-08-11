/*

Roy wanted to increase his typing speed for programming contests. His friend suggested that he type the sentence "The quick brown fox jumps over the lazy dog" repeatedly. This sentence is known as a pangram because it contains every letter of the alphabet.

After typing the sentence several times, Roy became bored with it so he started to look for other pangrams.

Given a sentence, determine whether it is a pangram. Ignore case.

Function Description

Complete the function pangrams in the editor below. It should return the string pangram if the input string is a pangram. Otherwise, it should return not pangram.

pangrams has the following parameter(s):

s: a string to test
Input Format

Input consists of a string .

Constraints


Each character of , 

Output Format

Output a line containing pangram if  is a pangram, otherwise output not pangram.

Sample Input 0

We promptly judged antique ivory buckles for the next prize

Sample Output 0

pangram

Sample Explanation 0

All of the letters of the alphabet are present in the string.

Sample Input 1

We promptly judged antique ivory buckles for the prize

Sample Output 1

not pangram

Sample Explanation 0

The string lacks an x.

*/


//CODE

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int n = s.size();
    for(int k =0;k<n;k++){
        if(int(s[k])<97)
          s[k]= int(s[k]+32);}
    //cout<<s;
    int alphabet[26]={0};
    int i=0,j,flag =0;
    while(s[i]!='\0'){
        if(s[i]>='a' && s[i]<='z'){
            j = s[i]-'a';
            ++alphabet[j];
        }
        ++i;
    }
    for(j=0;j<26;j++)
    {
        if(alphabet[j]!=0)
        {
            flag++;
            
        }
        //else
        //j++;
    }
    if(flag<26)
    return "not pangram";
    else
    return "pangram";




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
