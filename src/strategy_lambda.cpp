#include "customer_support_lambda.h"

using vectorSupportTicket = std::vector<SupportTicket>;

int main() {

  //  CustomerSupportLambda fifo_customer_support{[](vectorSupportTicket &list) {}};
  //  CustomerSupportLambda lifo_customer_support{[](vectorSupportTicket &list) { std::reverse(list.begin(), list.end()); }};
  CustomerSupportLambda random_customer_support{[](vectorSupportTicket &list) {
    std::random_device rd_;
    std::mt19937 g_{rd_()};
    std::shuffle(list.begin(), list.end(), g_); }};

  random_customer_support.CreateTickets("John Smith", "My computer makes strange sounds!");
  random_customer_support.CreateTickets("Linus Sebastian", "I can't upload any videos, please help.");
  random_customer_support.CreateTickets("Arjan Egges", "VSCode doesn't automatically solve my bugs.");
  random_customer_support.ProcessTickets();

  return 0;
}
