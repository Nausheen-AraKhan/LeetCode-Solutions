class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>result;
        long long place=1;
        while(n>0){
            int digit=n%10;
            if(digit>0){
                result.push_back(digit*place);
            }
            place*=10;
            n/=10;
        }
        sort(result.begin(),result.end(),greater<int>());
        return result;
    }
};