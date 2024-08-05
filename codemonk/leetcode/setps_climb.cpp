class Solution {
public:

    int solve(int currStair,int n,vector<int>& store){
        // base case
        if(currStair==n){
            return 1;
        }
        if(currStair>n){
            return 0;
        }
        if(store[currStair]!=-1){
            return store[currStair];
        }

        store[currStair]=(solve(currStair+1,n,store)+solve(currStair+2,n,store));
        return store[currStair];
    }

    int climbStairs(int n) {
        vector<int> store(n+1,-1);
        return solve(0,n,store);
    }
};