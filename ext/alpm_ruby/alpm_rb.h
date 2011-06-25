#include "alpm_ruby.h"

extern VALUE cAlpm;

void init_alpm_ruby();
static VALUE get_db_path(VALUE);
static VALUE t_init(VALUE);
