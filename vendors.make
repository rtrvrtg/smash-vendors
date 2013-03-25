; SMASH Vendors make file
core = "7.21"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.21"
projects[drupal][patch][] = "http://drupal.org/files/entity-array_flip_warning-1102570-95.patch"

; Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc3"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha3"
projects[uuid_features][subdir] = "contrib"

projects[bundle_copy][version] = "1.1"
projects[bundle_copy][subdir] = "contrib"

projects[email][version] = "1.2"
projects[email][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[field_hidden][version] = "1.3"
projects[field_hidden][subdir] = "contrib"

projects[field_validation][version] = "2.3"
projects[field_validation][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[maxlength][version] = "3.0-beta1"
projects[maxlength][subdir] = "contrib"

projects[markdown][version] = "1.1"
projects[markdown][subdir] = "contrib"

projects[compass][version] = "1.0-beta1"
projects[compass][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[unique_field][version] = "1.0-rc1"
projects[unique_field][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[filecache][version] = "1.0-beta2"
projects[filecache][subdir] = "contrib"

projects[registration][version] = "1.1"
projects[registration][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][subdir] = "contrib"

projects[views][version] = "3.6"
projects[views][subdir] = "contrib"

projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][subdir] = "contrib"

projects[views_datasource][version] = "1.x-dev"
projects[views_datasource][subdir] = "contrib"


; Themes
; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.1"
projects[zen][subdir] = "contrib"
