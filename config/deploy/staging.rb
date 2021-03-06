server 'linode.smash.org.au', :app, :web, :primary => true
set :deploy_to, '/var/www/staging.smash.org.au/vendors'
set :db_name,     "vendors_staging"
set :url,         "http://vendors.staging.smash.org.au"

set(:releases_path)     { File.join(deploy_to, version_dir) }
set(:shared_path)       { File.join(deploy_to, shared_dir) }
set(:current_path)      { File.join(deploy_to, current_dir) }
set(:release_path)      { File.join(releases_path, release_name) }
