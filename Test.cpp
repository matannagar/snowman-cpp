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
    
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
    CHECK(snowman(11214411) == string("       \n _===_ \n (. .) \n ( : ) \n ( : ) "   ));
    CHECK(snowman(11114421) == string("       \n _===_ \n (.,.) \n (] [) \n ( : ) "   ));
    CHECK(snowman(11114431) == string("       \n _===_ \n (.,.) \n (> <) \n ( : ) "   ));
    CHECK(snowman(11114441) == string("       \n _===_ \n (.,.) \n (   ) \n ( : ) "   ));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "   ));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "   ));
    CHECK(snowman(12341234) == string("       \n _===_ \n (o,O) \n<(> <)/\n (   ) "   ));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "   ));
    CHECK(snowman(21212121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "   ));
    CHECK(snowman(33334444) == string("   _   \n  /_\\  \n (O_O) \n (   ) \n (   ) "  ));
    CHECK(snowman(12341221) == string("       \n _===_ \n (o,O) \n<(] [])/\n ( : ) "  ));
    CHECK(snowman(21212121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "   ));
    CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O)\n (] [)>\n (   )\n" ));
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
    CHECK(snowman(12121444) == string("       \n _===_ \n (..o) \n (   ) \n (\" \") " ));
    CHECK(snowman(43223343) == string("  ___  \n (_*_) \n (o_o) \n/(   ) \\\n (___) " ));
    CHECK(snowman(33224442) == string("   _   \n  /_\\  \n (o_o) \n (   ) \n (\" \") "));
    CHECK(snowman(21232224) == string("  ___  \n ..... \n\\(o,O)/\n (] [) \n (   ) "  ));
    CHECK(snowman(43443342) == string("  ___  \n (_*_) \n (-_-) \n/(   )\\\n (\" \") "));
    
    
}

TEST_CASE("Illegal Digits") {
    CHECK_THROWS(snowman(55555555)); // digits are too big
    CHECK_THROWS(snowman(12341235));
    CHECK_THROWS(snowman(01231234));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(00000000)); //no zeros allowd

    /* Add more checks here */
}
TEST_CASE("Number of digits") {
    CHECK_THROWS(snowman(123412344)); //too many arguments
    CHECK_THROWS(snowman(1234123)); //too few arguments
    CHECK_THROWS(snowman(123412));//too few arguments
    CHECK_THROWS(snowman(12341));//too few arguments
    CHECK_THROWS(snowman(1234));//too few arguments
    CHECK_THROWS(snowman(123));//too few arguments
    CHECK_THROWS(snowman(12));//too few arguments
    CHECK_THROWS(snowman(1));//too few arguments
}
