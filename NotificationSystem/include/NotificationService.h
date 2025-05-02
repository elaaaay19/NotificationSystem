#pragma once
#include <vector>
#include <memory>
#include "INotification.h"

class NotificationService {
    std::vector<std::shared_ptr<INotification>> notifiers;
public:
    void addNotifier(const std::shared_ptr<INotification>& notifier);
    void broadcast(const std::string& message);
    size_t countNotifiers() const;
};