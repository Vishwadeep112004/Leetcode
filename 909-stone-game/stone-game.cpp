class Solution {
     map<vector<int>, pair<int,int>> dp;
    pair<int,int> give(vector<int> &a, int i, int j, int flag)
    {
        if(i>j)return {0,0};
        if(dp.find({i,j,flag})!=dp.end())return dp[{i,j,flag}];

        if(flag)
        {
            pair<int,int> srt=give(a,i+1,j,!flag);
            srt.first+=a[i];
            pair<int,int> end=give(a,i,j-1,!flag);
            end.first+=a[j];
            return dp[{i,j,flag}] = (srt.first>=end.first)?srt:end;
        }
        pair<int,int> srt=give(a,i+1,j,!flag);
        srt.second+=a[i];
        pair<int,int> end=give(a,i,j-1,!flag);
        end.second+=a[j];
        return dp[{i,j,flag}] = (srt.second>=end.second)?srt:end;

    }
public:
    bool predictTheWinner(vector<int>& nums) {
        auto [one,two]=give(nums,0,nums.size()-1,1);
        return one>=two;
    }
public:
    bool stoneGame(vector<int>& piles) {
        return predictTheWinner(piles);
    }
};