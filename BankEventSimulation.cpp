//
// Created by ethan on 4/26/2019.
//

#include <iostream>
#include "BankEventSimulation.h"




BankEventSimulation::BankEventSimulation(const std::vector<csc232::ClientInstance>& v)  {

    for(const csc232::ClientInstance ci : v){
        int arrival = ci.getArrivalTime();
        std::cout << "ciArr // arrivalTime : "<< ci.getArrivalTime() << "// transactionLength : " << ci.getTransactionLength() << std::endl;
        eventQueue.push(csc232::Event{'A', ci.getArrivalTime(), ci.getTransactionLength()});
        eventQueue.push(csc232::Event{'D', ci.getArrivalTime() + ci.getTransactionLength()});
    }

}

void BankEventSimulation::runSimulation() {

    while (!eventQueue.empty()) {
        //csc232::Event e = eventQueue.top();
        if (eventQueue.top().getEventType() == 'A') {
            std::cout << "Arrival Event at " << eventQueue.top().getEventTime()<< std::endl;
            queue.push("Customer");
        } else {
            std::cout << "Departure Event at " << eventQueue.top().getEventTime()<< std::endl;
            queue.pop();
        }
        std::cout << "Bank line : ";
        for (int i{0}; i < queue.size(); i++) {
            std::cout << "Customer //";
        }
        std::cout << std::endl;
        eventQueue.pop();
        std::cout << "=================" << std::endl;


    }
//    while (!eventQueue.empty()) {
//        std::cout << eventQueue.top().getEventType() << std::endl;
//        eventQueue.pop();
//    }
}
