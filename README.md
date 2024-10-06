# Setup Erlang Examples (Github Actions workflows)

This repository showcases how to use the
[Setup Erlang](https://github.com/erlangsters/setup-erlang) Github Action in a
Github Actions workflow.

For each supported version of Erlang (25.x, 26.x and 27.x), for each supported
platforms (Linux, macOS and Windows), and for each build tool
([Rebar3](https://rebar3.org/) and [Erlang.mk](https://erlang.mk/)), it shows
how to:

- Build a simple library
- Build an OTP application (with release)
- Build a NIF-based library

It also helps verify that the Github Action continues to work (as it runs
weekly).

XXX: Add "Build driver-based library" to the examples.

## Repository organization

To showcase how to build an Erlang-based project using the Setup Erlang Github
Action, you will find 3 basic project files structures. To avoid confusion,
they're duplicated and tuned for both build tool.

```
my-lib-project/
  with-erlang-mk/
    Makefile
    ...
  with-rebar3/
    rebar.config
    ...
my-app-project/
  with-erlang-mk/
  with-rebar3/
my-nif-project/
  with-erlang-mk/
  with-rebar3/
```

To understand how to build those in

```
.github/workflows/
  lib-project.yml
  app-project.yml
  nif-project.yml
```

To be written.
