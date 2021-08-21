#include <gtest/gtest.h>
#include "../subset_sum.hpp"

bool isContained(const std::vector<int>&a,const std::vector<std::vector<int>>&b){

    bool res=false;
    for(int j=0;j<b.size();j++){
        res |= a.size()==b[j].size() &&
        a==b[j];
    }
    return res;
}

std::vector<int> sol;
void setter(const std::vector<int>& p){
    sol=p;
}

TEST(El6_12_6, primeraOpcion) {
    // setup
    std::vector<int> C={6,12,6};
    std::vector<int> p={0,0,0};
    bool existe=false;
    

    std::vector<std::vector<int>>resultados={{0,1,0},{1,0,1}};
    subset_sum(C,p,C.size()-1,12,existe,&setter);
    EXPECT_TRUE(isContained(sol,resultados));
}
