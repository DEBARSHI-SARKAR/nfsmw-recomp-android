/* speed.exe 005e46f0 FUN_005e46f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005e46f0(int param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0xa8) - 0x14;
  while (uVar2 = uVar3 + 0x14,
        uVar2 < (uint)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14)) {
    if ((param_2 == 0) || (puVar1 = (ushort *)(uVar3 + 0x1e), uVar3 = uVar2, *puVar1 == param_2))
    goto joined_r0x005e4729;
  }
  uVar2 = 0;
joined_r0x005e4729:
  do {
    if (uVar2 == 0) {
      return;
    }
    if (*(char *)(uVar2 + 8) == '\x01') {
      *(undefined1 *)(uVar2 + 8) = 2;
    }
    uVar3 = uVar2;
    do {
      uVar2 = uVar3 + 0x14;
      if ((uint)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14) <= uVar2) {
        return;
      }
    } while ((param_2 != 0) &&
            (puVar1 = (ushort *)(uVar3 + 0x1e), uVar3 = uVar2, *puVar1 != param_2));
  } while( true );
}

