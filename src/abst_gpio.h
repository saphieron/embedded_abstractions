
#ifndef ABST_GPIO_H
#define ABST_GPIO_H

#include "abst_types.h"

#include <stdbool.h>
#include <stdint.h>

typedef struct {
    //nothing yet, might keep callback list 
} abst_gpio_t;

bool abst_gpio_get(void* port, uint32_t pin);
void abst_gpio_set(void* port, uint32_t pin, bool pinstate);


#endif // ABST_GPIO_H
