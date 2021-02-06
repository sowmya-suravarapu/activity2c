#include <unity.h>
#include "test_unitconv.h"
#include<unitconver.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"
#include <unity.h>
#include "test_unitconv.h"
#include<unitconver.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_temperature);
  RUN_TEST(test_time);
  RUN_TEST(test_length);
  RUN_TEST(test_weight);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_temperature(void) {
	//celcius to farenheit
  TEST_ASSERT_EQUAL(50, temperature_func(10,1));
  //farenheit to celcius
  TEST_ASSERT_EQUAL(15.55, temperature_func(60,2)); 
   
}

void test_time(void) {
	//seconds to minute
  TEST_ASSERT_EQUAL(1.5, time_func(90,1));
  
  //minute to seconds
  TEST_ASSERT_EQUAL(3900, time_func(65,2));
}

void test_length(void) {
	//inch to cm
  TEST_ASSERT_EQUAL(0, length_func(34,1));
  
  //cm to meter
  TEST_ASSERT_EQUAL(14, length_func(1400,2));
}

void test_weight(void) {
	//miligram to gram
  TEST_ASSERT_EQUAL(8.240, weight_func(8240,1));
  
  //gram to kilogram
  TEST_ASSERT_EQUAL(2.587, weight_func(2587,2));
}
/

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_temperature);
  RUN_TEST(test_time);
  RUN_TEST(test_length);
  RUN_TEST(test_weight);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_temperature(void) {
	//celcius to farenheit
  TEST_ASSERT_EQUAL(50, temperature_func(10,1));
  //farenheit to celcius
  TEST_ASSERT_EQUAL(15.55, temperature_func(60,2)); 
   
}