#include <memory>
#include "NotificationService.h"
#include "EmailNotifier.h"
#include "SMSNotifier.h"
#include "INotification.h"

int main() {
    NotificationService service;
    service.addNotifier(std::make_shared<EmailNotifier>());
    service.addNotifier(std::make_shared<SMSNotifier>());

    service.broadcast("Server maintenance at 3AM");
    service.broadcast("New update available");

    return 0;
}