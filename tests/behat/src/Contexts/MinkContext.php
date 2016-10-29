<?php
/**
 * @file
 * Custom mink extension for Bahstun.gov website.
 */

namespace Bahstun\Contexts;

use Behat\Behat\Context\SnippetAcceptingContext;
use Bahstun\Utility\SpinTrait;

/**
 * Class for extending Mink within context of Bahstun.gov.
 *
 * @package Bahstun\Contexts
 */
class MinkContext extends \Drupal\DrupalExtension\Context\MinkContext implements SnippetAcceptingContext {

  use SpinTrait;

  /**
   * Select an option from a select list in a specific region.
   *
   * @Then I select :option from :select in the :region region
   */
  public function iSelectFromInTheRegion($option, $select, $region) {
    $region = $this->getRegion($region);
    $select = $this->fixStepArgument($select);
    $option = $this->fixStepArgument($option);
    $region->selectFieldOption($select, $option);
  }

}
