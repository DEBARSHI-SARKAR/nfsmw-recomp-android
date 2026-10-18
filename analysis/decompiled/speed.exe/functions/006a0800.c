/* speed.exe 006a0800 FUN_006a0800; analysis pseudocode, not buildable source.
 * calls 00691da0 FUN_00691da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_006a0800(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  int local_8;
  
  if (param_2 < _DAT_00890968) {
    return 0;
  }
  local_8 = 2;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (2 < iVar1) {
    do {
      iVar1 = local_8 + 1;
      fVar3 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 0x24))(local_8,iVar1);
      fVar4 = (float10)FUN_00691da0(param_2,local_8);
      if (fVar4 <= (float10)(float)fVar3) {
        return local_8;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      local_8 = iVar1;
    } while (iVar1 < iVar2);
  }
  return local_8;
}

