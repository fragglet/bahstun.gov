<?php
/**
 * @file
 * Contains ContextsTrait trait.
 */

namespace Bahstun\Contexts;

use Behat\Behat\Hook\Scope\BeforeScenarioScope;


/**
 * Trait ContextsTrait provides methods for retrieving Behat contexts.
 *
 * @package Bahstun\Contexts
 */
trait ContextsTrait {

  /**
   * Collection of active scenario contexts.
   *
   * @var array
   */
  protected $contexts;

  /**
   * The environment provided by the scenario.
   *
   * @var \Behat\Testwork\Environment\Environment
   */
  protected $environment;

  /**
   * Set the contexts.
   *
   * @param array $contexts
   *   The contexts that should be available.
   */
  public function setContexts($contexts) {
    $this->contexts = $contexts;
  }

  /**
   * Save the environment!
   *
   * @BeforeScenario
   */
  public function getEnvironment(BeforeScenarioScope $scope) {
    $this->environment = $scope->getEnvironment();
  }

  /**
   * Return the loaded DrupalContext.
   *
   * @return \Drupal\DrupalExtension\Context\DrupalContext
   *   The loaded DrupalContext.
   */
  protected function getDrupalContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Drupal\DrupalExtension\Context\DrupalContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Drupal\DrupalExtension\Context\DrupalContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

  /**
   * Return the loaded ComponentContext.
   *
   * @return \Bahstun\Contexts\ComponentContext
   *   The loaded ComponentContext.
   */
  protected function getComponentContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Bahstun\Contexts\ComponentContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Bahstun\Contexts\ComponentContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

  /**
   * Return the loaded FeatureContext.
   *
   * @return \Bahstun\Contexts\FeatureContext
   *   The loaded FeatureContext.
   */
  protected function getFeatureContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Bahstun\Contexts\FeatureContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Bahstun\Contexts\FeatureContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

  /**
   * Return the loaded RoleContext.
   *
   * @return \Bahstun\Contexts\RoleContext
   *   The loaded RoleContext.
   */
  protected function getRoleContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Bahstun\Contexts\RoleContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Bahstun\Contexts\RoleContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

  /**
   * Return the loaded WorkflowContext.
   *
   * @return \Bahstun\Contexts\WorkflowContext
   *   The loaded WorkflowContext.
   */
  protected function getWorkflowContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Bahstun\Contexts\WorkflowContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Bahstun\Contexts\WorkflowContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

  /**
   * Return the loaded FieldContext.
   *
   * @return \Bahstun\Contexts\FieldContext
   *   The loaded FieldContext.
   */
  protected function getFieldContext() {
    if (!empty($this->environment)) {
      return $this->environment->getContext('Bahstun\Contexts\FieldContext');
    }
    else {
      foreach ($this->contexts as $c) {
        if ($c instanceof \Bahstun\Contexts\FieldContext) {
          return $c;
        }
      }
    }
    return FALSE;
  }

}
