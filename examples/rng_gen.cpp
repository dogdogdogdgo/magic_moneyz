#include <random>
#include <iostream>

int main(int argc, char* args[]){

    std::mt19937 gen(1337);
    std::uniform_int_distribution<> dist(1, 11);
    for (int i = 0; i<20; i++) {
        std::cout<<(int)(dist(gen) - 5)<<std::endl;
    }
}