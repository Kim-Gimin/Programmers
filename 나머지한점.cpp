#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans = {0,0};
    for(int i=0; i<3; i++)
    {
        ans[0] ^= v[i][0]; // XOR 비트연산 사용
        ans[1] ^= v[i][1];
    }
    return ans;
}
int main(){
vector<vector<int>> v = {{3,4}, {2,4}, {2,2}};
vector<int> result = solution(v);

cout << result[0] << " " << result[1] << endl;

return 0;
}