//
// Created by ethan on 4/26/2019.
//

#include "Event.h"
csc232::Event::Event(char type, int time) : eventType{type}, eventTime{time}, eventLength{0} {}

csc232::Event::Event(char type, int time, int length) : eventType{type}, eventTime{time}, eventLength{length} {}

int csc232::Event::getEventTime() const {
    return eventTime;
}
char csc232::Event::getEventType() const {
    return eventType;
}
int csc232::Event::getEventLength() const {
    return eventLength;
}

