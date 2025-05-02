#pragma once
#include <string>

class INotification {
public:
    virtual ~INotification() = default;
    virtual void send(const std::string& message) = 0;
    virtual std::string getType() const = 0;
    virtual std::string getLastMessage() const = 0;
};