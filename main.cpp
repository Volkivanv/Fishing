#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filePathRead = "river.txt";
    std::ifstream river;

    river.open(filePathRead);
    if(river) {
        std::ofstream basket;
        std::string filePathWrite = "basket.txt";
        std::string wantedFish;
        std::cout << "Input fish you want to catch!" << std::endl;
        std::cin >> wantedFish;
        basket.open(filePathWrite,std::ios::app);
        int i = 0;
        while(!river.eof()){
            std::string fish;
            river >> fish;
            if(fish == wantedFish){
                basket << fish << std::endl;
                i++;
            }
        }
        std::cout << "You caught "<< i << " Fish!" << std::endl;
        basket.close();
    } else {
        std::cerr << "File is not found!"<< std::endl;
    }
    return 0;
}
