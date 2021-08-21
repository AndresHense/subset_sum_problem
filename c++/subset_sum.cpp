#include<vector>
#include "subset_sum.hpp"
void subset_sum(std::vector<int>&C,
            std::vector<int>&p,
            int i,int j,bool &exist, 
            void(*setter)(const std::vector<int>&)){
    if(j<0)return;
    if(j==0){
        setter(p);
        exist=true;
        return;
    }else{
        p[i]=1;
        subset_sum(C,p,i-1,j-C[i],exist,setter);
        if(exist)return;
        p[i]=0;
        //console.log(p,"i: ",i,"k:",k,"C[i]",C[i]);
        subset_sum(C,p,i-1,j,exist,setter);
        if(exist)return;
    }
    return;
}