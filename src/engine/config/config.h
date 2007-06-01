#ifndef _CONFIG_H
#define _CONFIG_H

struct configuration
{ 
    #define MACRO_CONFIG_INT(name,def,min,max) int name;
    #define MACRO_CONFIG_STR(name,len,def) char name[len];
    #include "config_define.h" 
    #undef MACRO_CONFIG_INT 
    #undef MACRO_CONFIG_STR 
}; 

extern configuration config;

void config_reset();
void config_load(const char *filename);

#define MACRO_CONFIG_INT(name,def,min,max) void set_ ## name (configuration *c, int val);
#define MACRO_CONFIG_STR(name,len,def) void set_ ## name (configuration *c, char *str);
#include "config_define.h"
#undef MACRO_CONFIG_INT
#undef MACRO_CONFIG_STR

#endif