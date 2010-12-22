#include "alpm_rb.h"

static VALUE t_init(VALUE self, VALUE i)
{
  int result=alpm_initialize();
  if(result!=0){
    printf("alpm_initialize() returned non-zero value: %d\n", result);
  }

  return self;
}

VALUE cAlpm;
void init_alpm_ruby(){
  VALUE klass = cAlpm= rb_define_class_under(mAlpm, "Alpm", rb_cObject);

  rb_define_method(klass, "new", t_init, 1);
}
