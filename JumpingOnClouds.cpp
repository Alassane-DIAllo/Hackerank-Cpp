#include <isotream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c) {
    int Njump = 0;
    for(int i =0; i<c.size()-1;i++,Njump++){
        if(c[i+2]!=1 and i+2<c.size()) {
            i++;
        }
    }
 return Njump;
};
