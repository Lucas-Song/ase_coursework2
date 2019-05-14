#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE ExactArithmeticTest

#include <boost\test\included\unit_test.hpp>
#include "..\headers\rational.h"

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(add)
{
	Rational x = Rational(3, 5);
	Rational y = Rational(1, 5);
	BOOST_CHECK_EQUAL(x + y, Rational(4, 5));
}

BOOST_AUTO_TEST_CASE(minus)
{
	Rational x = Rational(3, 5);
	Rational y = Rational(1, 5);
	BOOST_CHECK_EQUAL(x - y, Rational(2, 5));
}

BOOST_AUTO_TEST_CASE(multiply)
{
	Rational x = Rational(3, 5);
	Rational y = Rational(2, 7);
	BOOST_CHECK_EQUAL(x * y, Rational(6, 35));
}

BOOST_AUTO_TEST_CASE(divide)
{
	Rational x = Rational(5, 8);
	Rational y = Rational(3, 4);
	BOOST_CHECK_EQUAL(x / y, Rational(5, 6));
}