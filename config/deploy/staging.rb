server 'linode.smash.org.au', :app, :web, :primary => true
set :deploy_to, '/var/www/staging.smash.org.au/vendors'
set :db_name,     "vendors_staging"
set :url,         "http://vendors.staging.smash.org.au"