#!/bin/bash
url="$(git ls-remote --get-url)"
re="^(https|git)(:\/\/|@)([^\/:]+)[\/:]([^\/:]+)\/(.+).git$"

if [[ $url =~ $re ]]; then    
    user=${BASH_REMATCH[4]}
    repo=${BASH_REMATCH[5]}
fi

echo "${user,,}"
