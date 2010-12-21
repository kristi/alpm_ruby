#include "alpm_ruby.h"

VALUE mAlpmRuby;
void Init_alpm_ruby(){
  mAlpmRuby = rb_define_module("AlpmRuby");

  init_alpm_list();
  init_alpm_db();
  init_alpm_ruby();
}
