#include<iostream>
#include<vector>
// #include<math.h>
using namespace std;

int main(){

    vector<int> height={1 , 8 , 6 , 2, 5, 4, 8, 3, 7};


    int maxwat=0;
    for(int i =0;i<height.size();i++){
        for(int j=i;j<height.size();j++){

            int hei = min(height[i],height[j]);
            int width= j-i;
            int water=hei*width;
            
            maxwat=max(maxwat , water);            
            
        }
    }
    cout<<maxwat;


    return 0;
}