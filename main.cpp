#include <iostream>
#include "./programs/496.cpp"
#include "./includes/main.h"
using namespace std;

int main()
{
    Solution s;
    vector<int> a {1,3,5,2,4};
    vector<int> b {6,5,4,3,2,1,7};
    cout << s.nextGreaterElement(a, b)[2]<< endl;
    
    return 0;
}
