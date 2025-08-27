#pragma once
#include "data_storage.hpp"

namespace gatway
{
    class TradingGatway
    {
        public:
            void fetchBalance();
            bool placeOrder();

            

        private:
        data::DataStorage* dataObj;

        TradingGatway(data::DataStorage* dataObj){
            this->dataObj = dataObj;

        }
    };
}