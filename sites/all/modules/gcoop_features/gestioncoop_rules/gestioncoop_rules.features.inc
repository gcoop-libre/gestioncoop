<?php

/**
 * Implementation of hook_rules_defaults().
 */
function gestioncoop_rules_rules_defaults() {
  return array(
    'rules' => array(
      'rules_1' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'Envio correos (Acta, Convocatoria)',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'gestioncoop',
          'gestioncoop_rules' => 'gestioncoop_rules',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '1' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'acta_consejo' => 'acta_consejo',
                'asamblea' => 'asamblea',
                'convocatoria_asamblea' => 'convocatoria_asamblea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Saved content is Acta de Consejo o Asamblea o Convocatoria Asamblea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Send a mail to all users of a role',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
              ),
            ),
            '#name' => 'rules_action_mail_to_users_of_role',
            '#settings' => array(
              'recipients' => array(
                '0' => 2,
              ),
              'from' => '[node:site-mail]',
              'subject' => 'Nuevo contenido creado',
              'message' => 'Se ha creado un/a [node:type-name]

Puede visualizar el contenido siguiendo esta url:

[node:site-url]/node/[node:nid]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'node',
                  ),
                  'from' => array(
                    '0' => 'node',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
