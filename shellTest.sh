#!/bin/bash

test="%This is +test1; &This is %test2; This is test3%"
IFS=';' read -ra elements <<< "$test"

for element in "${elements[@]}"
do
    trimmed=$(echo $element | xargs)  # 去除首尾空格
    if [[ $trimmed == %* ]]; then
        echo $trimmed
    fi
done
