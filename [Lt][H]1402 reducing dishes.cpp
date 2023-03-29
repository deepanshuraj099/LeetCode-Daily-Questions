class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(), sat.end());
        int i= sat.size()-1;
        int sum = 0;
        for(i ; i >= 0 ; i--) {
            sum += sat[i];
            if(sum < 0) {
                i++;
                break;
            }
        }
        if(i<0) i++;
        sum = 0;
        int k = 1;
        while(i<sat.size()) {
            sum += (k++) * sat[i]; 
            i++;
        }
        return sum;
    }
};