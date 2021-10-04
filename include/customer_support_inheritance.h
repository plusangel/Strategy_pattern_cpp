//
// Created by bender on 29/09/2021.
//

#ifndef ARJAN_STRATEGY__CUSTOMER_SUPPORT_ABSTRACT_H_
#define ARJAN_STRATEGY__CUSTOMER_SUPPORT_ABSTRACT_H_
#include "support_ticket.h"
#include "ticket_ordering_strategy.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using ptrVectorSupportTicket = std::shared_ptr<std::vector<SupportTicket>>;

class CustomerSupportInheritance {
 public:
  explicit CustomerSupportInheritance(TicketOrderingStrategy& processing_strategy) : processing_strategy_{processing_strategy} {
    tickets_ = std::make_shared<std::vector<SupportTicket>>();
  }

  void CreateTickets(const std::string &customer, const std::string &issue) {
    tickets_->push_back(SupportTicket(customer, issue));
  }

  void ProcessTickets() {
    if (tickets_->empty()) {
      std::cout << "There are no tickets to process. Well done!" << std::endl;
    }

    processing_strategy_.CreateOrdering(tickets_);

    for (auto &ticket : *tickets_) {
      std::cout << ticket << std::endl;
    }
  }

 private:
  TicketOrderingStrategy& processing_strategy_;
  ptrVectorSupportTicket tickets_;
};

#endif//ARJAN_STRATEGY__CUSTOMER_ABSTRACT_SUPPORT_H_
