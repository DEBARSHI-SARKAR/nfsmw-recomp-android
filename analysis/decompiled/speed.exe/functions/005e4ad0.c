/* speed.exe 005e4ad0 FUN_005e4ad0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void __thiscall FUN_005e4ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00460bf0(param_2);
  uVar2 = 0;
  param_1 = param_1 + 0x144;
  do {
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x24;
  } while (uVar2 < 8);
  return;
}

