//
// Created by ethan on 4/26/2019.
//

#ifndef BANKING_SIM_CLIENTINSTANCE_H
#define BANKING_SIM_CLIENTINSTANCE_H


#include "Event.h"
namespace csc232 {

    class ClientInstance {
        private:
            int arrivalTime;
            int transactionLength;
        public:
            ClientInstance(int time, int length);
            int getArrivalTime() const;
            int getTransactionLength() const;
    };
}

#endif //BANKING_SIM_CLIENTINSTANCE_H
