#include<vector>

void subset_sum(std::vector<int>&C,
            std::vector<int>&p,
            int i,int j,bool &exist, 
            void(*setter)(const std::vector<int>&));