#pragma once
#include "data_storage.hpp"


namespace view
{
    class Viewer 
    {
        public:
        
        private:
            data::DataStorage* dataObj;

        Viewer(data::DataStorage* dataObj){
            this->dataObj = dataObj;
        }

        

    };
}