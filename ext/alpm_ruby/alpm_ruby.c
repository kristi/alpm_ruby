#include "alpm_ruby.h"

VALUE mAlpm;
void Init_alpm_ruby(){
  mAlpm = rb_define_module("Alpm");

  //init_alpm_list();
  //init_alpm_db();
  init_alpm_ruby();
}
