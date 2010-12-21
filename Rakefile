require 'rake/extensiontask'

Rake::ExtensionTask.new('alpm_ruby') do |ext|
  project_root = File.expand_path('..', __FILE__)
  ext.config_options << "--with-libalpm_path-include=#{project_root}"
    ext.lib_dir = File.join('lib', 'alpm_ruby')
end
