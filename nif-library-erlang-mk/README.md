# NIF library using Erlang.mk

It's a dummy project that showcases how to build a NIF-based library using the
[Erlang.mk](https://erlang.mk/) build tool.

It implements the NIF module `hello_world` with the `foo/0` function that
returns 42, and the `bar/1` function that returns "Hello <name>!" where name
if the string passed as parameter.

Also, eunit is used to verify that the implementation is correct.

To build the NIF module (the `c_src/hello_world.c` file) with Erlang.mk you can
choose to either provide a Makefile to do the building, or let the it do it.
The later is chosen for this example project.
