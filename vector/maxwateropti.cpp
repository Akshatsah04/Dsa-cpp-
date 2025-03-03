#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int maxwat=0;
    int water;
    int str=0;
    int end=height.size()-1;

    while(str<end){
        water=(end-str)*min(height[str],height[end]);
        maxwat=max(maxwat , water);
        // if(height[str]>height[end]){
        //     end--;
        // }else if(height[str]<height[end]){
        //     str++;
        // }else{
        //     str++;
        // }

        height[str]>height[end]? end-- : str++;
    }
    cout<<maxwat<<endl;

    return 0;
}