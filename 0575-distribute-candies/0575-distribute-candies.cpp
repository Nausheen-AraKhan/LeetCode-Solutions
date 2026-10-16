class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int freq[200001]={0};
        for(int i=0;i<candyType.size();i++){
            freq[candyType[i]+100000]++;
        }
        int count=0;
        for(int i=0;i<200001;i++){
            if(freq[i]>0)
               count++;
        }
        if(count>candyType.size()/2)
           return candyType.size()/2;
        return count;
    }
};