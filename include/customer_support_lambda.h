//
// Created by bender on 29/09/2021.
//

#ifndef ARJAN_STRATEGY__CUSTOMER_SUPPORT_ABSTRACT_H_
#define ARJAN_STRATEGY__CUSTOMER_SUPPORT_ABSTRACT_H_
#include "support_ticket.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using vectorSupportTicket = std::vector<SupportTicket>;

class CustomerSupportLambda {
 public:
  explicit CustomerSupportLambda(void (*processing_strategy)(vectorSupportTicket&)) : processing_strategy_{processing_strategy} {
    tickets_ = std::vector<SupportTicket>();
  }

  void CreateTickets(const std::string &customer, const std::string &issue) {
    tickets_.push_back(SupportTicket(customer, issue));
  }

  void ProcessTickets() {
    if (tickets_.empty()) {
      std::cout << "There are no tickets to process. Well done!" << std::endl;
    }

    processing_strategy_(tickets_);

    for (auto &ticket : tickets_) {
      std::cout << ticket << std::endl;
    }
  }

 private:
  void (*processing_strategy_)(vectorSupportTicket&);
  vectorSupportTicket tickets_;
};

#endif//ARJAN_STRATEGY__CUSTOMER_ABSTRACT_SUPPORT_H_
