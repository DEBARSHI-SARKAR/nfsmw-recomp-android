/* speed.exe 0056a880 FUN_0056a880; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 0056a7c0 FUN_0056a7c0
 */

void __thiscall FUN_0056a880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x104);
  do {
    if (*piVar2 == 0) {
      iVar1 = param_1 + iVar1 * 0xc;
      *(undefined4 *)(iVar1 + 0x104) = param_2;
      *(undefined4 *)(iVar1 + 0x100) = param_3;
      FUN_00514c70(param_3);
      if (*(char *)(param_1 + 0x130) == '\0') {
        FUN_0056a7c0();
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar1 < 4);
  return;
}

