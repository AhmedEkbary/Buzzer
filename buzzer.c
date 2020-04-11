/*
 * File:   buzzer.c
 * Author: ADMIN
 *
 * Created on April 10, 2020, 12:28 AM
 */


#include <xc.h>

#define Buzz 3


int main(void) {

    //DDRA --- DDRB --- DDRC --- DDRD Data Direction
    DDRA |= (1 << Buzz);

    PORTA |= (1 << Buzz);

    while (1) {

    }
}
