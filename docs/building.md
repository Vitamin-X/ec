# Building

Install build dependencies with the provided script:

```sh
./scripts/deps.sh
```

If rustup was installed as part of this, then the correct `cargo` will not be
available in the running session. Start a new shell session or source the env
file to update `PATH`.

```sh
source $HOME/.cargo/env
```

The default target, `all`, builds a single board which must be specified. For
example:

```sh
make [all] BOARD=system76/oryp6
```
