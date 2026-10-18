/* speed.exe 006a44f0 FUN_006a44f0; analysis pseudocode, not buildable source.
 * calls 006947d0 FUN_006947d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006a44f0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    pfVar1 = (float *)(*(int *)(param_1 + 0x5c) * 0x20 + 0x68 + param_1);
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x34) + 0x60))();
    if ((pfVar1[2] - pfVar4[2]) * (pfVar1[2] - pfVar4[2]) +
        (pfVar1[1] - pfVar4[1]) * (pfVar1[1] - pfVar4[1]) +
        (*pfVar1 - *pfVar4) * (*pfVar1 - *pfVar4) < _DAT_00890e98) {
      return 0;
    }
  }
  cVar3 = FUN_006947d0(0);
  if (cVar3 == '\0') {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0xec);
  if (piVar2 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar2 + 8))();
    iVar6 = (**(code **)(*piVar2 + 0x4c))();
    if (iVar6 != iVar5) {
      return 0;
    }
  }
  return 1;
}

