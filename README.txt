For proximity searching to work, this feature requires that you install the location module, which in turn requires that you import your country's postal codes. Instructions for how to do this can be found in INSTALL.txt in the location module folder. (See instruction #6 in that file.)

Other notes: 
If you use MAMP, you will probably need two things to import the zip codes:
1. know where your mysql program is: /Applications/MAMP/Library/bin/mysql
2. probably increase your max allowed packet using this command:
mysql --max_allowed_packet=16M