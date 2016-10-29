<?php

/**
 * @file
 * Theme settings for Bahstun theme.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function bahstun_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

  // Create the form using Forms API.
  $form['breadcrumb'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Breadcrumb settings'),
  );
  $form['breadcrumb']['bahstun_breadcrumb'] = array(
    '#type'          => 'select',
    '#title'         => t('Display breadcrumb'),
    '#default_value' => theme_get_setting('bahstun_breadcrumb'),
    '#options'       => array(
      'yes'   => t('Yes'),
      'admin' => t('Only in admin section'),
      'no'    => t('No'),
    ),
  );
  $form['breadcrumb']['breadcrumb_options'] = array(
    '#type' => 'container',
    '#states' => array(
      'invisible' => array(
        ':input[name="bahstun_breadcrumb"]' => array('value' => 'no'),
      ),
    ),
  );
  $form['breadcrumb']['breadcrumb_options']['bahstun_breadcrumb_separator'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Breadcrumb separator'),
    '#description'   => t('Text only. Don’t forget to include spaces.'),
    '#default_value' => theme_get_setting('bahstun_breadcrumb_separator'),
    '#size'          => 5,
    '#maxlength'     => 10,
  );
  $form['breadcrumb']['breadcrumb_options']['bahstun_breadcrumb_home'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Show home page link in breadcrumb'),
    '#default_value' => theme_get_setting('bahstun_breadcrumb_home'),
  );
  $form['breadcrumb']['breadcrumb_options']['bahstun_breadcrumb_trailing'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append a separator to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('bahstun_breadcrumb_trailing'),
    '#description'   => t('Useful when the breadcrumb is placed just before the title.'),
    '#states' => array(
      'disabled' => array(
        ':input[name="bahstun_breadcrumb_title"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['breadcrumb']['breadcrumb_options']['bahstun_breadcrumb_title'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append the content title to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('bahstun_breadcrumb_title'),
    '#description'   => t('Useful when the breadcrumb is not placed just before the title.'),
  );

  $form['support'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Accessibility and support settings'),
  );
  // Only toggle the layout for the main bahstun theme.
  if ($form['var']['#value'] == 'theme_bahstun_settings') {
    $form['support']['bahstun_layout'] = array(
      '#type'          => 'radios',
      '#title'         => t('Layout'),
      '#options'       => array(
        'bahstun-responsive-sidebars' => t('Responsive sidebar layout') . ' <small>(layouts/responsive-sidebars.css)</small>',
        'bahstun-fixed-width' => t('Fixed width layout') . ' <small>(layouts/fixed-width.css)</small>',
      ),
      '#default_value' => theme_get_setting('bahstun_layout'),
    );
  }
  $form['support']['bahstun_skip_link_anchor'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for the “skip link”'),
    '#default_value' => theme_get_setting('bahstun_skip_link_anchor'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the element that the accessible-but-hidden “skip link” should link to. Note: that element should have the <code>tabindex="-1"</code> attribute to prevent an accessibility bug in webkit browsers. (<a href="!link">Read more about skip links</a>.)', array('!link' => 'https://drupal.org/node/467976')),
  );
  $form['support']['bahstun_skip_link_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text for the “skip link”'),
    '#default_value' => theme_get_setting('bahstun_skip_link_text'),
    '#description'   => t('For example: <em>Jump to navigation</em>, <em>Skip to content</em>'),
  );
  $form['support']['bahstun_meta'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Add HTML5 and responsive scripts and meta tags to every page.'),
    '#default_value' => theme_get_setting('bahstun_meta'),
    '#options'       => array(
      'html5' => t('Add HTML5 shim JavaScript to add support to IE 6-8.'),
      'meta' => t('Add meta tags to support responsive design on mobile devices.'),
    ),
    '#description'   => t('IE 6-8 require a JavaScript polyfill solution to add basic support of HTML5. Mobile devices require a few meta tags for responsive designs.'),
  );

  $form['themedev'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Theme development settings'),
  );

}
