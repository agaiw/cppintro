#include <iostream>
#include <cmath>
#include <limits>
#include <cassert>

/**
* Function:    areEqualFloats
*
* Description: Compares two float numbers. Results may be incorrect
*              in case of similar numbers depending on the value of
*              mantissa and exponent.
*              E.g. 2000.0001 and 2000.00009 will be incorrectly
*              considered equal, while 0.0001 and 0.00009
*              will be correctly identified as different values.
*
* Parameters:  a, b - float numbers to be compared
*
* Return:      true if two floats are equal, false otherwise 
**/
bool areEqualFloats(float a, float b);

int main(int argc, char* argv[]) {

  // Tests for equality
  assert(areEqualFloats(2.00001f, 2.00001f));
  assert(areEqualFloats(10.1f, 10.1f));
  assert(areEqualFloats(9.0f, 9.0f));
  assert(areEqualFloats(2000.0001f, 2000.00009f));
  assert(!areEqualFloats(-0.001f, -0.0011f));
  assert(areEqualFloats(2.34567f, 2.34567f)); 

  // Tests for inequality
  assert(!areEqualFloats(34.5f, -34.5f));
  assert(!areEqualFloats(10.1f, 12.3f));
  assert(!areEqualFloats(-0.001f, -0.0011f));
  assert(!areEqualFloats(2.3455f, 2.3456f)); 
  assert(!areEqualFloats(2000.001f, 2000.0009f));

  return 0;
}

bool areEqualFloats(float a, float b) {
  return(std::abs(a - b) < std::numeric_limits<float>::epsilon());
}
