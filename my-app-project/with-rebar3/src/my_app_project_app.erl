%%%-------------------------------------------------------------------
%% @doc my_app_project public API
%% @end
%%%-------------------------------------------------------------------

-module(my_app_project_app).

-behaviour(application).

-export([start/2, stop/1]).

start(_StartType, _StartArgs) ->
    my_app_project_sup:start_link().

stop(_State) ->
    ok.

%% internal functions
