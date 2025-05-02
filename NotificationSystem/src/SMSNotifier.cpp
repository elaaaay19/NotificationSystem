#include "SMSNotifier.h"
#include <iostream>

void SMSNotifier::send(const std::string& msg) {
    lastMessage = msg;
    std::cout << "Sending SMS: " << msg << std::endl;
}

std::string SMSNotifier::getType() const { 
    return "SMS"; 
}

std::string SMSNotifier::getLastMessage() const { 
    return lastMessage; 
}