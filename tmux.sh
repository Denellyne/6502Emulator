#!/bin/bash

SESSION="$(basename $("pwd"))"

tmux has-session -t $SESSION 2>/dev/null

if [ $? != 0 ]; then
  tmux new-session -d -s $SESSION -n "editor"
  tmux send-keys -t $SESSION:editor "cd ./src" C-m
  tmux send-keys -t $SESSION:editor "vi ." C-m

  tmux new-window -t $SESSION -n "terminal"
  tmux send-keys -t $SESSION:terminal "cd ./src" C-m

  tmux set-option -t $SESSION status on
fi

tmux attach-session -t $SESSION
