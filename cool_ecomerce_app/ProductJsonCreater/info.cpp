#include "info.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

string lower(string in){
    string out;
    int cnt;bool last=false;
    for(char c:in)
        if(c!=' '&&c!='\n')
            out+=tolower(c);
    return out;
}
void lower(info& i){
        i.image=lower(i.image);
        i.brand=lower(i.brand);
        i.product=lower(i.product);
        i.url=lower(i.url);
}
vector<info> fileInput(string file){
    vector<info> pV;
    try{
        ifstream in(file);
        string cur;
        while(in>>cur){
            info p;
            p.type=cur;
            in>>p.image
              >>p.brand
              >>p.product
              >>p.url
              >>p.price;
            lower(p);
            if(!cur.empty())
                pV.push_back(p);
        }
    }
    catch(...){
        cout<<"file didn't open";
    }
    return pV;
}
void fileOutput(vector<info> in,string file){
    string out="{\n";
    for(info i:in){
        if(i.brand.empty())
            continue;
        float p=i.price*100;
        int price=(int)p;
        out+=("\""+i.product+"\": {\n");
        out+="\"type\": \""+i.type+"\",\n";
        out+="\"image\": \""+i.image+"\",\n";
        out+="\"brand\": \""+i.brand+"\",\n";
        out+="\"url\": \""+i.url+"\",\n";
        out+="\"price\": ";
        out+=to_string(price/100);
        out+=".";
        out+=to_string(price%100);
        out+="\n";
        out+="},\n";
    }
    out=out.substr(0,out.size()-2);
    out+="\n}";
    try{
        ofstream of(file);
        of<<out;
    }
    catch(...){
        cout<<"file didn't open";
    }
}