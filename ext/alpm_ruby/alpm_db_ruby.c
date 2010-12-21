#include "alpm_db_ruby.h"

static VALUE t_init(VALUE self, const char *tree, VALUE is_local)
{
  if((TYPE(tree))!=T_STRING) rb_raise(rb_eArgError, "Argument 1 expected to be string");
  if(((TYPE(is_local))!=T_TRUE) && ((TYPE(is_local))!=T_FALSE)){
    rb_raise(rb_eArgError, "Argument 2 expected to be boolean");
  }
  /*pmdb_t *pmdb=_alpm_db_new(tree, is_local);
  VALUE rb_pmdb;*/
  /* Paramater two will have to be corrected as soon as other ruby objects are used
   * for the pmdb_t struct */
  /*rb_pmdb=Data_Wrap_Struct(self, 0, "pmdb_free", pmdb);*/
  return self;
}

static void pmdb_free(void *p){
}

VALUE cAlpmDb;
void init_alpm_db(){
  VALUE klass = cAlpmDb = rb_define_class_under(mAlpmRuby, "AlpmDb", rb_cObject);

  rb_define_singleton_method(klass, "new", t_init, 2);
}
