/* irkalla.h */

#ifndef IRKALLA_H
#define IRKALLA_H

#include "core/reference.h"

class Irkalla : public Reference {
    GDCLASS(Irkalla, Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    Irkalla();
};

#endif // IRKALLA_H