# CONTRIBUTING GUIDE

The FemSF project welcomes new contributors. This document will guide you
through the process.

### CONSENTING

Ask the project [on Gitorious](https://gitorious.org/c-plus-equality/c-plus-equality/) for consent.

```
$ git clone git@gitorious.org:c-plus-equality/your-repos-name.git
$ cd repo
$ git remote add upstream git@gitorious.org:c-plus-equality/c-plus-equality.git
```

### BRANCH

Okay, so you have consent. Create a feature branch and start hacking:

```
$ git checkout -b my-feature-branch
```

### CODE

* Names should be descriptive and concise.

* Use spaces and no tabs.

* 80 character limit is thin privilege.

* Ensure that lines have no trailing whitespace, and use unix-style (LF) line
  endings.

* Use C89-compliant syntax. In other words, variables can only be declared at
  the top of a scope (function, if/for/while-block).

* When writing comments, use properly constructed sentences, including
  punctuation. Also, no French spacing, please.

* When documenting APIs and/or source code, don't make assumptions or make
  implications about race, gender, religion, political orientation or anything
  else that isn't relevant to the project. Exceptions are: when it pertains
  to fact and is relevant to FemSF or feminism in general. This is acceptable.

* Remember that source code usually gets written once and read often: ensure
  the reader doesn't have to make guesses. Make sure that the purpose and inner
  logic are either obvious to a reasonably skilled professional, or add a
  comment that explains it. Use `//` type comments for short explanations
  and use `/* */` for longer explanations.

### COMMIT

Make sure git knows your name and email address:

```
$ git config --global user.name "J. Random User"
$ git config --global user.email "j.random.user@example.com"
```

Writing good commit logs is important. A commit log should describe what
changed and why. Follow these guidelines when writing one:

1. The first line should be 50 characters or less and contain a short
   description of the change prefixed with the name of the changed
   subsystem (e.g. "net: add localAddress and localPort to Socket").
2. Keep the second line blank.
3. Wrap all other lines at 72 columns.

A good commit log looks like this:

```
subsystem: explaining the commit in one line

Body of commit message is a few lines of text, explaining things
in more detail, possibly giving some background about the issue
being fixed, etc etc.

The body of the commit message can be several paragraphs, and
please do proper word-wrap and keep columns shorter than about
72 characters or so. That way `git log` will show things
nicely even when it is indented.
```

The header line should be meaningful; it is what other people see when they
run `git shortlog` or `git log --oneline`.

Check the output of `git log --oneline files_that_you_changed` to find out
what subsystem (or subsystems) your changes touch.

### REBASE

Use `git rebase` (not `git merge`) to sync your work from time to time.

```
$ git fetch origin && git rebase origin/master
```

### MAKE

```
$ make all
```

Make sure that this completes, flawlessly.

### PUSH

```
$ git push origin my-feature-branch
```

Go to your Gitorious repo and select your feature branch. Click
the 'Request merge' button and fill out the form.

Pull requests are usually reviewed when the dev [FemSF][] decides. If there are
comments to address, apply your changes in a separate commit and push that to your
feature branch. Post a comment in the pull request afterwards; Gitorious does
not send out notifications when you add commits.

### IRC

If you have questions, comments, concerns:
You can direct most things toward the official public [IRC][] on Freenode.

[FemSF]: https://gitorious.org/~feministsoftwarefoundation
[IRC]: http://webchat.freenode.net/?channels=%23cplusequality