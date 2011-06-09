<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function gestioncoop_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create acta_consejo content
  $permissions['create acta_consejo content'] = array(
    'name' => 'create acta_consejo content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create actividades content
  $permissions['create actividades content'] = array(
    'name' => 'create actividades content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create asamblea content
  $permissions['create asamblea content'] = array(
    'name' => 'create asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create balances_memorias content
  $permissions['create balances_memorias content'] = array(
    'name' => 'create balances_memorias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create convocatoria_asamblea content
  $permissions['create convocatoria_asamblea content'] = array(
    'name' => 'create convocatoria_asamblea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create display_chat content
  $permissions['create display_chat content'] = array(
    'name' => 'create display_chat content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create noticias content
  $permissions['create noticias content'] = array(
    'name' => 'create noticias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create simplenews content
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create story content
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any acta_consejo content
  $permissions['delete any acta_consejo content'] = array(
    'name' => 'delete any acta_consejo content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any actividades content
  $permissions['delete any actividades content'] = array(
    'name' => 'delete any actividades content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any asamblea content
  $permissions['delete any asamblea content'] = array(
    'name' => 'delete any asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any balances_memorias content
  $permissions['delete any balances_memorias content'] = array(
    'name' => 'delete any balances_memorias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any convocatoria_asamblea content
  $permissions['delete any convocatoria_asamblea content'] = array(
    'name' => 'delete any convocatoria_asamblea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any display_chat content
  $permissions['delete any display_chat content'] = array(
    'name' => 'delete any display_chat content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any noticias content
  $permissions['delete any noticias content'] = array(
    'name' => 'delete any noticias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any simplenews content
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any story content
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own acta_consejo content
  $permissions['delete own acta_consejo content'] = array(
    'name' => 'delete own acta_consejo content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own actividades content
  $permissions['delete own actividades content'] = array(
    'name' => 'delete own actividades content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own asamblea content
  $permissions['delete own asamblea content'] = array(
    'name' => 'delete own asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own balances_memorias content
  $permissions['delete own balances_memorias content'] = array(
    'name' => 'delete own balances_memorias content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own convocatoria_asamblea content
  $permissions['delete own convocatoria_asamblea content'] = array(
    'name' => 'delete own convocatoria_asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own display_chat content
  $permissions['delete own display_chat content'] = array(
    'name' => 'delete own display_chat content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own noticias content
  $permissions['delete own noticias content'] = array(
    'name' => 'delete own noticias content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own simplenews content
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own story content
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any acta_consejo content
  $permissions['edit any acta_consejo content'] = array(
    'name' => 'edit any acta_consejo content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any actividades content
  $permissions['edit any actividades content'] = array(
    'name' => 'edit any actividades content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any asamblea content
  $permissions['edit any asamblea content'] = array(
    'name' => 'edit any asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any balances_memorias content
  $permissions['edit any balances_memorias content'] = array(
    'name' => 'edit any balances_memorias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any convocatoria_asamblea content
  $permissions['edit any convocatoria_asamblea content'] = array(
    'name' => 'edit any convocatoria_asamblea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any display_chat content
  $permissions['edit any display_chat content'] = array(
    'name' => 'edit any display_chat content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any noticias content
  $permissions['edit any noticias content'] = array(
    'name' => 'edit any noticias content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any simplenews content
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any story content
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_balance
  $permissions['edit field_balance'] = array(
    'name' => 'edit field_balance',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_calendario
  $permissions['edit field_calendario'] = array(
    'name' => 'edit field_calendario',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_ciudad
  $permissions['edit field_ciudad'] = array(
    'name' => 'edit field_ciudad',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_domiciliosocial
  $permissions['edit field_domiciliosocial'] = array(
    'name' => 'edit field_domiciliosocial',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_fecha
  $permissions['edit field_fecha'] = array(
    'name' => 'edit field_fecha',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_firmantes
  $permissions['edit field_firmantes'] = array(
    'name' => 'edit field_firmantes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_image
  $permissions['edit field_image'] = array(
    'name' => 'edit field_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_memoria
  $permissions['edit field_memoria'] = array(
    'name' => 'edit field_memoria',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_presentes
  $permissions['edit field_presentes'] = array(
    'name' => 'edit field_presentes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_presidereunion
  $permissions['edit field_presidereunion'] = array(
    'name' => 'edit field_presidereunion',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_temadereunion
  $permissions['edit field_temadereunion'] = array(
    'name' => 'edit field_temadereunion',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit field_tipoasamblea
  $permissions['edit field_tipoasamblea'] = array(
    'name' => 'edit field_tipoasamblea',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'consejo',
    ),
  );

  // Exported permission: edit own acta_consejo content
  $permissions['edit own acta_consejo content'] = array(
    'name' => 'edit own acta_consejo content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own actividades content
  $permissions['edit own actividades content'] = array(
    'name' => 'edit own actividades content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own asamblea content
  $permissions['edit own asamblea content'] = array(
    'name' => 'edit own asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own balances_memorias content
  $permissions['edit own balances_memorias content'] = array(
    'name' => 'edit own balances_memorias content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own convocatoria_asamblea content
  $permissions['edit own convocatoria_asamblea content'] = array(
    'name' => 'edit own convocatoria_asamblea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own display_chat content
  $permissions['edit own display_chat content'] = array(
    'name' => 'edit own display_chat content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own noticias content
  $permissions['edit own noticias content'] = array(
    'name' => 'edit own noticias content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own simplenews content
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own story content
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
