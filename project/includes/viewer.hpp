#pragma once

#include "data_storage.hpp"

namespace view {
    class Viewer {
        public:
            Viewer(data::DataStorage*);
            void show();
            void updateData();
            

        private:
            data::DataStorage* dataObj;

        
        


    };
}