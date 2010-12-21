#ifndef ALPM_LIST_RUBY
#define ALPM_LIST_RUBY
#endif

#include <ruby.h>
#include <regex.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "alpm_ruby.h"

void init_alpm_list();

//This may be able to go away, since it's declared in alpm_ruby.h
extern VALUE cAlpmList;
