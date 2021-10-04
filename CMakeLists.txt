cmake_minimum_required(VERSION 3.20)
project(arjan_strategy)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

# plain approach
add_library(support_ticket INTERFACE include/support_ticket.h)
add_library(customer_support_plain INTERFACE include/customer_support_plain.h)

add_executable(plain_approach src/plain_approach.cpp)
target_link_libraries(plain_approach customer_support_plain)

# abstract approach
add_library(ticket_ordering_strategy INTERFACE include/ticket_ordering_strategy.h)
add_library(ordering_strategies_inheritance INTERFACE include/ordering_strategies_inheritance.h)
add_library(customer_support_abstract INTERFACE include/customer_support_inheritance.h)

add_executable(strategy_inheritance src/strategy_inheritance.cpp)
target_link_libraries(strategy_inheritance customer_support_abstract)

# functor approach
add_library(ordering_strategies_functors INTERFACE include/ordering_strategies_functors.h)
add_library(customer_support_functor INTERFACE include/customer_support_functor.h)

add_executable(strategy_functor src/strategy_functor.cpp)
target_link_libraries(strategy_functor customer_support_functor)

# lambda approach
add_library(customer_support_lambda INTERFACE include/customer_support_lambda.h)

add_executable(strategy_lambda src/strategy_lambda.cpp)
target_link_libraries(strategy_lambda customer_support_lambda)