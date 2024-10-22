#include <erl_nif.h>
#include <string.h>

static ERL_NIF_TERM nif_foo(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int(env, 42);
}

static ERL_NIF_TERM nif_bar(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    if (argc != 1) {
        return enif_make_badarg(env);
    }

    char name[256];
    if (!enif_get_string(env, argv[0], name, sizeof(name), ERL_NIF_LATIN1)) {
        return enif_make_badarg(env);
    }

    char greeting[256];
    snprintf(greeting, sizeof(greeting), "Hello %s!", name);

    return enif_make_string(env, greeting, ERL_NIF_LATIN1);
}

static ErlNifFunc nif_functions[] = {
    {"foo", 0, nif_foo},
    {"bar", 1, nif_bar}
};

ERL_NIF_INIT(hello_world, nif_functions, NULL, NULL, NULL, NULL)
