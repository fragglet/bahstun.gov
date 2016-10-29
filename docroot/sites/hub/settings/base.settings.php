<?php

/**
 * @file
 * Base settings.
 */

if (!empty($_ENV['AH_SITE_ENVIRONMENT'])) {
  switch ($_ENV['AH_SITE_ENVIRONMENT']) {
    case 'prod':
      $domain = 'hub.bahstun.gov';
      break;
    case 'test':
      $domain = 'hub-stg.bahstun.gov';
      break;
    case 'dev':
    case 'ci':
    case 'uat':
      $domain = 'hub-' . $_ENV['AH_SITE_ENVIRONMENT'] . '.bahstun.gov';
      break;
    default:
      // Dynamically set base url based on Acquia environment variable.
      $domain = $_ENV['AH_SITE_NAME'] . ".prod.acquia-sites.com";
      break;
  }
  $base_url = "https://$domain";
  $cookie_domain = ".$domain";
}
