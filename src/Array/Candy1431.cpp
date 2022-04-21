#include <vector>
#include <iostream>

using namespace std;

class Candy{

public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        //找到原来糖果最多的孩子
        int max = 0;
        for(int i = 0; i <candies.size(); i++) {
            if(candies[i] > max) {
                max = candies[i];
            }
        } 
        //判断加上额外的糖果后能否大于原来最多的孩子
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i]  + extraCandies >= max) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
}

};

int main() {
    Candy candy; 
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool> res = candy.kidsWithCandies(candies, 3);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
}