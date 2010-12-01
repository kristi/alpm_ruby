#include "alpm_ruby.h"

void Init_alpm_ruby(){
  alpm_ruby = rb_define_module("AlpmRuby");

  init_alpm_list();
}
