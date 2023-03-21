#ifndef MAIN_H
#define MAIN_H

#define SUM(x, y) ((x) + (y));
#define sum(a, b) \
    ({ int res = 0;    \
       res += (a + b); \
       (res ? res : 0) })



#endif
