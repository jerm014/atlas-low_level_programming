#!/bin/bash -v
#echo -e "#!/usr/bin/env bash\n# $3" > $2
#chmod 755 $2
git add --all
chmod u+x $1
# next line needed for windows
# git update-index --chmod=+x $2
git commit -m "(read)"
git push
