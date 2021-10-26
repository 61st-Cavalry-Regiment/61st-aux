# Contributing to the 61st Aux Mod
Contributions are always welcome, but we do ask you follow some rules when contributing.

Please note these rules are geared towards members of the 61st Aux Mod Team, but all contributions are welcome. If you are not apart of the Aux Mod Team you will be required to create a fork.

## Branches
### Naming
All branches must follow the following naming scheme:

| Branch Type         | Naming Definition                    | Example                              |
|---------------------|--------------------------------------|--------------------------------------|
| **Release**         | `release/<version>`                  | `release/1.0.0`                      |
| Release Update      | `<version>/<name>/<description>`     | `1.0.0/thunder/missing-texture`      |
| **Development**     | `development`                        | `development`                        |
| Feature Development | `dev/<name>/<description>`           | `dev/thunder/helms`                  |

The primary development branch is `development` and is used for new major feature updates. this is intended for long term projects.
- Updates to the development branch will be done on branches following the `dev/<name>/<description>` naming scheme, where `<name>` is the developers name and `<description>` is a very short summary of the feature/bugfix. dev branch names must start with `dev` and is case sensitive. `_` and `.` are not allowed in `dev` names.

The primary release branch, following the naming scheme of `release/<version>` is where active development for the current release goes. This includes minor updates such as adding new helmets, fixing bugs, and other small changes.
- Updates to the release branch will be done on branches following the `<version>/<name>/<description>` naming scheme, where `<version>` is the version of the release branch a bugfix/feature is targeting. The `<name>` and `<description>` fields are the same as in the development branches.

### Branch Guidelines
1. Branches should target a single scope - i.e. target a single issue or feature. A branch that aims at solving multiple problems at once will not be allowed to merge with any primary (`development` | `release`) branches.
2. Branches **must** be based on the correct primary branch. A development branch will not be allowed to merge with a release branch.
3. Branch names are required to be all lowercase.
4. Branches should use a dash `-` to represent spaces.

### Merge Requests
1. Ensure your branch is up to date with the primary branch you intend to merge to. This can be done with a `rebase` command.
2. Changes must be properly detailed in the merge request message.
3. Any issues that are closed with the merge request must be noted in the merge request message. Use the format `Closes #<issue number>` (ex. `Closes #12`) to automatically close the issues when the Merge Request is completed.

## Commmits

Each commit should only include a single change when possible. Commit messages should be descriptive of what the change being made is. if a commit is the final commit to fix an issue, include the keywords `Closes #<issue number>` (ex. `Closes #12`) in your commit message to automate the closing of issues in the repository.
