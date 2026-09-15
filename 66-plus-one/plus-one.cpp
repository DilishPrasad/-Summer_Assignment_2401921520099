class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0)
        {
            if(digits[i]<9)
            {
                digits[i]+=1;
                return digits;
            }
            //else we did get digit 9

            digits[i]=0;
            i--;
        }
        //to forward carry 1 
        digits.insert(begin(digits),1);
        return digits;
    }
};