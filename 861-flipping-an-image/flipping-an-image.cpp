class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        for(int i=0;i<m;i++)
        {
            int left=0;
            int right=image[i].size()-1;
            while(left<=right)
            {
                int temp=1-image[i][left];
                image[i][left]=1-image[i][right];
                image[i][right]=temp;
                left++;
                right--;
            }


        }
        return image;
        
    }
};