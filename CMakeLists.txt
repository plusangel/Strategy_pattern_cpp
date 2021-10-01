cmake_minimum_required(VERSION 3.20)
project(arjan_strategy)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

add_library(support_ticket INTERFACE include/support_ticket.h)
add_library(customer_support_dumb INTERFACE include/customer_support_dumb.h)
add_library(ticket_ordering_strategy INTERFACE include/ticket_ordering_strategy.h)
add_library(fifo_ordering_strategy INTERFACE include/fifo_ordering_strategy.h)
add_library(customer_support_abstract INTERFACE include/customer_support_abstract.h)

add_executable(plain_approach src/plain_approach.cpp)
target_link_libraries(plain_approach customer_support_dumb)

add_executable(strategy_abstract src/strategy_abstract.cpp)
target_link_libraries(strategy_abstract customer_support_abstract)
