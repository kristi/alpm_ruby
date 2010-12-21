require File.expand_path('../helper.rb', __FILE__)

class TestAlpmRuby < Test::Unit::TestCase
  def test_instantiation
    assert defined?(AlpmRuby)
    assert defined?(AlpmRuby::AlpmRuby)
  end

  def test_respond_to_methods
    assert_respond_to AlpmRuby::AlpmRuby, :new
  end

  def test_method_signatures
    assert_nothing_raised do
      alpmruby.new
    end
  end

  protected
    def alpmruby
      AlpmRuby::AlpmRuby
    end
end
