/*
Git local workflow file states:

1 - untracked
    - file present in working directory
    - not added to repository
    - adding moves file to state 4
        - ex: git add gitNotes.c

2 - tracked, not changed
    - file has not been modified since last commit
    - modifying moves file to state 3
    - committing moves file to state 5, skipping stage 4
        - ex: git commit -a -m "detailed commit message"
 
3 - tracked, changed
    - file has been modified since last commit
    - adding moves file to state 4
        - ex: git add gitNotes.c
    - restoring moves file to state 2, reverting all changes since last commit
        - ex: git restore gitNotes.c
    - committing moves file to state 5, skipping stage 4
        - ex: git commit -a -m "detailed commit message"

4 - staged
    - file added to repository
    - restoring moves file to state 1
        - ex: git restore --staged gitNotes.c
    - modifying creates a revised file in state 3
    - committing moves file to state 5
        - ex: git commit -m "detailed commit message"        

5 - committed
    - file snapshot saved to repository and logged
        - ex: git log

*/