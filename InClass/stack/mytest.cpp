/*
 * Name        : mytest.cpp
 * Author      : Zachary Rust
 * Description : Unit test to test Linked List Functionality
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <cstddef>
#include "stack.h"
using namespace std;

TEST_CASE("Start")
{
    //Create a stack
    Stack test;
    
    SECTION("Check empty.")
    {
        //CHECK(test.size() == 0);
        CHECK(test.empty() == true);
    }
    
    // SECTION("Check LIFO (push, pop, top).")
    // {
    //     test.push(1);
    //     test.push(2);
    //     test.push(3);
        
    //     for (int i = 3; i > 0; i--)
    //     {
    //         CHECK(test.top() == i);
    //         test.pop();
    //     }
    // }
    
    // SECTION("Check Size.")
    // {
    //     test.push(1);
    //     test.push(2);
    //     test.push(3);
        
    //     CHECK(test.size() == 3);
    // }
    
    // SECTION("Check Swap")
    // {
        
    //     test.push(1);
    //     test.push(2);
    //     test.push(3);
        
    //     stack<int>test2;
        
    //     test2.push(4);
    //     test2.push(5);
        
    //     test.swap(test2);
        
    //     CHECK(test.top() == 5);
    //     test.pop();
    //     CHECK(test.top() == 4);
    //     test.pop();
        
    //     CHECK(test2.size() == 3);
    // }
    
    // SECTION("Check Emplace.")
    // {
    //     test.emplace(500);
    //     CHECK(test.top() == 500);
    // }
}