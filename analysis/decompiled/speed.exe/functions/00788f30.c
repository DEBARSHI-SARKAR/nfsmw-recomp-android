/* speed.exe 00788f30 FUN_00788f30; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007887c0 FUN_007887c0
 * calls 0076d380 FUN_0076d380
 */

bool __thiscall FUN_00788f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  
  if (DAT_009b38fc != 0) {
    if (*(int *)(param_1 + 0x2e4) == 0) {
      pvVar1 = _malloc(0x3fc);
      *(void **)(param_1 + 0x2e4) = pvVar1;
    }
    iVar2 = FUN_0076d380(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_007887c0(param_1,param_2,param_3,param_4);
    }
    return iVar2 != 0;
  }
  return false;
}

