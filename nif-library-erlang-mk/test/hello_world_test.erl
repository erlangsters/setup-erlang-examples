-module(hello_world_test).
-include_lib("eunit/include/eunit.hrl").

hello_world_test() ->
    42 = hello_world:foo(),
    "Hello world!" = hello_world:bar("world"),

    ok.
