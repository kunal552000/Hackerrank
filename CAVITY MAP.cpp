/*

You are given a square map as a matrix of integer strings. Each cell of the map has a value denoting its depth. We will call a cell of the map a cavity if and only if this cell is not on the border of the map and each cell adjacent to it has strictly smaller depth. Two cells are adjacent if they have a common side, or edge.

Find all the cavities on the map and replace their depths with the uppercase character X.

For example, given a matrix:

989
191
111
You should return:

989
1X1
111
The center cell was deeper than those on its edges: [8,1,1,1]. The deep cells in the top two corners don't share an edge with the center cell.

Function Description

Complete the cavityMap function in the editor below. It should return an array of strings, each representing a line of the completed map.

cavityMap has the following parameter(s):

grid: an array of strings, each representing a row of the grid
Input Format

The first line contains an integer , the number of rows and columns in the map.

Each of the following  lines (rows) contains  positive digits without spaces (columns) representing depth at .

Constraints


Output Format

Output  lines, denoting the resulting map. Each cavity should be replaced with the character X.

Sample Input

4
1112
1912
1892
1234
Sample Output

1112
1X12
18X2
1234

*/


//CODE

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char map[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        cin>>map[i][j];}
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(map[i][j]>map[i-1][j] && map[i][j]>map[i][j-1] && map[i][j]>map[i][j+1] &&                     map[i][j]>map[i+1][j]){
            map[i][j]='X'; 
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        cout<<map[i][j];}
        cout<<endl;
    }
   // cout<<endl;
    return 0;

}
