#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int output(int begin_val, int end_val){

    vector<int> counters;

    for (int i = begin_val; i <= end_val; i++){
        int counter = 1;
        int num = i;

        while(num != 1){
            counter++;
            num = (num % 2 == 0)? num / 2 : 3 * num + 1;
        }
        counters.push_back(counter);
    }
    
    return *max_element(counters.begin(), counters.end());
}

int main(){
    int out;
    int begin;
    int end;
    
    for (int i = 0; i < 4; i++){
        cin >> begin >> end;
        out = output(begin, end);
    
        cout << begin << " " << end << " " << out << endl;
    }
    

    return 0;
}

 
    
    