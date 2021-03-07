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

TEST_CASE("Verify Digit by part") {
    //HAT
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(21111111) == string("  ___  \n ..... \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(31111111) == string("   _   \n  /_\\  \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(41111111) == string("  ___  \n (_*_) \n (.,.) \n<( : )>\n ( : ) "   ));
    //NOSE
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(12111111) == string("       \n _===_ \n (...) \n<( : )>\n ( : ) "   ));
CHECK(snowman(13111111) == string("       \n _===_ \n (._.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(14111111) == string("       \n _===_ \n (. .) \n<( : )>\n ( : ) "   ));
    //Left Eye
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11211111) == string("       \n _===_ \n (o,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11311111) == string("       \n _===_ \n (O,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11411111) == string("       \n _===_ \n (-,.) \n<( : )>\n ( : ) "   ));
    //Right Eye
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11121111) == string("       \n _===_ \n (.,o) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11131111) == string("       \n _===_ \n (.,O) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11141111) == string("       \n _===_ \n (.,-) \n<( : )>\n ( : ) "   ));
    //Left Arm
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11112111) == string("       \n _===_ \n (.,.) \n\( : )>\n ( : ) "   ));
CHECK(snowman(11113111) == string("       \n _===_ \n (.,.) \n/( : )>\n ( : ) "   ));
CHECK(snowman(11114111) == string("       \n _===_ \n (.,.) \n ( : )>\n ( : ) "   ));
    //Right Arm
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11111211) == string("       \n _===_ \n (.,.) \n<( : )/\n ( : ) "   ));
CHECK(snowman(11111311) == string("       \n _===_ \n (.,.) \n<( : )\\n ( : ) "   ));
CHECK(snowman(11111411) == string("       \n _===_ \n (.,.) \n<( : ) \n ( : ) "   ));
    //TORSO
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11111121) == string("       \n _===_ \n (.,.) \n<( : )>\n (] [) "   ));
CHECK(snowman(11111131) == string("       \n _===_ \n (.,.) \n<( : )>\n (> <) "   ));
CHECK(snowman(11111141) == string("       \n _===_ \n (.,.) \n<( : )>\n (   ) "   ));
    //BASE
CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "   ));
CHECK(snowman(11111112) == string("       \n _===_ \n (.,.) \n<( : )>\n (" ") "   ));
CHECK(snowman(11111113) == string("       \n _===_ \n (.,.) \n<( : )>\n (___) "   ));
CHECK(snowman(11111114) == string("       \n _===_ \n (.,.) \n<( : )>\n (   ) "   ));

}

TEST_CASE("Illegal Digits") {
    CHECK_THROWS(snowman(55555555)); // digits are too big
    CHECK_THROWS(snowman(12341235));
    CHECK_THROWS(snowman(01231234));
    CHECK_THROWS(snowman(-11111111)); //negative values
    CHECK_THROWS(snowman(00000000)); //no zeros allowd

    //Illegal digit at every spot
    CHECK_THROWS(snowman(01111111)); //no zeros allowd
    CHECK_THROWS(snowman(10111111)); //no zeros allowd
    CHECK_THROWS(snowman(11011111)); //no zeros allowd
    CHECK_THROWS(snowman(11101111)); //no zeros allowd
    CHECK_THROWS(snowman(11110111)); //no zeros allowd
    CHECK_THROWS(snowman(11111011)); //no zeros allowd
    CHECK_THROWS(snowman(11111101)); //no zeros allowd
    CHECK_THROWS(snowman(11111110)); //no zeros allowd

    //Illegal input
    CHECK_THROWS(snowman(a1111111)); //no letters allowd
    CHECK_THROWS(snowman(1a111111)); //no letters allowd
    CHECK_THROWS(snowman(11a11111)); //no letters allowd
    CHECK_THROWS(snowman(111a1111)); //no letters allowd
    CHECK_THROWS(snowman(1111a111)); //no letters allowd
    CHECK_THROWS(snowman(11111a11)); //no letters allowd
    CHECK_THROWS(snowman(111111a1)); //no letters allowd
    CHECK_THROWS(snowman(1111111a)); //no letters allowd
    

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
