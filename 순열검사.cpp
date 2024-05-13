#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<int> arr)
{
    bool answer = true;
    int len = arr.size();
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    // unique()함수는 중복된 원소를 제거하고 앞에서부터 원소를 채워나가며 나머지 자리엔
    // 기존 배열의 원소를 채워넣는다.
    // erase() 함수는 실제로 함수값을 지운다. 시작구간은 닫힌구간,
    // 끝나는 구간은 열린 구간으로 삭제
    sort(arr.begin(), arr.end());
    if(arr.back() != len){
        answer = false;
    }

    return answer;

}