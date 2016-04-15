<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
 //dsm($content);
 if($page) {
   $account = user_load($node->uid);
 }
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
	
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2><a <?php print $title_attributes; ?> href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
	
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
  
  print render($content['submitted_by']);
  
  if(!empty($content['field_ref_images'])) {
    print render($content['field_ref_images']);
  }
  
  if(!empty($content['field_ref_price'])) {
    print render($content['field_ref_price']);
  }
  ?>
  
  <?php if($page): ?>
  
  <div class="account-info">
    <?php print theme('user_picture', array('account' =>$account)); ?>
    <div class="username">
      <?php print theme('username', array('account' => $account)); ?> 
    </div>
  </div>
  
  <?php endif; ?>
  
  <?php
  if(!empty($content['field_ref_address'])) {
	  print '<i class="fa fa-map-marker fa-2x"></i>';
    print render($content['field_ref_address']);
  }
  
  if(!empty($content['field_ref_phone'])) {
	  print '<i class="fa fa-phone-square fa-2x"></i>';
    print render($content['field_ref_phone']);
  }
  
  //if(!empty($account->mail)) {
    //print $account->mail;
  //}
  if(!empty($content['field_ref_email'])) {
  print '<i class="fa fa-at fa-2x"></i>';
	print render($content['field_ref_email']);
  }
  if(!empty($content['field_ref_skype'])) {
	  print '<i class="fa fa-skype fa-2x"></i>';
    print render($content['field_ref_skype']);
  }
  
  if($page){
    $links = array();
    $links[] = l(t('Все объявления пользователя'), 'user/'.$account->uid.'/ads');
    if($account->data['contact']) {
      $links[] = l(t('Написать сообщение'), 'user/'.$account->uid.'/contact');
    }
    print theme('item_list', array('items' => $links));
  }
 
  
  $body = render($content['body']);
    print render($content);
   print '<div class="ad-body">'.$body.'<div>';
   
  ?>
  
  <?php print render($content['comments']); ?>
  <?php print render($content['links']); ?>

  

</article>
