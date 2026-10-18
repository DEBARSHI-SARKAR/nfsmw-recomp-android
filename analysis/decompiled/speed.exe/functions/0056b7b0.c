/* speed.exe 0056b7b0 FUN_0056b7b0; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0056b7b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_008f40f8;
  do {
    if (*piVar1 == param_1) {
      return &DAT_008f40f8 + iVar2 * 5;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x8f41c0);
  return (undefined4 *)0x0;
}

