#include "alpm_list_ruby.h"

static VALUE t_init(VALUE self, VALUE tree)
{
  printf("initialized");
  return self;
}

//void Init_alpm_list(){
//  rb_define_method(alpm_list, "initialize", t_init, 1);
//}

void init_alpm_list()
{
  alpm_list = rb_define_class_under(alpm_ruby, "AlpmList", rb_cObject);

  rb_define_singleton_method(alpm_list, "new", t_init, 2);
}
