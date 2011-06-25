#include "alpm_rb.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static VALUE get_db_path(VALUE self)
{
  VALUE p;
  const char *path;
  alpm_initialize();
  path = alpm_option_get_dbpath();
  assert(path!=NULL);
  return rb_str_new2(path);
}

static VALUE set_db_path(VALUE self, VALUE path)
{
  const char *str = strdup(StringValuePtr(path));
  //  alpm_initialize();
  alpm_option_set_dbpath(str);
  return self;
}

static VALUE t_init(VALUE self)
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

  rb_define_method(klass, "new", t_init, 0);
  rb_define_method(klass, "db_path", get_db_path, 0);
  rb_define_method(klass, "db_path=", set_db_path, 1);
}
