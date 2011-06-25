require File.expand_path('../helper.rb', __FILE__)

class TestAlpmRb < Test::Unit::TestCase
  def test_instantiation
    assert defined?(Alpm::Alpm)
  end

  def test_types
    assert_kind_of Class, Alpm::Alpm
  end

  def test_respond_to_methods
    assert_respond_to Alpm::Alpm, :new
    assert_respond_to klass, :new
    assert_respond_to klass.new, 'db_path'
    assert_respond_to klass.new, 'db_path='
  end

  def test_set_db_path
    c = klass.new
    db_path = "/home/chris/Projects/alpm_ruby/test/fixtures/db/local/"
    c.db_path=(db_path)
#    assert_kind_of String, c.db_path
#    assert_equal(db_path, c.db_path)
  end

  def test_dbpath_returns_path_to_db_root
  end

  protected
    def klass
      Alpm::Alpm
    end
end
