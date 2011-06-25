require File.expand_path('../helper.rb', __FILE__)

class TestAlpmRuby < Test::Unit::TestCase
  def test_instantiation
    assert defined?(Alpm)
  end

  def test_types
    assert_kind_of Module, Alpm
  end
end
