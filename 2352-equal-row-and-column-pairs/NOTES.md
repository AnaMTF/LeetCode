​
Step by Step
​
map<vector<int>, int> counter;
for (vector<int> row : grid) {
counter[row] += 1;
}
​
We use this to hold the value of each row as a key. To see if a column list is equal to the row key. Since we are comparing rows to columns only one needs to be the key
Example of this for loop
counter[{3,2,1}] = 1;
counter[{1,7,6}] = 1;
counter[{2,7,7}] = 1;
​
for (int i = 0; i < row; i++) {
vector<int> column_list = {};
for (int j = 0; j < col; j++) {
column_list.push_back(grid[j][i]);
}
ans += counter[column_list];
}
​
This is getting each list of column values. Since we do not have an array list of column values like row values, we need to create the list ourselves.
Example
column_list = {3,1,2};