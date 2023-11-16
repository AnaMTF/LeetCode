// You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

// Return the array after sorting it.
class Solution {
public:
    static int findWeight(int num){
        int mask = 1;
        int weight = 0;
        while(num >0){
            if((num & mask)!=0){ //AND
                weight++;
                num ^= mask; //XOR
            }
            mask <<= 1; //Left shift
        }
        return weight;
    }

    static bool compareWeight (int a, int b){
        if (findWeight(a)==findWeight(b)){
            return a< b;
        }
        return findWeight(a) < findWeight(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compareWeight);
        return arr;
    }
};
