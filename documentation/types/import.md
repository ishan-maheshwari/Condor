Import
======

Import is used when importing other language built modules into your code. Imports can be declared in an inline format as well as in a block format. Imports are to be loaded at the top of the file

Syntax
------
**Single inline declaration** in the following order:

 1. Keyword: "import"
 2. Open String
 3. Module name
 4. Close String
 5. Semicolon

**Block declaration** in the following order:
 1. Keyword: "import"
 2. Left Brace
 3. Open String
 4. Module Name
 5. Close String
 6. Semi Colon
 7. Repeat 3-6
 8. Right Brace


Examples
--------
```js
import 'os';
```

```js
import {
	'os';
	'fs';
	'path';
}
```