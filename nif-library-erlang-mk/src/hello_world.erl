-module(hello_world).
-export([foo/0, bar/1]).
-nifs([foo/0, bar/1]).
-on_load(init/0).

init() ->
    ok = erlang:load_nif("./priv/hello_world", 0).

foo() ->
    erlang:nif_error(nif_library_not_loaded).
bar(_Name) ->
    erlang:nif_error(nif_library_not_loaded).
