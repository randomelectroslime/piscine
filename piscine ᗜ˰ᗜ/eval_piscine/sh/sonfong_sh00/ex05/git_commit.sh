# git log shows the log of git commits and commits that are pushed
# the operator -n 5 shows the last 5 commits in git repository
# --format="%H" only shows commit hashes
# bash runs the command inside script file, cat -e concatenates the content and appends $ to end 
# of each line
git log -n 5 --format="%H"
