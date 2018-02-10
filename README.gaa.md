## install gaa_mirepoix

@todo - review drupal-specific writeup of composer vs drush make

$ composer create-project drupal-composer/drupal-project:7.x-dev gaa_mirepoix --stability dev --no-interaction

$ composer require drupal/drupal-extension:^3.4 drupal/entityreference:^1.5 drupal/features:^2.10 drupal/node_export:^3.1 drupal/url:^1.0 drupal/strongarm

create db
run installer
e.g.
- @ui {{ site }}/install.php
- @cli $ drush si profile minimal --db-url=mysql://root@127.0.0.1:8888/gaamirepoix

$ drush en gaa_reused_field_bases
local_resource_listings
----
ctools, entity, entityreference, features, field_ui, list, menu, node_export, node_export_dependency, node_export_features, node_export_features_ui, number, options, path, strongarm, url, uuid

$ drush en {{ features that are not in install profile }}
local_resource_listings gaa_reused_field_bases
