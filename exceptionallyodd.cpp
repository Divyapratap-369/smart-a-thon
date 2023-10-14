class Solution {
public:
	int getOddOccurrence(vector<int>& arr) {
		// Your code goes here
        int result = 0;
        for(int i =0;i<arr.size();i++){
            result = result^arr[i];
        }
        return result;
	}
};
