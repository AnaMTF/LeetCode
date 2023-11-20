# You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

# Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.
class Solution:
    def average(self, salary: List[int]) -> float:
        min_sal, max_sal, total = math.inf, -math.inf, 0.0
        for sal in salary:
            min_sal, max_sal = min(min_sal, sal), max(max_sal,sal)
            total += sal
        return (total - min_sal - max_sal) / (len(salary) -2)
        
