<?php

/**
 * Implementation of hook_user_default_profile_fields().
 */
function gestioncoop_profiles_user_default_profile_fields() {
  $profile_fields = array();

  $profile_fields['profile_capitalsuscripto'] = array(
  'title' => 'Capital suscripto',
  'name' => 'profile_capitalsuscripto',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_coop'] = array(
  'title' => 'Cargo en la Cooperativa',
  'name' => 'profile_coop',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-7',
  'required' => '1',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_cuit'] = array(
  'title' => 'CUIT',
  'name' => 'profile_cuit',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_date'] = array(
  'title' => 'Fecha de nacimiento',
  'name' => 'profile_date',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'date',
  'weight' => '-8',
  'required' => '1',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_dni'] = array(
  'title' => 'DNI',
  'name' => 'profile_dni',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_domicilio'] = array(
  'title' => 'Domicilio',
  'name' => 'profile_domicilio',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_fechaingreso'] = array(
  'title' => 'Fecha de Ingreso',
  'name' => 'profile_fechaingreso',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'date',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_lastname'] = array(
  'title' => 'Apellido',
  'name' => 'profile_lastname',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-9',
  'required' => '1',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_name'] = array(
  'title' => 'Nombre',
  'name' => 'profile_name',
  'explanation' => '<br />
',
  'category' => 'Información Personal',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-10',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
return $profile_fields;
}
