#ifndef INFO
#define INFO
#include <string>
#include <vector>
using namespace std;

struct info{
    string type;
    string image;
    string brand;
    string product;
    string url;
    float price;
};
string lower(string);
void lower(info&);
vector<info> fileInput(string);
void fileOutput(vector<info>,string);

#endif