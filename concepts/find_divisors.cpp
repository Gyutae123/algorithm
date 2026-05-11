#include <string>
#include <vector>
using namespace std;
vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            answer.push_back(i);
        }
    }
    return answer;
} 

##########
//효율적인 방법
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            answer.push_back(i);
            
            if(i != n / i){
                answer.push_back(n / i);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
