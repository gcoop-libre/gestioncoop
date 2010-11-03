<?php
// $Id: print.tpl.php,v 1.8.2.17 2010/08/18 00:33:34 jcnventura Exp $

/**
 * @file
 * Default print module template
 *
 * @ingroup print
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $print['language']; ?>" xml:lang="<?php print $print['language']; ?>">
  <head>
    <?php print $print['head']; ?>
    <?php print $print['base_href']; ?>
    <title><?php print $print['title']; ?></title>
    <?php print $print['scripts']; ?>
    <?php print $print['sendtoprinter']; ?>
    <?php print $print['robots_meta']; ?>
    <?php print $print['favicon']; ?>
    <?php print $print['css']; ?>
  </head>
  <body>

  <?php
    // campos 
    $ciudad = $print['node']->field_ciudad['0']['value'];
    $fecha = explode(" - ",strip_tags($print['node']->field_fecha['0']['view']));
    $domicilio = $print['node']->field_domiciliosocial['0']['view'];
    $tipoasamblea = $print['node']->field_tipoasamblea['0']['view'];
    $preside = user_load($print['node']->field_presidereunion['0']['uid']);
    profile_load_profile($preside);
    $apellido_nombre_preside = $preside->profile_name.' '.$preside->profile_lastname;

    // apellido y nombre de los presentes
    $node1 = node_load($print['node']->nid);
    $presentes = $node1->field_presentes;
    $apellido_nombre = array();
    foreach ($presentes as $presente)
    {
      $user = user_load(array('uid' => $presente['uid']));
      profile_load_profile($user);
      $apellido_nombre_presente[] = $user->profile_name.' '.$user->profile_lastname;
    }
    // tema de reunion
    $temas = array();
    foreach ($print['node']->field_temadereunion as $tema)
    {
      $temas[] = $tema['value'];
    }

    // apellido, nombre y cargo de los firmantes
    $node1 = node_load($print['node']->nid);
    $firmantes = $node1->field_firmantes;
    $apellido_nombre = array();
    foreach ($firmantes as $firmante)
    {
      $user = user_load(array('uid' => $firmante['uid']));
      profile_load_profile($user);
      $apellido_nombre_firmante[] = '<td>'.$user->profile_name.' '.$user->profile_lastname.'<br/><br />'.$user->profile_coop.'</td>';
    }

    switch ($print['type'])
    {
      case 'asamblea':
      ?>
      <!-- Aca va el texto -->
      <div style='height: 20px;'></div>
      <div class="print-content">En la Ciudad <?php print $ciudad; ?> el <?php print htmlentities($fecha[0]).' - '.$fecha[1]; ?>, reunidos en el domicilio de la calle <?php print $domicilio ?> se declara constituida la Asamblea General <?php print $tipoasamblea ?> de la Cooperativa <?php print variable_get('site_name', TRUE); ?>, con la presidencia de <?php print $apellido_nombre_preside; ?> quien da comienzo al acto con la presencia de <?php print implode(", " , $apellido_nombre_presente); ?> cuyos datos personales y firmas se registran en el libro de Asistencia a Asambleas, con el objeto de considerar el siguiente Orden del día: .
      <div style='height: 20px;'></div>
      <?php print implode("<br />" , $temas); ?> 
      <div style='height: 20px;'></div>
      Siendo <?php print $fecha[0].' - '.$fecha[2]; ?>. Y al no haber otro asunto que tratar, se levanta la sesión.
      <div style='height: 90px;'></div>
      <table width='40%' style='border-collapse: separate;'>
      <tbody>
      <tr>
      <?php print implode(" " , $apellido_nombre_firmante); ?> 
      </tr>
      </tbody>
      </table>
      </div>
      <!-- fin texto -->
      <?php
      break;
      case 'acta_consejo':
      ?>
      <!-- Aca va el texto -->
      <div style='height: 20px;'></div>
      <div class="print-content">En la Ciudad <?php print $ciudad; ?> el <?php print htmlentities($fecha[0]).' - '.$fecha[1]; ?>, se reúnen los miembros del Consejeros de Administración de <?php print variable_get('site_name',TRUE); ?>, en el domicilio de la calle <?php print $domicilio ?> con la presidencia de <?php print $apellido_nombre_preside; ?> quien da comienzo al acto con la presencia de <?php print implode(", " , $apellido_nombre_presente); ?>.
    <br/>Abierto el acto, quien preside pone a consideración el acta anterior, la misma es leída y se aprueba por unanimidad, sin observaciones.
    <br/>A continuación quien preside expone que la reunión fue convocada a los efectos de tratar:
      <div style='height: 20px;'></div>
      <?php print implode("<br />" , $temas); ?> 
      <div style='height: 20px;'></div>
      Siendo <?php print $fecha[0].' - '.$fecha[2]; ?>. Y al no haber otro asunto que tratar, se levanta la sesión.
      <div style='height: 90px;'></div>
      <table width='40%' style='border-collapse: separate;'>
      <tbody>
      <tr>
      <?php print implode(" " , $apellido_nombre_firmante); ?> 
      </tr>
      </tbody>
      </table>
      </div>
      <!-- fin texto -->
      <?php
      break;
      case 'convocatoria_asamblea':
      ?>
      <!-- Aca va el texto -->
      <div style='height: 20px;'></div>
      <div class="print-content">En cumplimiento a lo dispuesto por el artículo 47 de la Ley 20.337, informamos a usted que se ha convocado a los señores asociados de <?php print variable_get('site_name',TRUE); ?>. Matrícula INAES número: <?php print variable_get('gcoop_formalter_matricula_setting',TRUE); ?> a Asamblea General <?php print $tipoasamblea ?> el <?php print htmlentities($fecha[0]).' - '.$fecha[1]; ?> en el domicilio de la calle <?php print $domicilio ?>, para tratar el siguiente Orden del día.
      <div style='height: 20px;'></div>
      <?php print implode("<br />" , $temas); ?> 
      <div style='height: 90px;'></div>
      <table width='40%' style='border-collapse: separate;'>
      <tbody>
      <tr>
      <?php print implode(" " , $apellido_nombre_firmante); ?> 
      </tr>
      </tbody>
      </table>
      </div>
      <!-- fin texto -->
      <?php
      break;
      default:
        print '<h1>'.$print['title'].'</h1>'.$print['content'];
      break;
    }
    ?>
  </body>
</html>
