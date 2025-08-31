#pragma once
#include "data_storage.hpp"

namespace strategy
{
    class OrderExecutor
    {
        
        public:
            bool evalBuyAction();
            bool evalSellAction();

        private:
            data::DataStorage* dataObj;


        OrderExecutor(data::DataStorage* dataObj){
            this->dataObj = dataObj;
        }
            
    };
}