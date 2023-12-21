We have NN points on a 2D plane. The problem is to find the widest verticle area between any two points without having any other point in between. Vertical area implies that the area can have an infinite length over the y-axis. This means that the y-coordinate doesn't affect the result and we shall focus on the distance along the x-axis.
​
Therefore, we only need to find the width between every two adjacent points based on x-coordinates and the maximum width among these would be the answer. Note that there can be multiple points with the same x-coordinate but that won't affect the answer as the points on the edges can be included in the area.
​
Since the points do not have a specific order, we will need to sort the points in ascending order of x-coordinates first. Then we need to find the difference in x-coordinates between every two neighboring points, and their maximum value is the result we want, as shown in the picture below.
​
Algorithm
​
Sort the array points in ascending order of x-coordinates.
Initialize the variable ans to 0, this will store the widest vertical area which is the answer to the problem.
Iterate over points from index 1 and store the maximum of points[i][0] - points[i - 1][0] in ans.
Return ans.
​