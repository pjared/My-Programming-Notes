# Github

- [Github](#github)
  - [Usage](#usage)
    - [Creating a Repository](#creating-a-repository)
  - [Summary](#summary)

## Usage
1. Create a github repository
2. Branch
3. Commit
4. Merge

### Creating a Repository
Command line:

| Command | Description |
| ----------- | ----------- |
| `git init` | Initialize Repository |
| `git remote add origin <site>` | add to remote repository (can also be an ssh path) |
| `git checkout -b <branch-name>` | Create and switch to a new branch |
| `git add <file name/folder name/ . (all)>` | Stage files for commit |
| `git commit -m <message>` | Commit files with a message |
| `git push` | Push changes |
| `git push <remote> <branch-name>` | Push changes to remote repo. If not working, use --force flag |
| `git stash save "<message>"` | Save work, can then switch to branch |
| `git stash apply` | apply stash to current branch |

## Summary
Github is a version control system (VCS). VCS manage changes made to any kind of information you could want to track(software, documents, etc).

![Github-picture](gitflow.png)



![Github-picture](git-software-flow.png)