require File.expand_path('../helper.rb', __FILE__)

class TestAlpmRuby < Test::Unit::TestCase
  def test_instantiation
    assert defined?(Alpm)
    assert defined?(Alpm::Alpm)
  end

  def test_types
    assert_kind_of Module, Alpm
    assert_kind_of Class, Alpm::Alpm
  end

  def test_respond_to_methods
    assert_respond_to Alpm::Alpm, :new
  end
end
