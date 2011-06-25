require 'rake/extensiontask'
require 'rake/testtask'

task :default => [:test]

Rake::ExtensionTask.new('alpm_ruby') do |ext|
  project_root = File.expand_path('..', __FILE__)
  ext.config_options << "--with-libalpm_path-include=#{project_root}"
    ext.lib_dir = File.join('lib', 'alpm_ruby')
end

Rake::TestTask.new do |t|
    t.libs << "test"
    t.test_files = FileList['test/test*.rb']
    t.verbose = true
end