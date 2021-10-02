//
// Created by bender on 01/10/2021.
//

#ifndef ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_FUNCTOR_H_
#define ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_FUNCTOR_H_
#include "support_ticket.h"

#include <vector>

using vectorSupportTicket = std::vector<SupportTicket>;

class TicketOrderingStrategyFunctor {
 public:
  virtual void operator()(vectorSupportTicket &list) = 0;
};

#endif//ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_FUNCTOR_H_
