//
// Created by bender on 01/10/2021.
//

#ifndef ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_H_
#define ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_H_
#include "support_ticket.h"
#include <memory>
#include <vector>

using ptrVectorSupportTicket = std::shared_ptr<std::vector<SupportTicket>>;

class TicketOrderingStrategy {
 public:
  virtual void CreateOrdering(ptrVectorSupportTicket list) = 0;
};
#endif//ARJAN_STRATEGY__TICKET_ORDERING_STRATEGY_H_
