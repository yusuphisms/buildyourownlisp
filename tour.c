//
// Created by Mkuki on 3/9/24.
//
#include "stdio.h"

double testing(float f, double d) {
    if (f >= 1.0) {
        puts("F is at least 1");
    }

    if (d <= 10) {
        puts("D is 10 or smaller");
    } else {
        puts("D is greater than 10");
    }

    int e = 0;
    while (e < d) {
        puts("Warming up");
        e += 1;
    }

    for (int g = 0; g < e; g++ ) {
        puts("Cooling down");
    }

    return f + d;
}

typedef struct {
    float x;
    float y;
} point;

point make_point() {
    point p;
    p.x = 1.0f;
    p.y = 11.0f;
    return p;
}

void bonus_hello_world() {
    int i = 0; // interesting -- default value without setting it to 0 is "garbage value" / undefined ; but the program still kinda runs
    // https://stackoverflow.com/a/28166230
    // anyways, moral of the story is probably to just define it
    while (i < 5) {
        puts("While: Hello, world!");
        i++;
    }

    for (int j = 0; j < 5; j++) {
        puts("For: Hello, world!");
    }
}

void just_do_it() {
    int x = 0;
    do {
        puts("Nike");
        x++;
    } while (x < 10);
}

void adele(int n) {
    int m = n;
    while (m > 0) {
        puts("Hello, it's me");
        m--;
    }
}

void switch_the_style_up(int s) {
    switch (s) {
        case 0:
            puts("It's a 0");
            break;
        case 1:
            puts("It's a 1");
            break;
        default:
            puts("It's something greater than ourselves");
            break;
    }
}
int main(int argc, char** argv) {
    puts("0");
    int x = 1;
    float y = 1.0f;
    float z = x + y;
    double w = 2.0;
    bonus_hello_world();
    adele(5);
    just_do_it();
    switch_the_style_up(2);
    point p = make_point();
    return testing(p.x, p.y);
}