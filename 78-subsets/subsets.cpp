class Solution {
public:
      void subseq(vector<int>&arr,int index,int n,vector<vector<int > >&ans,vector<int>temp)
      {
        if(index==n)
        {
            ans.push_back(temp);
            return;

        }
        //not included
        subseq(arr,index+1,n,ans,temp);
        //included
        temp.push_back(arr[index]);
        subseq(arr,index+1,n,ans,temp);
        temp.pop_back();
      }



    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int> >ans;
        vector<int>temp;
        subseq(arr,0,arr.size(),ans,temp);
        return ans;
        
    }
};