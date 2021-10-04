//
// Created by bender on 01/10/2021.
//

#ifndef ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
#define ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
#include "ticket_ordering_strategy.h"
#include <algorithm>

using ptrVectorSupportTicket = std::shared_ptr<std::vector<SupportTicket>>;

class [[maybe_unused]] FIFOOrderingStrategy : public TicketOrderingStrategy {
 public:
  void CreateOrdering(ptrVectorSupportTicket list) override {
  }
};

class [[maybe_unused]] FILOOrderingStrategy : public TicketOrderingStrategy {
 public:
  void CreateOrdering(ptrVectorSupportTicket list) override {
    std::reverse(list->begin(), list->end());
  }
};

class [[maybe_unused]] RandomOrderingStrategy : public TicketOrderingStrategy {
 public:
  void CreateOrdering(ptrVectorSupportTicket list) override {
    std::random_device rd_;
    std::mt19937 g_{rd_()};
    std::shuffle(list->begin(), list->end(), g_);
  }
};

#endif//ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
