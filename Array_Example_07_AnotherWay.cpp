#include<iostream>
int main(){

    int size;
    std::cout<<"Enter the size :: "<<std::endl;
    std::cin>>size;

    int arr[size];
    std::cout<<"Enter the elements ............"<<std::endl;

    for(int i=0;i<size;i++){
        std::cout<<"Enter no "<<(i+1)<<" elememnt :: ";
        std::cin>>arr[i];
        std::cout<<std::endl;
    }

    std::cout<<"Elements are............"<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    int max = arr[0];
    int sMax = arr[0];

    for(int i=0;i<size;i++){
        if(max < arr[i]){
            sMax = max;
            max = arr[i];
        }
    }

    std::cout<<"Maximum value is :: "<<max<<std::endl;
    std::cout<<"Second Maximum value is :: "<<sMax<<std::endl;

    return 0;

}
