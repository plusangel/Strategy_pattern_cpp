//
// Created by bender on 29/09/2021.
//

#ifndef ARJAN_STRATEGY__CUSTOMER_SUPPORT_DUMB_H_
#define ARJAN_STRATEGY__CUSTOMER_SUPPORT_DUMB_H_
#include "support_ticket.h"
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

class CustomerSupport {
 public:
  explicit CustomerSupport(std::string processing_strategy) : processing_strategy_{std::move(processing_strategy)} {
    tickets_ = std::make_unique<std::vector<SupportTicket>>();
  }

  void CreateTickets(const std::string &customer, const std::string &issue) {
    tickets_->push_back(SupportTicket(customer, issue));
  }

  void ProcessTickets() {
    if (tickets_->empty()) {
      std::cout << "There are no tickets to process. Well done!" << std::endl;
    }

    if (processing_strategy_ == "fifo") {
      for (auto &ticket : *tickets_) {
        std::cout << ticket << std::endl;
      }
    } else if (processing_strategy_ == "filo") {
      std::reverse(tickets_->begin(), tickets_->end());
      for (auto &ticket : *tickets_) {
        std::cout << ticket << std::endl;
      }
    } else if (processing_strategy_ == "random") {
      std::shuffle(tickets_->begin(), tickets_->end(), g_);
      for (auto &ticket : *tickets_) {
        std::cout << ticket << std::endl;
      }
    }
  }

 private:
  std::string processing_strategy_;
  std::unique_ptr<std::vector<SupportTicket>> tickets_;
  std::random_device rd_;
  std::mt19937 g_{rd_()};
};

#endif//ARJAN_STRATEGY__CUSTOMER_SUPPORT_DUMB_H_
