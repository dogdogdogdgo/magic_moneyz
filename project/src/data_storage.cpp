#include "data_storage.hpp"
#include <random>
#include <iostream>


using namespace data;

DataStorage::DataStorage() {};

StockData* DataStorage::getData(stock s){
    //minnes läckor? fixa
    StockData* d = new StockData();  
    
    return d;  

}


int DataStorage::fetchRealTimeData(stock s){
    return 1;
}

/*std::unordered_map<int, int>**/ int generateRTData(){
    auto data = new std::unordered_map<int, int>;

    std::mt19937 gen(1337);
    std::uniform_int_distribution<> dist(1, 11);
    return (int)(dist(gen) - 5);


}



