#include "alpm_ruby_ruby.h"

static VALUE t_init(VALUE self)
{
  alpm_initialize();
  return self;
}

VALUE cAlpmRuby;
void init_alpm_ruby(){
  VALUE klass = cAlpmRuby = rb_define_class_under(mAlpmRuby, "AlpmRuby", rb_cObject);

  rb_define_singleton_method(klass, "new", t_init, 0);
}
