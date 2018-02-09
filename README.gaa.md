## install gaa_mirepoix

@todo - review drupal-specific writeup of composer vs drush make

$ composer create-project drupal-composer/drupal-project:7.x-dev gaa_mirepoix --stability dev --no-interaction

$ composer require drupal/drupal-extension:^3.4 drupal/entityreference:^1.5 drupal/features:^2.10 drupal/node_export:^3.1 drupal/url:^1.0

run {{ site }}/install.php

$ drush en entityreference features node_export url

$ drush en {{ features that are not in install profile }}
