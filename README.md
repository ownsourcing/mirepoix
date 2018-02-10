## install mirepoix for Drupal 7

$ composer create-project drupal-composer/drupal-project:7.x-dev mirepoix --stability dev --no-interaction

$ composer require drupal/drupal-extension:^3.4 drupal/entityreference:^1.5 drupal/features:^2.10 drupal/node_export:^3.1 drupal/url:^1.0

install site with minimal profile

$ drush en entityreference features node_export url

$ drush en {{ features that are not in install profile }}
