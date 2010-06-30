$Id: README.txt,v 1.3.4.3.2.1 2009/01/23 03:12:14 permutations Exp $

phpFreeChat module
==============================================
Version 6.x-1.0
---------------
The module has been updated to work with Drupal 6.x (tested on Drupal 6.9). There have been no functional changes.

Version 5.x-1.3
---------------
Admin panel settings stored internally as arrays did not work before. Now they do, with the exception of Proxies Cfg (a multidimensional array). The additional settings that now work are: 

  nickmeta
  nickmeta_private
  nickmeta_key_to_hide
  admins
  frozen_channels
  privmsg
  refresh_delay_steps
  skip_proxies
  post_proxies
  pre_proxies
  bbcode_colorlist
  nickname_colorlist
  dyn_params 
  
Probably you won't use most of these, but one in particular is handy. If you are having problems with too-aggressive noflood settings (the noflood feature was added in phpFreeChat 1.2), you can use skip_proxies to disable it. Just enter "noflood" in the admin panel skip_proxies box. If you want to also disable, for example, the feature that censors bad language, enter "censor,noflood" (no quotes). For all array fields, separate values with commas.

The other change in this version is important, but invisible. The module was saving a huge amount of user settings unnecessarily, resulting in gigantic queries that could bring down a shared server. This has been fixed.


Version 5.x-1.2
---------------
Module works with phpFreeChat 1.2.

Negative number problem is now fixed within the Drupal module code so nothing has to be changed in phpFreeChat. (phpFreeChat 1.2 uses the correct time-out value of 35000.)

Code is formatted to according to Drupal conventions (except for the phpFreeChat customization files, which use phpFreeChat conventions).

The phpFreeChat customization files provide some additional features:

- Clicking on a username in the list opens a box with a link to that person's Drupal profile.

- There is a new "away" command that lets users indicate when they are not at their computer. This can be implemented with the new "door" button that opens and closes to indicate status, or by typing /away on the command line. When the user is away, the string "(away)" appears after the username, and a message is displayed in the chat box. Another message is displayed when the user returns. This is a toggle, so just click again or type the command again to turn the away status on or off. There is sometimes a slight delay between when the command is executed and when it's implemented. This is due to coding within phpFreeChat itself, so it's not something that can be fixed.


Version 5.x-1.1b
----------------
I backed out setting the default timeout to 35000 in the module. It's not working because the "negative number" error is still happening after clearing the cache (/rehash). The timeout needs to be changed to avoid disconnects (only for phpFreeChat 1.1), and the easiest way to do this is to change it directly in pfcglobalconfig.class.php. phpFreeChat has an integer check in there, and Drupal's form API doesn't have an integer type. I tried to identify the integer strings and change them and it worked in a test file, but not in the module.

