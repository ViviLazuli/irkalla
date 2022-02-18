/* irkalla.cpp */

#include "irkalla.h"

void Irkalla::add(int p_value) {
    count += p_value;
}

void Irkalla::reset() {
    count = 0;
}

int Irkalla::get_total() const {
    return count;
}

void Irkalla::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &Irkalla::add);
    ClassDB::bind_method(D_METHOD("reset"), &Irkalla::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Irkalla::get_total);
}

Irkalla::Irkalla() {
    count = 0;
}