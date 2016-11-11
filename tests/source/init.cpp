#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
	float a = 3;
	float b = 4;
    
    double rv = sum(a, b);
    
	REQUIRE(rv == 7.0);
}
SCENARIO("calculator dev", "[dev]") {
	float a = 9.0;
	float b = 1;
    
    double rv = div(a, b);
    
	REQUIRE(rv == 9.0);
}
SCENARIO("calculator mult", "[mult]") {
	float a = 9.0;
	float b = 1;
    
    double rv = mult(a, b);
    
	REQUIRE(rv == 9.0);
}
SCENARIO("calculator sub", "[sub]") {
	float a = 9.0;
	float b = 1;
    
    double rv = sub(a, b);
    
	REQUIRE(rv == 8.0);
}
SCENARIO("calculator pow", "[pow]") {
	float a = 9.0;
	float b = 1;
    
    double rv = pow(a, b);
    
	REQUIRE(rv == 9.0);
}
SCENARIO("calculator sqrt", "[sqrt]") {
	float a = 9.0;
    
    double rv = squar(a);
    
	REQUIRE(rv == 3.0);
}
