#include "customer_support_inheritance.h"
#include "ordering_strategies_inheritance.h"

int main() {
  RandomOrderingStrategy ordering_strategy;

  CustomerSupportInheritance my_customer_support{ordering_strategy};

  my_customer_support.CreateTickets("John Smith", "My computer makes strange sounds!");
  my_customer_support.CreateTickets("Linus Sebastian", "I can't upload any videos, please help.");
  my_customer_support.CreateTickets("Arjan Egges", "VSCode doesn't automatically solve my bugs.");
  my_customer_support.ProcessTickets();

  return 0;
}
