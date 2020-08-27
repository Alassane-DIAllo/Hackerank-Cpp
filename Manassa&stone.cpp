#include <bits/stdc++.h>
#include<set>
#include<algorithm>
#include<vector>


vector<int> stones(int n, int a, int b) {
   
    set<int> s;
    for(int i=n-1;i>=0;i--){
        s.insert(a*i+b*(n-i-1));
    }
    vector<int> v;
    for(set<int> ::iterator it =s.begin();it!=s.end();it++){
        v.push_back(*it);
    }
    return v;
}
