#include "NotificationService.h"

void NotificationService::addNotifier(const std::shared_ptr<INotification>& notifier) {
    notifiers.push_back(notifier);
}

void NotificationService::broadcast(const std::string& message) {
    for (const auto& notifier : notifiers) {
        notifier->send(message);
    }
}

size_t NotificationService::countNotifiers() const { 
    return notifiers.size(); 
}