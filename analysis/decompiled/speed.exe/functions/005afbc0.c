/* speed.exe 005afbc0 FUN_005afbc0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 __thiscall FUN_005afbc0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x24) + 0x14);
    while (*piVar1 != param_2) {
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 7;
      if (*(uint *)(param_1 + 0x18) <= uVar3) {
        return 0;
      }
    }
    if (uVar3 != 0xffffffff) {
      pvVar2 = _malloc(9);
      FUN_00460ca0(pvVar2,param_3,9);
      *(void **)(uVar3 * 0x1c + 0xc + *(int *)(param_1 + 0x24)) = pvVar2;
      return 1;
    }
  }
  return 0;
}

