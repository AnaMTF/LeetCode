​
Iterate over all plausible nine indices (x, y). The (x, y) are
​
(i - 1, j - 1)
​
(i - 1, j)
​
(i - 1, j + 1)
​
(i, j - 1)
​
(i, j)
​
(i, j + 1)
​
(i + 1, j - 1)
​
(i + 1, j)
​
(i + 1, j + 1)
​
If index (x, y) is valid, then add the value of img[x][y] to sum, and increment count by 1.
​
In smooth_img[i][j], store the rounded down value of sum / count.
​
Return the smooth_img.
​