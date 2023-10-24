//vectors
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int > v;
    v.push_back(72);
    v.push_back(25);
    v.push_back(26);
    sort(v.begin(), v.end());
    
    // using pop_back() to reduce the k size,
    // it doesn't delete element.
    int k = (int) v.size();
    for(int i=0; i<k; i++){
        cout<<v[i];
    }
    return 0;
}
