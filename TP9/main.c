/* 
 * File:   main.c
 * Author: ubuntu
 *
 * Created on May 24, 2015, 9:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
typedef union {    //la union se compone de una estructura (con los
        struct {        //puertos a y b) y con el puerto c
            int porta;
            int portb;
        }; 
        float portc;
    } PUERTO;

    PUERTO puertop;
   
    return (EXIT_SUCCESS);
}

