#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "info.hpp"
using namespace std;

int partition(vector<info>& in,int start, int end){
    int cnt=0;
    info temp=in[start];
    for(int i=start+1;i<end;i++)
        if(in[i].price<temp.price)
            cnt++;
    int pos=start+cnt;
    in[start]=in[pos];
    in[pos]=temp;
    
    int i=start,u=end;
    while(i<pos&&u>pos){
        while(in[i].price<temp.price)
            i++;
        while(in[u].price>temp.price)
            u--;
        if(i<pos&&u>pos){
            info tp=in[i];
            in[i]=in[u];
            in[u]=tp;
            i++;
            u--;
        }
    }
    return pos;
}
void quickSort(vector<info>& in,int start,int end){
    if(start>=end)
        return;
    int p=partition(in, start,end);
    quickSort(in,start,p-1);
    quickSort(in,p+1,end);
}