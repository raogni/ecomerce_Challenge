#include "info.hpp"
#include "priceFilter.hpp"
#include "brandFilter.hpp"
#include "typeFilter.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

vector<info> inverse(vector<info>& in){
    vector<info> out;
    for(int i=in.size()-1;i>=0;i--){
        out.push_back(in[i]);
    }
    return out;
}

int main(){
    string path="json\\";
    vector<info> data=fileInput("info.txt");
    vector<info> inv=inverse(data);
    quickSort(data,0,data.size());
    fileOutput(data,path+"allSortedByPriceAscending.json");
    fileOutput(inv,path+"allSortedByPriceDescending.json");
    vector<string> types={"shoes","dress","jacket","jeans"};
    vector<string> brands={"puma","nike","reebok","riverisland","asos","northface","topshop","moshabelle","pacsun"};
    for(string i:types){
        fileOutput(includeType(data,i),path+i+"SortedByPriceAscending.json");
        fileOutput(includeType(inv,i),path+i+"SortedByPriceDescending.json");
    }
    for(string i:brands){
        fileOutput(filterIn(data,i),path+i+"SortedByPriceAscending.json");
        fileOutput(filterIn(inv,i),path+i+"SortedByPriceDescending.json");
    }
    return 0;
}