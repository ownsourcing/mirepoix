Feature: Local resource listings
  In order to find local health resources
  As a user
  I can refer to the "On-campus resources" listings

@anon @licensee @localresources
Scenario: see the "On-campus resources" menu item
  Given I am on the homepage
  Then I see the text "On-campus resources"

@anon @licensee @localresources
Scenario: navigate to "On-campus resources" listings
  Given I am on the homepage
  When I click "On-campus resources"
  Then the "H1" element should contain "On-campus resources"
