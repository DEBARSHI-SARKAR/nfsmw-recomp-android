/* speed.exe 007799f0 FUN_007799f0; analysis pseudocode, not buildable source.
 * calls 00779460 FUN_00779460
 */

void FUN_007799f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_009b393c == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(DAT_009b393c + -0x10);
  }
  while (puVar1 != &DAT_009b392c) {
    FUN_00779460(param_1);
    if (puVar1[4] == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(puVar1[4] + -0x10);
    }
  }
  return;
}

