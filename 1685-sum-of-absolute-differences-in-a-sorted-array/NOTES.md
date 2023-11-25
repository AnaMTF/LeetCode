FIrst of all, let us review the description. We assume the size of nums is n.
​
The array is already sorted s.t. nums[i-1]<=nums[i] as long as 0<=i-1<i<n.
For each 0<=i<n, we need to calculate S[i]=D[i,0]+...+D[i,n-1] which is the sum of D[i,j]=abs(nums[i]-nums[j]) where 0<=j<n.
Fact 1: D[i,j]=D[j,i]
Fact 2: D[i,i-1]=D[i-1,i]=nums[i]-nums[i-1]
Fact 3: For 0<=j<=i, D[i,j]=abs(nums[i]-nums[j])=nums[i]-nums[j]
Fact 4: For j>i, D[i,j]=abs(nums[i]-nums[j])=nums[j]-nums[i]
Meanwhile, let us compare S[i-1] and S[i]
For j in [0,i), D[i-1,j]=abs(nums[i-1]-nums[j])=nums[i-1]-nums[j] and D[i,j]=abs(nums[i]-nums[j])=nums[i]-nums[j]. Here, D[i,j]-D[i-1,j]=D[i,i-1] and the count of [0,i) is i
For j in [i, n), D[i-1,j]=abs(nums[i-1]-nums[j])=nums[j]-nums[i-1] and D[i,j]=abs(nums[i]-nums[i])=nums[j]-nums[i]. Here, D[i,j]-D[i-1,j]=-D[i,i-1] and the count of [i,n) is n-i
​