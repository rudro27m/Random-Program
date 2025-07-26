#include<iostream>
int main(){

    int size;
    std::cout<<"Enter size :: ";
    std::cin>>size;

    int arr[size];
    std::cout<<"Enter elements :: "<<std::endl;

    int totalTriplets = 0;
    int x = 12;

    for(int i =0;i<size;i++){
        std::cout<<"Give the value of "<<(i+1)<<" ";
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i =0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for(int k = j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    totalTriplets+=1;
                    std::cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<std::endl;
                }
            }
        }
    }

    std::cout<<"Total pairs "<<totalTriplets<<std::endl;

    std::cout<<"You are noob"<<std::endl;

    return 0;

}
