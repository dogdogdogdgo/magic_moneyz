#pragma once

#include <iostream>
#include <unordered_map>


namespace data
{
    enum stock {
        volvo_b, atlas_copco, flat_clap, evolution 
    };

    struct StockData {
        //for matching time and course of a stock
        std::unordered_map<int, int>* foo;
        
        //patterns?
        //högsta innom olika tidsramar
        //lägsta innom olika tidsramar
    };

    class DataStorage
    {
        public:
            void setBalance(int);
            DataStorage();
            //tanken är att getData kallas en gång först, samt sedan
            //varje minut/sekund eller vad det blir kallas fetchRealTimeData 
            //för att uppdatera grafen kontinuerligt
            StockData* getData(stock);
            int fetchRealTimeData(stock);//vilken datatyp?


        private:
            std::unordered_map<int, int>* generateRTData();
            int balance;
            
            
    };
    
}