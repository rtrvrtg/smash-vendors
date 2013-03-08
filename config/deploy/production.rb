server 'linode.smash.org.au', :app, :web, :primary => true
set :deploy_to, '/var/www/smash.org.au/vendors'
set :db_name,     "vendors_production"
set :url,         "http://vendors.smash.org.au"