/* speed.exe 0074b760 FUN_0074b760; analysis pseudocode, not buildable source.
 * calls 0074b670 FUN_0074b670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0074b760(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float local_4;
  
  local_4 = 1.0;
  if (((*(int *)(param_1 + 0x2c) != 0) && (param_4 != _DAT_00890968)) &&
     (fVar1 = param_2 - *(float *)(param_1 + 0x24), fVar2 = param_3 - *(float *)(param_1 + 0x28),
     fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2), fVar1 < param_4)) {
    local_4 = fVar1 / param_4;
  }
  FUN_0074b670(param_2,param_3,local_4);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(float *)(param_1 + 0x24) = param_2;
  *(float *)(param_1 + 0x28) = param_3;
  return;
}

