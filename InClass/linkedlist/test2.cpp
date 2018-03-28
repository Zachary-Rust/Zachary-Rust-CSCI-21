/*
 * Name        : test2.cpp
 * Author      : Zachary Rust
 * Description : Unit test to test Linked List Functionality
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "node.h"
#include <cstddef>

TEST_CASE("Start")
{
    //Create a list of 2 nodes
    Node node, node2;
    node.set_next_node(node2);
    
    SECTION("Check Pointer to next is null.")
    {
        CHECK(node.next_node() == NULL);
    }
    
    SECTION("Check print")
    {
        CHECK(node.Print)
    }
}