#ifndef brandF
#define brandF
#include <string>
#include "info.hpp"
#include <vector>
using namespace std;

vector<info> filterIn(vector<info>& in,string brand);
vector<info> filterIn(vector<info>& in,vector<string> brand);
vector<info> filterOut(vector<info> in,string brand);

#endif