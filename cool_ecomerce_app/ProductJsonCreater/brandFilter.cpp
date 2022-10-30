#include <string>
#include "info.hpp"
#include <vector>
using namespace std;

vector<info> filterIn(vector<info>& in,string brand){
    brand=lower(brand);
    vector<info> out;
    for(info i:in)
        if(lower(i.brand)==brand)
            out.push_back(i);
    return out;
}
vector<info> filterIn(vector<info>& in,vector<string> brand){
    vector<info> out;
    for(info i:in)
        for(string str:brand)
            if(i.brand==lower(str))
            out.push_back(i);
    return out;
}
vector<info> filterOut(vector<info> in,string brand){
    brand=lower(brand);
    vector<info> out;
    for(info i:in)
        if(i.brand!=brand)
            out.push_back(i);
    return out;
}