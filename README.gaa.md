## install gaa_mirepoix

$ composer install

create db
run installer
e.g.
- @ui {{ site }}/install.php // select 'minimal' profile
- @cli $ drush si profile minimal --db-url=mysql://root@127.0.0.1/mirepoix

### load features separately, in this order (otherwise content does not import correctly)
$ drush en gaa_reused_field_bases
$ drush en local_resource_listings
----

$ drush en {{ features/modules not in install profile }}

ctools, entity, entityreference, features, field_ui, list, menu, node_export, node_export_dependency, node_export_features, node_export_features_ui, number, options, path, strongarm, url, uuid

## run tests

set base_url in behay.yml

## start this project from scratch

$ composer create-project drupal-composer/drupal-project:7.x-dev gaa_mirepoix --stability dev --no-interaction

$ composer require drupal/drupal-extension:^3.4 drupal/entityreference:^1.5 drupal/features:^2.10 drupal/node_export:^3.1 drupal/url:^1.0 drupal/strongarm

@todo - review drupal-specific writeup of composer vs drush make
