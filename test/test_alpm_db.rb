require File.expand_path('../helper.rb', __FILE__)

class TestAlpmDb < Test::Unit::TestCase
  def test_truth
    assert true
  end

  def test_instantiation
    assert defined?(AlpmRuby)
    assert defined?(AlpmRuby::AlpmDb)
  end

  def test_respond_to_methods
    assert_respond_to AlpmRuby::AlpmDb, :new
  end

  def test_method_signatures
    assert_nothing_raised do
      db.new(@local_db1, true)
    end
  end

  def test_arguments_for_alpm_db_constructor
    assert_raise ArgumentError do
      db.new(nil, false)
    end

    assert_raise ArgumentError do
      db.new(nil, "not_boolean")
    end

    assert_raise ArgumentError do
      db.new("/path/to/db", "not_boolean")
    end
  end

  def test_db_new_returns_pmdb_object
    #assert_kind_of Pmdb, db.new(@local_db1, false) 
  end

  protected
    def db
      AlpmRuby::AlpmDb
    end
end
