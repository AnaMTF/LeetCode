If you are new to this data structure we recommend that you read Leetcode's Heap Explore Card.
​
We will use priority queues which are internally implemented using a heap. Each element of the priority queue will be an object of class Food(integer foodRating, string foodName). To keep the appropriate element on the top of the priority queue we will use a custom comparator to define the logic for comparing two elements.
​
Since the priority queue will keep the elements sorted based on their ratings, you might be thinking: when we modify the rating of food, do we need to remove this food with the old rating from the priority queue to ensure accuracy and then add the food with the new rating?
​
For example, if we change the rating of food X from 10 to 1, the old data (10, X) in the queue might become the highest-rated food, which it shouldn't be. Should we remove it in this case?
​
​
First of all, searching for elements in the priority queue is a time-consuming task as in the worst case we would have to iterate over all elements stored in the priority queue.
​
Secondly, we can avoid the deletion of old rating elements.
​
If we fetch any element (foodRating, foodName) from the priority queue then there are only two cases: either the element has the correct foodRating or an old rating.
One food can only have one rating, we can verify the fetched element's foodRating with the rating stored in foodRatingMap against the key foodName. If the values don't match, it means the rating for foodName was changed and we can safely discard this fetched element of the priority queue and move on to the next highest rating in the priority queue.
​
​
Also remember that while changing the rating, it is necessary to get the cuisine name of that corresponding food to push the new rating element into the appropriate priority queue. To obtain the cuisine name, we must map the food name to its respective cuisine name as well using another hash map (say foodCuisineMap).
​
Algorithm
​
Create a class Food containing foodRating and foodName properties, and overload less than operator method to keep the highest rated or lexicographically smaller named element on the top in the priority queue.
​
Create three hash maps:
foodRatingMap, to store ratings associated with the respective food.
foodCuisineMap, to store the cuisine name of the respective food.
cuisineFoodMap, to store Food(foodRating, foodName) elements in a priority queue associated with the respective cuisine.
​
Initialization. Iterate on all indices of the foods array, and for each index i:
Store (foods[i], ratings[i]) and (foods[i], cuisines[i]) key-value pairs in foodRatingMap and foodCuisineMap respectively.
Insert Food(ratings[i], foods[i]) element in the priority queue of cuisines[i] key of cuisineFoodMap.
​
Implementing changeRating(food, newRating) method:
Update new rating in foodRatingMap.
Fetch the cuisine name for food from foodRatingMap.
Insert the Food(newRating, food) element in the priority queue of the cuisine name in cuisineFoodMap.
​
Implementing highestRated(cuisine) method:
Get the top element (i.e. highestRated) from the priority queue of cuisine in cuisineFoodMap.
If the rating of the top element and the rating of the corresponding food in foodRatingMap are not the same, i.e. highestRated.foodRating != foodRatingMap[highestRated.foodName], then we discard and remove the current top element and fetch the next top element from the priority queue. Repeat this step until ratings are the same.
Return the food name of the top element, i.e. highestRated.foodName.
​