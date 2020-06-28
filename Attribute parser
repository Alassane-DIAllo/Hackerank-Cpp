#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main()
{   
    int n, q;
    string curr="", attr_name;
    map<string,string> m;
    cin>>n>>q;
    for(int i =0;i<n;i++){
        string line, tag, extract;
        getline(cin,line);
        stringstream ss(line);
        while(getline(ss,extract,' '))
        {
            if(extract[0]=='<'){
                if(extract[1]!='/'){
                    //if we have an open tag
                    tag = extract.substr(1);
                    if(tag[tag.lenght()-1]=='>')
                    // we remove the close tag
                        tag.pop_back();
                    }
                    if(curr.size()>0){
                        curr = "." + tag; 
                        }
                    else {
                        curr = tag;
                        }
                    }
                else{
                    tag= extract.substr(2,extract.find('>')-2);
                    size_t pos = curr.find("." +tag);
                    if(pos != string::npos){
                        curr = curr.substr(0,pos);
                        }
                        
                    }
                    
                }
            else if (extract[0]=='"'){
                site_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1,pos-1);
                // Add to the map
                m[attr_name] = attr_value;
                }
            else{
                if (extract[0]!='='){
                    attr_name = curr+ "~" + extract;
                    }
                }
        }    
    
    string query;
    for(int i=0;i<n;i++){
        getline(cin,query);
        map<string,string>::iterator itr = m.find(query);
        if(itr !=m.end()){
            cout<< itr->second <<endl;  
        }
        else{
            cout<<"Not Found!"<<endl;
            }
    }
    return 0;
}
    
    
