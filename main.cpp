#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

void output(int begin_val, int end_val);

int main(){
    
    // Write the Sample Inputs
    output (900, 1000);
    
    return 0;
}

void output(int begin_val, int end_val){

    vector<int> counters;
    vector<int>::iterator it;

    for (int i = begin_val; i <= end_val; i++){
        int counter = 1;
        int num = i;

        while(num != 1){
            counter++;
            num = (num % 2 == 0)? num / 2 : 3 * num + 1;
        }
        counters.push_back(counter);
    }

    cout << begin_val << " " << end_val << " " << *max_element(counters.begin(), counters.end()) << endl;
} 
    
    