cmake_minimum_required(VERSION 3.20)
project(arjan_strategy)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

# plain approach
add_library(support_ticket INTERFACE include/support_ticket.h)
add_library(customer_support_dumb INTERFACE include/customer_support_dumb.h)

add_executable(plain_approach src/plain_approach.cpp)
target_link_libraries(plain_approach customer_support_dumb)

# abstract approach
add_library(ticket_ordering_strategy INTERFACE include/ticket_ordering_strategy.h)
add_library(ordering_strategies_inheritance INTERFACE include/ordering_strategies_inheritance.h)
add_library(customer_support_abstract INTERFACE include/customer_support_inheritance.h)

add_executable(strategy_inheritance src/strategy_inheritance.cpp)
target_link_libraries(strategy_inheritance customer_support_abstract)

# functor approach
add_library(ordering_strategies_functors INTERFACE include/ordering_strategies_functors.h)
add_library(customer_support_abstract_functor INTERFACE include/customer_support_abstract_functor.h)

add_executable(strategy_abstract_functor src/strategy_abstract_functor.cpp)
target_link_libraries(strategy_abstract_functor customer_support_abstract_functor)