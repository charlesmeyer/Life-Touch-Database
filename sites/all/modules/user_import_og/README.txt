********************************************************************
                     D R U P A L    M O D U L E
********************************************************************
Name: User Import Organic Groups Module
Author: Robert Castelo <www.codepositive.com>
Drupal: 6.x
********************************************************************
DESCRIPTION:

Add options for importing users into Organic Groups (OG)


Features include:

* Import into Organic Groups as part of a general site import of users (option)
* Organic Group admins can import multiple users and subscribe them to their group (option) (IN DEVELOPMENT)
* Organic Group admins can subscribe existing users to their group


Supported CSV File Formats:

Make sure csv file has been saved with 'Windows' line endings.
If file import fails with "File copy failed: source file does not exist." try
setting the file extension to .txt.


********************************************************************
PREREQUISITES:

  - User Import module
  - Organic Groups module 

  - Node Import module (if importing to NodeProfile nodes)

********************************************************************
INSTALLATION:

Note: It is assumed that you have Drupal up and running.  Be sure to
check the Drupal web site if you need assistance.

1. Place the entire directory into your Drupal directory:
   sites/all/modules/
   

2. Enable the user_import modules by navigating to:

   administer > build > modules
     
  Click the 'Save configuration' button at the bottom to commit your
  changes. 

  
  
********************************************************************
USAGE     


-- SINGLE USER ADD TO OG --

1. Edit the organic group content type(s) to which this option should be available

    Admin > Content Management > Content types > <group content type>

    In the User Import fieldset enable 'Organic Groups Individual Subscribe'

2. Enable the block 'OG Add Users' by adding it to a region
     
     Administer Ý Site building > Blocks

3. Set access permissions for which role(s) can use this feature

     Administer Ý User management > Access control

     Set permission: 'og user import' 


********************************************************************
AUTHOR CONTACT

- Report Bugs/Request Features:
   http://drupal.org/project/user_import_og
   
- Comission New Features:
   http://drupal.org/user/3555/contact
   
- Want To Say Thank You:
   http://www.amazon.com/gp/registry/O6JKRQEQ774F

        
********************************************************************
ACKNOWLEDGEMENT


