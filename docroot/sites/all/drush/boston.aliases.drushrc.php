<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment ci
$aliases['ci'] = array(
  'root' => '/var/www/html/bahstun.ci/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'ci',
  'ac-realm' => 'prod',
  'uri' => 'bahstunci.prod.acquia-sites.com',
  'remote-host' => 'staging-15139.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.ci',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['ci.livedev'] = array(
  'parent' => '@bahstun.ci',
  'root' => '/mnt/gfs/bahstun.ci/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment dev
$aliases['dev'] = array(
  'root' => '/var/www/html/bahstun.dev/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'dev',
  'ac-realm' => 'prod',
  'uri' => 'bahstundev.prod.acquia-sites.com',
  'remote-host' => 'staging-15139.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.dev',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['dev.livedev'] = array(
  'parent' => '@bahstun.dev',
  'root' => '/mnt/gfs/bahstun.dev/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment prod
$aliases['prod'] = array(
  'root' => '/var/www/html/bahstun.prod/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'prod',
  'ac-realm' => 'prod',
  'uri' => 'bahstun.prod.acquia-sites.com',
  'remote-host' => 'web-15135.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.prod',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['prod.livedev'] = array(
  'parent' => '@bahstun.prod',
  'root' => '/mnt/gfs/bahstun.prod/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment ra
$aliases['ra'] = array(
  'root' => '/var/www/html/bahstun.ra/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'ra',
  'ac-realm' => 'prod',
  'uri' => 'bahstunra.prod.acquia-sites.com',
  'remote-host' => 'staging-14794.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.ra',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['ra.livedev'] = array(
  'parent' => '@bahstun.ra',
  'root' => '/mnt/gfs/bahstun.ra/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment test
$aliases['test'] = array(
  'root' => '/var/www/html/bahstun.test/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'test',
  'ac-realm' => 'prod',
  'uri' => 'bahstunstg.prod.acquia-sites.com',
  'remote-host' => 'staging-15139.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.test',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['test.livedev'] = array(
  'parent' => '@bahstun.test',
  'root' => '/mnt/gfs/bahstun.test/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site bahstun, environment uat
$aliases['uat'] = array(
  'root' => '/var/www/html/bahstun.uat/docroot',
  'ac-site' => 'bahstun',
  'ac-env' => 'uat',
  'ac-realm' => 'prod',
  'uri' => 'bahstunuat.prod.acquia-sites.com',
  'remote-host' => 'staging-15139.prod.hosting.acquia.com',
  'remote-user' => 'bahstun.uat',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['uat.livedev'] = array(
  'parent' => '@bahstun.uat',
  'root' => '/mnt/gfs/bahstun.uat/livedev/docroot',
);
