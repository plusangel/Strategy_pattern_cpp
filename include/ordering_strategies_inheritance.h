//
// Created by bender on 01/10/2021.
//

#ifndef ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
#define ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
#include "ticket_ordering_strategy.h"

using ptrVectorSupportTicket = std::shared_ptr<std::vector<SupportTicket>>;

class FIFOOrderingStrategy : public TicketOrderingStrategy {
 public:
  void CreateOrdering(ptrVectorSupportTicket list) override {
  }
};
#endif//ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_INHERITANCE_H_
