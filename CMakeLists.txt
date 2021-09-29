cmake_minimum_required(VERSION 3.20)
project(arjan_strategy)

set(CMAKE_CXX_STANDARD 17)

add_library(support_ticket INTERFACE support_ticket.h)
add_library(customer_support INTERFACE customer_support.h)

add_executable(plain_approach plain_approach.cpp)
