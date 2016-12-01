#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = sum( x, y );
    
	REQUIRE( rv ==5.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = mult( x, y );
    
	REQUIRE( rv ==4.0 );
}
SCENARIO("calculator dev", "[dev]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = *dev( x, y );
    
	REQUIRE( rv ==4.0 );
}
SCENARIO("calculator power", "[power]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = pow( x, y );
    
	REQUIRE( rv ==4.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = sub( x, y );
    
	REQUIRE( rv ==3.0 );
}
SCENARIO("calculator sq", "[sq]") {
    float x =4.0 ;
    float y =1.0 ;
    
    float rv = sq( x );
    
	REQUIRE( rv ==2.0 );
}
