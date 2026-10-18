/* speed.exe 00576b80 FUN_00576b80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00576b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x2f4);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + (iVar1 * 3 + 0xbd) * 4) = param_2;
      *(undefined4 *)(param_1 + 0x2f8 + iVar1 * 0xc) = param_3;
      *(int *)(param_1 + 0x33c) = *(int *)(param_1 + 0x33c) + 1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar1 < 6);
  return;
}

