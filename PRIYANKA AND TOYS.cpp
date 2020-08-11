/*

Priyanka works for an international toy company that ships by container. Her task is to the determine the lowest cost way to combine her orders for shipping. She has a list of item weights. The shipping company has a requirement that all items loaded in a container must weigh less than or equal to 4 units plus the weight of the minimum weight item. All items meeting that requirement will be shipped in one container.

What is the smallest number of containers that can be contracted to ship the items based on the given list of weights?

For example, there are items with weights . This can be broken into two containers:  and . Each container will contain items weighing within  units of the minimum weight item.

Function Description

Complete the toys function in the editor below. It should return the minimum number of containers required to ship.

toys has the following parameter(s):

w: an array of integers that represent the weights of each order to ship
Input Format

The first line contains an integer , the number of orders to ship.
The next line contains  space-separated integers, , representing the orders in a weight array.

Constraints



Output Format

Return the integer value of the number of containers Priyanka must contract to ship all of the toys.

Sample Input

8
1 2 3 21 7 12 14 21
Sample Output

4

*/

//CODE


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the toys function below.
int toys(vector<int> w) {
    int n  = w.size();
    int i=0,c=0;
    int min;
    sort(w.begin(),w.end());
    while(i!=n)
    {
        c++;
        min = w[i];
        while(i!=n  && w[i]<=min+4)
        i++;
        if(i==n)
        break;
    }
    return c;
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string w_temp_temp;
    getline(cin, w_temp_temp);

    vector<string> w_temp = split_string(w_temp_temp);

    vector<int> w(n);

    for (int i = 0; i < n; i++) {
        int w_item = stoi(w_temp[i]);

        w[i] = w_item;
    }

    int result = toys(w);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
