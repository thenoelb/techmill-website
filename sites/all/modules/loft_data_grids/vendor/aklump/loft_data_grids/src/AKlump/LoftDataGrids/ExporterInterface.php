<?php
namespace AKlump\LoftDataGrids;

/**
 * Interface ExporterInterface
 */
interface ExporterInterface {

  /**
   * Set the exporter to display page ids.
   *
   * It's up to the class to respect this setting or not.
   *
   * @return $this
   */
  public function showPageIds();
  
  /**
   * Set the exporter to hide page ids.
   *
   * It's up to the class to respect this setting or not.
   *
   * @return $this
   */
  public function hidePageIds();


  /**
   * Return the showPageIds.
   *
   * @return bool
   */
  public function getShowPageIds();
  
  /**
   * Format a single column with format by string
   *
   * @param string $column
   * @param string $format_code
   * - USD
   *
   * @return $this
   */
  public function formatColumn($column, $format_code);

  /**
   * Set the export data object
   *
   * @param ExportDataInterface $data
   *
   * @return $this
   */
  public function setData(ExportDataInterface $data);

  /**
   * Set a title for the exported document
   *
   * @return $this
   */
  public function setTitle($title);

  public function getTitle();

  /**
   * Getter/Setter for the filename
   *
   * @param string $filename
   *   Extension (if present in $filename) will be corrected based on the object
   *
   * @return string
   *   The final $filename with correct extension
   */
  public function setFilename($filename);

  /**
   * Get the filename
   *
   * @return string
   */
  public function getFilename();

  /**
   * Build the string content of $this->output
   *
   * @param mixed $page_id
   *   (Optional) Defaults to NULL.  Set this to only compile a single page.
   */
  public function compile($page_id = NULL);

  /**
   * Export data as a string
   *
   * @param mixed $page_id
   *   (Optional) Defaults to NULL.  Set this to export a single page.
   *
   * @return string
   */
  public function export($page_id = NULL);

  /**
   * Save as a file to the server
   *
   * @param string $filename
   *   The correct extension will be appended to this string
   * @param mixed $page_id
   *   (Optional) Defaults to NULL.  Set this to export a single page.
   */
  public function save($filename = '', $page_id = NULL);

  /**
   * Return the ExportDataInterface object
   *
   * @return ExportDataInterface
   */
  public function getData();

  /**
   * Return an array containing the header row values for a page
   *
   * @param mixed $page_id
   *   (Optional) Defaults to 0.
   *
   * @return array
   * - The keys of the header MUST match the keys of each row of data
   */
  public function getHeader($page_id = 0);

  /**
   * Return info about this class
   *
   * @param type $string
   *   description
   *
   * @return array
   *   - name string The human name of this exporter
   *   - shortname string A more concise human name for ui elements like option lists
   *   - descripttion string A further description
   *   - extension string The file extension used by this class
   */
  public function getInfo();
  
  /**
   * Set the settings object.
   *
   * @param object|array $settings
   *   If an array, the keys will be used as the property name, and the
   *   values as values.
   *
   * @return $this
   */
  public function setSettings($settings);
  
  /**
   * Adds/Updates a single setting by name.
   *
   * You can also use $this->getSettings()->{name} = {value}.
   *
   * @param string $name
   * @param mixed $value
   *
   * @return $this
   */
  public function addSetting($name, $value);
  
  /**
   * Return the settings object.
   *
   * To set use $this->addSetting() or:
   * $this->getSettings()->{name} = {value}
   *
   * To get a single setting you will do this:
   * $this->getSettings()->sponsors
   *
   * @return array
   *
   * @see addSetting($name, $value) 
   */
  public function getSettings();
  

}