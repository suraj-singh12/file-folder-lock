# file-folder-lock

Features: 
1. Hides file(s) / folder(s) in current directory
2. Creates encryption key for each folder on locking 
3. Encryption key required to unlock 

Security:
1. Even when 'show hidden files' pressed, the items will stay locked!
2. Unlocks and gets visible only when decrypted using encryption key!

Requirements:
1. Database to store every encryption key (can be done using JSON)

Procedure: 
1. Launch -> Two options : Lock / Unlock 
    a. Lock -> show all unlocked things -> ask item number to lock -> lock and hide on input with a confirmation -> generate encryption key! -> back to home page / exit()
    b. Unlock -> show all locked up things -> ask item number -> ask decryption key on item select -> match with database -> correct ! -> unlock and unhide
             -> wrong ! -> prompt and ask again!
                            exit on 3 wrong attempts

