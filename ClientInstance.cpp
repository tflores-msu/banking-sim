//
// Created by ethan on 4/26/2019.
//

#include "ClientInstance.h"

csc232::ClientInstance::ClientInstance(int time, int length) :
    arrivalTime{time}, transactionLength{length} {}

int csc232::ClientInstance::getArrivalTime() const {
    return arrivalTime;
}
int csc232::ClientInstance::getTransactionLength() const {
    return transactionLength;
}