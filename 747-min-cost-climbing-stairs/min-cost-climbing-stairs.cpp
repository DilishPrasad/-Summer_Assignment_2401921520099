class Solution {
public:
// int solveRec(int i,vector<int>& cost){
//    if (i >= cost.size()) {
//             return 0;
//         }
    
   
//      int a=solveRec(i+1,cost);
//      int b=solveRec(i+2,cost);
    
    
    //return cost[i]+ min(a,b);
//}
    int solvemem(int i,vector<int>& cost,vector<int>&dp){
    if (i >= cost.size()) {
            return 0;
        }
    if(dp[i]!=-1)
    return dp[i];
    
   
     int a=solvemem(i+1,cost,dp);
     int b=solvemem(i+2,cost,dp);
    
    
    dp[i]= cost[i]+ min(a,b);
    return dp[i];

}

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);

        
        return min(solvemem(0, cost,dp), solvemem(1, cost,dp));
        
    }
};    
   