/* speed.exe 00725060 FUN_00725060; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00725060(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x6430);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x6430 + iVar1 * 4) = param_2;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x100);
  return;
}

