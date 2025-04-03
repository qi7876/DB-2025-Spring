#include "../catch.hpp"
#include <db/example.h>

using namespace db;

TEST_CASE("db/example.h")
{
	SECTION("add")
	{
		REQUIRE(add(1, 2) == 3);
		REQUIRE(add(2, 3) == 5);
		printf("Hello, catch!\n");
	}
}