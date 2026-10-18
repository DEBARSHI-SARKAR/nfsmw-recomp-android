/* speed.exe 004c4380 FUN_004c4380; analysis pseudocode, not buildable source.
 * calls 004b1040 FUN_004b1040
 * calls 004ba7b0 FUN_004ba7b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c4380(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = (float)*(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0x180) + 0x14) + 0x34) + 0x1cc)
            * _DAT_00896aec;
  if (_DAT_00895b14 < local_8) {
    local_8 = local_8 - _DAT_00890960;
  }
  FUN_004b1040(local_8,param_2);
  FUN_004b1040(local_8,param_2);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x180) + 0x14) + 0x34);
  FUN_004b1040(SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                    *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                    *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50)) -
               SQRT(*(float *)(iVar1 + 0x70) * *(float *)(iVar1 + 0x70) +
                    *(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x78) +
                    *(float *)(iVar1 + 0x74) * *(float *)(iVar1 + 0x74)),param_2);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x180) + 0x14) + 0x34);
  FUN_004b1040(SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                    *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                    *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50)) -
               SQRT(*(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x78) +
                    *(float *)(iVar1 + 0x74) * *(float *)(iVar1 + 0x74) +
                    *(float *)(iVar1 + 0x70) * *(float *)(iVar1 + 0x70)),param_2);
  FUN_004b1040(*(undefined4 *)(*(int *)(param_1 + 0x180) + 0x48),param_2);
  FUN_004ba7b0(param_2);
  return;
}

