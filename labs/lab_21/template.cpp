/*
 * Name        : template.cpp
 * Author      : Zachary Rust
 * Description : Various functions using templates. Please note you can just
 *               write the definitions in here. No need for prototypes.
 */
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

#include <iostream>
using namespace std;

/*
 * Function Name: PrepareForDisplay
 * Create a string containing the contents of an array, each element separated
 * by a specified character. For example, if the array contents
 * are {1, 2, 3} and the separator character is ':', the string returned
 * will be "1:2:3". Please note the array can be of any type.
 * If the template function outputs doubles, they should be to a precision of 2.
 * @uses stringstream
 * @param T values[] - An array of any type
 * @param unsigned int size - The size of the array
 * @param char separator - The separator character to use in the returned
 *                         string. Defaults to ','
 * @return string - A string containing the contents of values separated by the
 *                  specified separator character
 */
template <typename type>
string PrepareForDisplay (type values[], unsigned int size, char separator = ',')
{
    string output;
    
    for (int i = 0; i < size; i++)
    {
        int counter = 0;
        bool start = false;
        
        for (int a = 0; a < to_string(values[i]).length(); a++)
        {
            if (to_string(values[i]).at(a) == '.')
            {
                start = true;
            }
            
            if (start)
            {
                counter++;
            }
            
            if (counter == 4)
            {
                a = to_string(values[i]).length() - 1;
            }
            else
            {
                output += to_string(values[i]).at(a);
            }
        }
        
        if (i != size - 1)
        {
            output += separator;
        }
    }
    
    return output;
}

/*
 * Function Name: HasValue
 * Test to see if an array contains a specified value.
 * @param T values -  An array of any type
 * @param unsigned int size - The size of the array
 * @param T value_to_find - The value to search for within the array
 * @return bool - true if value is found in the array, otherwise false
 */
 template <typename type>
bool HasValue(type values[], unsigned int size, type value_to_find)
{
    
    for (int i = 0; i < size; i++)
    {
        if (values[i] == value_to_find)
        {
            return true;
        }
    }
    
    return false;
}

/*
 * Function Name: ValueAt
 * Return the value from an array at a specified index.
 * @param T values -  An array of any type
 * @param unsigned int size - The size of the array
 * @param unsigned int index - The position in the array from which to return a
 *                             value
 * @param bool &error - A flag that will be set to true if index is invalid for
 *                     the array, else it will be set to false
 * @return T - The value at the specified index in the array when error is set
 *               to false. if index is invalid, returns a zero representation of
 *               the type and sets error to true. To get a zero representation
 *               you can return T()
 */
template <typename type>
type ValueAt (type values[], unsigned int size, unsigned int index, bool &error)
{
    //First check that index is valid
    if (index > size || index < 0)
    {
        error = true;
        return type();
    }
    else
    {
        return values[index];
    }
}

/*
 * Function Name: Sum
 * Return the "sum" of the values in the array. Your initial sum should be set
 * to "zero" in your algorithm. To do this use T().
 * @param T values - An array of any type
 * @param unsigned int size - The size of the array
 * @return T - The sum of the values in the array
 */
template <typename type>
type Sum(type values[], unsigned int size)
{
    type sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += values[i];
    }
    
    return sum;
}

/*
 * Function Name: SwapValues
 * Swap the positions of two values in an array. The two index values must be
 * valid for the array.
 * @param T values - An array of any type
 * @param unsigned int size - The size of the array
 * @param unsigned int index1 - The position of the first value to be swapped
 * @param unsigned int index2 - The position of the second value to be swapped
 * @return bool - true if the swap was successful, otherwise false
 */
template <typename type>
bool SwapValues (type values[], unsigned int size, unsigned int index1, unsigned int index2)
{
    //First check indicies are within range
    if (index1 < 0 || index1 > size || index2 < 0 || index2 > size)
    {
        return false;
    }
    else
    {
        type temp;
        temp = values[index1];
        values[index1] = values[index2];
        values[index2] = temp;
        return true;
    }
}