#include "EmailNotifier.h"
#include <iostream>

void EmailNotifier::send(const std::string& msg) {
    lastMessage = msg;
    std::cout << "Sending email: " << msg << std::endl;
}

std::string EmailNotifier::getType() const { 
    return "Email"; 
}

std::string EmailNotifier::getLastMessage() const { 
    return lastMessage; 
}