/* speed.exe 005c35b0 FUN_005c35b0; analysis pseudocode, not buildable source.
 * calls 005c2c40 FUN_005c2c40
 */

undefined4 __fastcall FUN_005c35b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)(iVar1 + 8);
  if (*piVar2 != 0x52676b50) {
    while (piVar2 != (int *)(*(int *)(iVar1 + 4) + 8 + iVar1)) {
      piVar2 = (int *)((int)piVar2 + piVar2[1] + 8);
      if (*piVar2 == 0x52676b50) {
        FUN_005c2c40(piVar2 + 2,piVar2[1],1);
        return 1;
      }
    }
    if (*piVar2 != 0x52676b50) {
      return 1;
    }
  }
  FUN_005c2c40(piVar2 + 2,piVar2[1],1);
  return 1;
}

