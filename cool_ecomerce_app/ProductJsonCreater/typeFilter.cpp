#include <string>
#include "info.hpp"
using namespace std;
vector<info> includeType(vector<info>& in,string type){
    type=lower(type);
    vector<info> out;
    for(info i:in)
        if(lower(i.type)==type)
            out.push_back(i);
    return out;
}