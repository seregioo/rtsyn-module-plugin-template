# RTSyn _rtsyn_module_title_ Plugin

_rtsyn_module_description_

## Usage

### Update

Make sure you have last version of the dependencies:

```bash
xrepo update-repo
xmake require --upgrade
```

For development you may need to run:

```bash
xmake require --upgrade -fy <dependency_name>
```

### Compiling

```bash
xmake
```

### Tests

```bash
xmake test
```

For enabling valgrind, before running tests:

```bash
xmake f --valgrind=y
```

### Local development

If you want to test your changes locally from different parts of RTSyn, export the path where you have all the repos:

```bash
export RTSYN_WORKSPACE=<PATH>
```

> [!WARNING]
> This expects you also the `rtsyn-xmake-repo`.
