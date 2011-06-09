<?php

/**
 * Implementation of hook_user_default_roles().
 */
function gestioncoop_roles_user_default_roles() {
  $roles = array();

  // Exported role: consejo
  $roles['consejo'] = array(
    'name' => 'consejo',
  );

  return $roles;
}