pfcglobalconfig.class.php is in the phpFreeChat src directory (it's not a module file). 

To change the default timeout, find this variable assignment and change the 20000 to 35000:

    var $timeout = 35000;

To get rid of the negative number error, comment out this code in pfcglobalconfig.class.php:

/* 
    $numerical_positive_params = $this->_params_type["positivenumeric"];
    foreach( $numerical_positive_params as $npp )
    {
      if (!is_int($this->$npp) || $this->$npp < 0)
        $this->errors[] = _pfc("'%s' parameter must be a positive number", $npp);
    }
*/ 


Version 5.x-1.1a
----------------
Two addition bug fixes have been added:

Bug in clearing the cache that caused phpFreeChat to periodically hang:
http://drupal.org/node/242000

Bug that caused a "negative number" error when numeric parameters are changed:
http://drupal.org/node/255702


Version 5.x-1.1
---------------
This version contains these fixes (updated from http://drupal.org/node/171169):

Database bug (required for blocks bug fix):
http://drupal.org/node/250069

Blocks bug:
http://drupal.org/node/200962

Scrolling bug in IE 7 (this is a description of theme requirements - not code):
http://drupal.org/node/225162

Rooms and other default settings bug:
http://drupal.org/node/187468

Update for phpFreeChat 1.1:

- Admin form now includes all phpFreeChat 1.1 parameters, and all outdated 1.0 parameters were removed. I added all the 1.1 parameters without evaluating how useful they were in the Drupal context. You could easily crash the chat with the wrong changes, but that was true with the original module code, too.

- The parameters update involved replacing the _phpfreechat_settings() function in phpfreechat.inc (I used generate-form.php with some changes, for this), and updating the phpfreechat_uninstall() function in phpfreechat.install. I changed how the uninstall function worked so that all the phpFreeChat variables were deleted (previously some were left).

==============================================

What does the phpFreeChat module do?

phpFreeChat is a much better chat than either ChatRoom or ChatBlock (the two other chats for Drupal 5.x). The phpFreeChat download page says that phpFreeChat breaks jQuery, but I've had no problems.

	This module adds free, simple, fast and customizable chat to your Drupal site, using the open source phpFreeChat
	New in this module: cleaner settings page, better help text, improved channel configuration and access control
	New in phpFreeChat: new commands /join (multiple channels in the same chat), /kick, /ban moderation
	
	Features:
	
		* Fully integrated with Drupal
		* Any content type can be chat enabled
		* Chat can be enabled/disabled on a per-node basis
		* Chat channels:
			* Each node can be it's own chat channel (the default)
			* The whole site can have a single channel (so users can chat in a single 'space' whatever page they are on)
			* Channels can be set on a content-type level, so - for example - all users looking at blogs can participate in a single chat
			* Channels can be overriden at the node level, so the admin can group several nodes into a single chat space by giving them the same channel name
		* Chat titles can be derived from the node title, set globally, or at the content-type or node level
		* Control over every phpFreeChat configuration parameter
		* Speed (an important issue for a refresh based chat script)
			* Passes control to a separate script to handle AJAX refresh requests. This avoids the overhead of the Drupal bootstrap process.
			* The AJAX refresh process involves no database access whatsoever. All chat data is stored either on the file system, or directly in RAM.
		* Theming
			* Clean XHTML output which is easily styled using css stylesheets
			* phpFreeChat is easily themable, using an almost identical system to phptemplate
			
	Todo:
		* Add chat blocks
		* Fix debug setting (which currently breaks the chat)
		* Look at integrating theming (map Drupal theme onto phpFreeChat theme)
		
	If you have any questions please contact me using http://drupal.org/user/19668/contact
	- Grugnog

Overview of phpFreeChat?

	php Free Chat is a free, simple to install, fast, customizable and multi languages chat that uses a simple filesystem for message and nickname storage. It uses AJAX to smoothly refresh (no flicker) and display the chat zone and the nickname zone. It supports multi-rooms (/join), private messages, moderation (/kick, /ban), customized themes based on CSS and plugins systems that allows you to write your own storage routines (ex: Mysql, IRC backends ...), and you own chat commands !

    Simple
         No problems with firewalls, this script is based on HTTP so you only
         need a web browser and an internet connection. (everyone can easily
         chat!)
         No problems with none-latin characteres! Are you Russian, Japanese,
         Turk, Chinese, or Arabic? Whatever language you speak, phpFreeChat
         will nicely display your characters because it uses XML with UTF8 to
         encode characters.
    Fast
         AJAX technology is used to smoothly refresh (no flicker) and display
         the chat and nickname zone.
         Messages and nicknames are stored into a simple filesystem, so that
         server resources are saved as much as possible.
         Bandwidth is preserved because the server never transmits the same
         data twice, only new messages are transmitted.
    Customizable
         You can write your own customized CSS stylesheets, to completely
         change the appearance[22] of your chat.
         All chat functionalities are customizable. For example, you can
         change the messages refresh time, you can ban users for changing
         their usernames, etc.
         The plugin system[23] allows you to write your own storage routines.
         For example, you can write a plugin to store the conversations into
         your database.
    Opensource
         phpFreeChat is an opensource (LGPL) program, so that you can freely
         use it and modify it.
         I just ask, by gratitude, to keep the linkback logo  on the pages of
         your chat.
