# Setup Erlang Examples

This repository showcases how to use the
[setup-erlang](https://github.com/erlangsters/setup-erlang) action in a Github
Actions workflow.

For each supported version of Erlang (25.x, 26.x and 27.x), for each supported
platforms (Linux, macOS and Windows), and for the [Rebar3](https://rebar3.org/)
and [Erlang.mk](https://erlang.mk/)) build tools, it shows how to build the
following types of Erlang projects.

- Build an OTP application/release
- Build a NIF-based library

It also helps verify that those projects continue to be "buildable" despite
ongoing environment changes.

XXX: Perhaps add "driver-based library" and "escript" projects to the examples.

## Repository organization

Find one folder per Erlang project type and build tool.

- `otp-release-rebar3` - How to build OTP release with Rebar3.
- `otp-release-erlang-mk` - How to build OTP release with Erlang.mk
- `nif-library-rebar3` - How to build a NIF-based library with Rebar3
- `nif-library-erlang-mk` - How to build a NIF-based library with Erlang.mk

They're good starting points if you struggle with how to structure your Erlang
projects.

And finally, find Github Actions
[workflow](.github/workflows/setup-erlang-examples.yml) that will show you how
to write your workflows to build those projects (install dependencies, the
right commands to execute, etc).
