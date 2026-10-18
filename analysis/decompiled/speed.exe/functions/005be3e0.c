/* speed.exe 005be3e0 FUN_005be3e0; analysis pseudocode, not buildable source.
 * calls 005bccd0 FUN_005bccd0
 */

undefined4 __thiscall FUN_005be3e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x24) + 0x14);
    while (*piVar2 != param_2) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 7;
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      FUN_005bccd0(param_4);
      return 1;
    }
  }
  return 0;
}

