require 'mkmf'

#$objs = ['alpm_ruby.so', 'alpm_list_ruby.so']

create_makefile("alpm_ruby/alpm_ruby")
## How do we build multiple .so files
#create_makefile("alpm_list_ruby/alpm_list_ruby")
