/* speed.exe 00834846 FUN_00834846; analysis pseudocode, not buildable source.
 * calls 008346ff FUN_008346ff
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00834846(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_009c312a;
  do {
    puVar1[-1] = 0xffff;
    *puVar1 = 0xffff;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x9c31aa);
  param_1 = param_1 * 0x10001;
  DAT_0090d270 = param_1 + -0xdd2f1aa;
  DAT_0090d274 = param_1 + -0x77ced917;
  DAT_0090d278 = param_1 + -0x39db22d1;
  DAT_0090d27c = param_1 + 0x702c49c;
  DAT_0090d280 = param_1 + -0x61cac083;
  _DAT_0090d284 = param_1 + 0x6fdf3b64;
  DAT_009c31a8 = 0;
  iVar2 = 0x20 - param_1 % 0x20;
  if (0 < iVar2) {
    do {
      FUN_008346ff(10,0xffffffff);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

