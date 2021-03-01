#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz) {
        if(strng.empty()|| sz > strng.size() || sz==0){
            return "";
        }
        std::vector<std::string> cut_strings;
        for(size_t i=0;i+sz<=strng.size();i+=sz){
            cut_strings.push_back(strng.substr(i,sz));
        }
        for(auto &b:cut_strings){
            int sum=0;
            for(const auto &x:b){
                sum+=pow(x,3);
            }
            if(sum%2==0){
                std::reverse(b.begin(),b.end());
            }
            else{
                std::string copy;
                for(size_t i=1;i<b.size();i++){
                    copy.push_back(b[i]);
                }
                copy.push_back((b[0]));
                b=copy;
            }
        }
        std::string final_solution;
        for(auto &b:cut_strings){
            final_solution+=b;
        }
        return final_solution;
    }
};
