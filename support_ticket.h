//
// Created by bender on 24/09/2021.
//

#ifndef ARJAN_STRATEGY__SUPPORT_TICKET_H_
#define ARJAN_STRATEGY__SUPPORT_TICKET_H_
#include <random>
#include <iostream>
#include <string>
#include <utility>

class SupportTicket {
 public:
  SupportTicket(std::string customer, std::string issue) : customer_{std::move(customer)}, issue_{std::move(issue)} {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 1000.0);
    id_ = dist(mt);
  }

  friend std::ostream &operator<<(std::ostream &os, const SupportTicket &st);

 private:
  int id_;
  std::string customer_;
  std::string issue_;
};

std::ostream &operator<<(std::ostream &os, const SupportTicket &st) {
  os << "[" << st.id_ << '/' << st.customer_ << '/' << st.issue_ << "]";
  return os;
}

#endif//ARJAN_STRATEGY__SUPPORT_TICKET_H_
