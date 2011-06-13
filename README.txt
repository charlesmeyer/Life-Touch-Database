This is a snapshot of an app build on the Drupal content management framework.
For system requirements, installation troubleshooting, and other help, go to drupal.org
The only custom code is found in:
/sites/all/modules/lt_student
/sites/all/themes/evangelism_manager
/sites/all/themes/evangelism_manager_admin
All other code is from the drupal.org website
This should run on most Linux type servers (needs php, mySQL, etc.)
If your church already has a website, I would recommend using a sub-domain for this app (i.e. lifetouch.firstbaptistmytown.org). You should be able to use the same server if you set up a new Apache virtual host. 
Note: This app will be slow if you do not have the APC php module installed on your server.
To Install:
Put the files into your web-root
Create a MySQL database using the sql file snapshot I put in the root directory.
edit /sites/default/settings.php line 92 with the credentials for your database 
You should now be able to access the site.
Log in as:
username: admin
password: password
This is the super user account. Use this account only for changing system configurations.
go to /user/1/edit to change your password and email
Go to /admin/settings/site-information and set the site email address
Go to /admin/user/user/create to create a new user 
Give this user the Admin-edit role and log in as this user to do all the day to day admin the database. (adding users, classes, students etc. via the Management link on the bottom of the page.)