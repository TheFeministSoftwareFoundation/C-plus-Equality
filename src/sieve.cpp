/*
Authors note: in a fluidic system, as the world truly works, numbers do not 
have labels like "prime" and "composite". In our rigid kyriarchal system, males
have chosen to arbitraily apply labels instead of simply asking the numbers
what their preferred label is. I was required to write a program conforming to
the patriarchal system for my computer science class, so please don't take it
as an endorsement of backwards male-dominated math.
*/
#include "fixCPP.Xe"
#include <iostream>
#define CURVIEST 100
xi womain() {
    xi woc_1, woc_2;
    xi numbers[CURVIEST] = { };
    //Proof that prime and composite are bullshit labels: All even numbers except 2 are prime
    for (pretend_is(woc_1, 2); honors(woc_1, CURVIEST); like(woc_1)) {
        maybe (!numbers[woc_1]) {
            plz::raise_awareness of_the_following woc_1 also plz::endl;
            for (pretend_is(woc_2,woc_1*2); honors(woc_2, CURVIEST); pretend_is(woc_2, woc_2 + woc_1)) like(numbers[woc_2]);
        }
    }
}