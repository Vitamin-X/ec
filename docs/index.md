# Documentation

This is the documentation for System76 EC. It is set up to be used with
[mdBook], which can generate HTML output for easy navigation.

System76 EC is free, open-source firmware for embedded controllers on System76
laptops.

## Releases

The EC firmware itself does not have tagged releases. Any commit of this repo
may be used as a part of a [System76 Open Firmware][firmware-open] release.

In official releases the EC shares the same version as the BIOS firmware. Run
the follow command from firmware-open to determine the corresponding EC commit
for a release.

```
git ls-tree <release_hash> ec
```

## Legal

System76 EC is copyright System76 and contributors.

System76 EC firmware is made available under the terms of the [GNU General
Public License, version 3][GPL-3.0-only].

Datasheets for the ITE embedded controllers used in System76 laptops cannot be
shared outside of company. However, the IT81202E datasheet is [publicly
available][it81202e]. While it uses a different core, a significant portion of
the register information is the same as IT85878E/IT5570E.


[GPL-3.0-only]: https://www.gnu.org/licenses/gpl-3.0-standalone.html
[firmware-open]: https://github.com/system76/firmware-open
[it81202e]: https://www.ite.com.tw/en/product/view?mid=149
[mdBook]: https://github.com/rust-lang/mdBook
