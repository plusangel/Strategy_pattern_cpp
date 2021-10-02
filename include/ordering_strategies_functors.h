//
// Created by bender on 01/10/2021.
//

#ifndef ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_FUNCTORS_H_
#define ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_FUNCTORS_H_
#include <algorithm>
#include "ticket_ordering_strategy_functor.h"

using vectorSupportTicket = std::vector<SupportTicket>;

class [[maybe_unused]] FIFOOrderingStrategyFunctor : public TicketOrderingStrategyFunctor {
 public:
  void operator()(vectorSupportTicket &list) override {
  }
};

class [[maybe_unused]] LIFOOrderingStrategyFunctor : public TicketOrderingStrategyFunctor {
 public:
  void operator()(vectorSupportTicket &list) override {
    std::reverse(list.begin(), list.end());
  }
};

class [[maybe_unused]] RandomOrderingStrategyFunctor : public TicketOrderingStrategyFunctor {
 public:
  void operator()(vectorSupportTicket &list) override {
    std::random_device rd_;
    std::mt19937 g_{rd_()};
    std::shuffle(list.begin(), list.end(), g_);
  }
};

#endif//ARJAN_STRATEGY_INCLUDE_ORDERING_STRATEGIES_FUNCTORS_H_
