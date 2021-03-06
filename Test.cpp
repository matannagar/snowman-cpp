/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11214411) == string("_===_\n(o,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11334411) == string("_===_\n(O,O)\n( : )\n( : )"));
    CHECK(snowman(11444411) == string("_===_\n(-,-)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12114411) == string("_===_\n(...)\n( : )\n( : )"));
    CHECK(snowman(13114411) == string("_===_\n(._.)\n( : )\n( : )"));
    CHECK(snowman(14114411) == string("_===_\n(. .)\n( : )\n( : )"));
    CHECK(snowman(11114421) == string("_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(snowman(11114431) == string("_===_\n(.,.)\n(> <)\n( : )"));
    CHECK(snowman(11114441) == string("_===_\n(.,.)\n(   )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(snowman(12341234) == string(" === \n (o,O) \n<(> <)/\n (   ) "));
    CHECK(snowman(11111111) == string(" === \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(11114411) == string("===\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(21212121) == string("  _  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
    CHECK(snowman(33334444) == string("   \n /\\\n(O_O)\n(  )\n(   )"));
    CHECK(snowman(12341221) == string(" === \n (o,O) \n<(] [])/\n ( : ) "));
    CHECK(snowman(21212121) == string("  _  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));

    CHECK(snowman(33232124)== string("   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )\n"));
    
}

TEST_CASE("Illegal Digits") {
    CHECK(snowman(55555555)==string("Wrong Input!")); // digits are too big
    CHECK(snowman(12341235)==string("Wrong Input!"));
    CHECK(snowman(01231234)==string("Wrong Input!"));
    CHECK(snowman(-11111111)==string("Wrong Input!"));
    CHECK(snowman(00000000)==string("Wrong Input!")); //no zeros allowd

    /* Add more checks here */
}
TEST_CASE("Number of digits") {
    CHECK(snowman(123412344)==string("Wrong Input!")); //too many arguments
    CHECK(snowman(1234123)==string("Wrong Input!")); //too few arguments
    CHECK(snowman(123412)==string("Wrong Input!"));//too few arguments
    CHECK(snowman(12341)==string("Wrong Input!"));//too few arguments
    CHECK(snowman(1234)==string("Wrong Input!"));//too few arguments
    CHECK(snowman(123)==string("Wrong Input!"));//too few arguments
    CHECK(snowman(12)==string("Wrong Input!"));//too few arguments
    CHECK(snowman(1)==string("Wrong Input!"));//too few arguments
}
