#pragma once
#include "INotification.h"

class SMSNotifier : public INotification {
    std::string lastMessage;
public:
    void send(const std::string& msg) override;
    std::string getType() const override;
    std::string getLastMessage() const override;
};