class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
        }
        sum=sum-salary[0];
        sum=sum-salary[salary.size()-1];
        double average=(double)sum/(salary.size()-2);
        return average;
    }
};