# Strategy Pattern example

This approach comes in handy when we build a structure, and we could have several options for implementing a specific procedure. The example is a fictional customer support ticketing system. What does this mean? We have a system where customers report problems. We create a list of the support requests, and we need to server through our support team. How do we serve them? Well, we could follow a FIFO (First In, First Out) approach, or a FILO (First In, Last Out) approach or a random one (although, it doesn't make sense).  At this point, we have different options to serve the request, and we like to build a flexible structure to achieve that. A structure that is easy to change and adapt to new options without the need of rebuilding from scratch.

In the repo you will find:
- the plain non-optimised approach
- the strategy implementation using an interface and inheritance
- the strategy implementation using functors
- the strategy implementation using lambdas