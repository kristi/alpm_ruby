#include "alpm_list_ruby.h"

static VALUE t_init(VALUE self, VALUE tree)
{
  return self;
}

//void Init_alpm_list(){
//  rb_define_method(alpm_list, "initialize", t_init, 1);
//}

VALUE cAlpmList;
void init_alpm_list()
{
  VALUE klass = cAlpmList = rb_define_class_under(mAlpmRuby, "AlpmList", rb_cObject);

  rb_define_singleton_method(klass, "new", t_init, 2);
}
