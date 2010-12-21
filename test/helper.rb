require 'test/unit/testcase'
require 'test/unit'
require 'pathname'
require 'rubygems'
require 'ruby-debug'

require File.dirname(__FILE__)+'/../lib/alpm_ruby'

class Test::Unit::TestCase
  def setup
    @local_db1 = File.expand_path('../fixtures/db/local/', __FILE__)
  end
end
