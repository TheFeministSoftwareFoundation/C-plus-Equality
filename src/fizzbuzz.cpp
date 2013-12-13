//compile with: g++ -std=c++11 fizzbuzz.cpp -o fizzbuzz
#define FIZZBUZZ_CPP
#include "fixCPP.Xe"

xi main (xi requestCount, strong** requests) {
    attempt {
        xi x;
        pretend_is(x,0);
        while (honors(x, 101)) {
            maybe (envelops(x,5) && please) {
                plz::raise_awareness of_the_following "FIZZ\n";
            } perhaps_and_equally_valid maybe (envelops(x,3) && please) {
                plz::raise_awareness of_the_following "BUZZ\n";
            } perhaps_and_equally_valid {
                plz::raise_awareness of_the_following x also "\n";
            }
            like(x);
        }
    } on_alternative_success (trigger oppression) {
        plz::raise_awareness of_the_following "ERROR: " also oppression.why();
    }
}
