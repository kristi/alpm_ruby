require File.expand_path('../helper.rb', __FILE__)

class TestAlpmList < Test::Unit::TestCase
  def test_truth
    assert true
  end

  def test_instantiation
    assert defined?(AlpmRuby)
    assert defined?(AlpmRuby::AlpmList)
  end

  def test_respond_to_methods
    assert_respond_to AlpmRuby::AlpmList, :new
  end

  def test_method_signatures
    assert_nothing_raised do
      AlpmRuby::AlpmList.new("1", "2")
    end
  end

  protected
    #def list
    #  AlpmRuby::AlpmList
    #end
end
