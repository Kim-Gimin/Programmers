#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int solutionI(vector<string> strs, string t){
    
    set<string> str_set(strs.begin(), strs.end());
    const int INF = 987654321;
    int dp[20002];
    int len = t.length();

    for (int i = 0; i < len; i++){
        dp[i] = INF;
        }
    dp[len] = 0;
    for (int i = len -1; i>= 0; --i){
        string tmp = "";
        for(int j = 0; i + j < len && j < 5; ++j){
            tmp += t[i+j];
            if(str_set.find(tmp)!= str_set.end() &&dp[i+j+1] != INF){
                dp[i] = min(dp[i], dp[i+j+1]+1);
            }
        }

        if(dp[0] == INF){
            return -1;}
        return dp[0];    
    }
}