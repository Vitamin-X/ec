# System76 EC

System76 EC is a GPLv3 licensed embedded controller firmware for System76
laptops.

## Documentation

Documentation is available in `docs/`. It is set up to be used with [mdBook],
which can generate HTML output for easy navigation.

```
mdbook build --open docs/
```

- [Index][index]

## Legal

System76 EC is copyright System76 and contributors.

System76 EC firmware is made available under the terms of the GNU General
Public License, version 3. See [LICENSE](./LICENSE) for details.

- firmware: GPL-3.0-only
- ecflash: LGPL-2.1-or-later
- ecsim: MIT
- ectool: MIT

Datasheets for the ITE embedded controllers used in System76 laptops cannot be
shared outside of company. However, the IT81202E datasheet is [publicly
available][it81202e]. While it uses a different core, a significant portion of
the register information is the same as IT85878E/IT5570E.


[index]: ./docs/index.md
[it81202e]: https://www.ite.com.tw/en/product/view?mid=149
[mdBook]: https://github.com/rust-lang/mdBook
