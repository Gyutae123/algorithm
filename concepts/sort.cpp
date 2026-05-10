#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int sum = 0;
    
    int numMax = *max_element(sides.begin(), sides.end());
    auto maxIndex = find(sides.begin(), sides.end(), numMax);
    
    sides.erase(maxIndex);
    
    for(auto c : sides){
        sum += c;                
    }
    if(numMax >= sum){
        answer = 2;
    }
    else{
        answer = 1;
    }
    return answer;
}

############################


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end());
    
    if(sides[0] + sides[1] <= sides[2]){
        answer = 2;
    }
    else{
        answer = 1;
    }
    return answer; 
}
