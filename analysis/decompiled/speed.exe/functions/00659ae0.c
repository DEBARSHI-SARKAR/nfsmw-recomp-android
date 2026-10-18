/* speed.exe 00659ae0 FUN_00659ae0; analysis pseudocode, not buildable source.
 * calls 004102f0 FUN_004102f0
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dac0 FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00659ae0(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_24;
  undefined1 local_20 [28];
  
  if ((_DAT_00926010 & 1) == 0) {
    _DAT_00926010 = _DAT_00926010 | 1;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
LAB_00659b20:
    iVar2 = *(int *)(param_1 + 4) + -1;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        local_24 = 0.0;
        goto LAB_00659b30;
      }
      goto LAB_00659b20;
    }
    iVar2 = *(int *)(param_1 + 4);
  }
  local_24 = (float)iVar2;
LAB_00659b30:
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_0045dac0(param_2,local_24);
    }
    else if (iVar4 == 2) {
      if (param_2 < _DAT_00890968) {
        pfVar1 = *(float **)(param_1 + 0xc);
        pfVar3 = *(float **)(param_1 + 0xc);
        _DAT_00926000 = (pfVar1[4] - *pfVar1) * param_2 + *pfVar3;
        _DAT_00926004 = pfVar3[1] + (pfVar1[5] - pfVar1[1]) * param_2;
        _DAT_00926008 = pfVar3[2] + (pfVar1[6] - pfVar1[2]) * param_2;
        return &DAT_00926000;
      }
      if (local_24 < param_2) {
        pfVar3 = (float *)FUN_004102f0(local_20,(*(int *)(param_1 + 4) + -2) * 0x10 +
                                                *(int *)(param_1 + 0xc));
        param_2 = param_2 - local_24;
        iVar4 = *(int *)(param_1 + 4) * 0x10;
        pfVar1 = (float *)(iVar4 + -0x10 + *(int *)(param_1 + 0xc));
        _DAT_00926000 = *pfVar3 * param_2 + *pfVar1;
        _DAT_00926004 = *(float *)(iVar4 + -0xc + *(int *)(param_1 + 0xc)) + pfVar3[1] * param_2;
        _DAT_00926008 = pfVar1[2] + pfVar3[2] * param_2;
        return &DAT_00926000;
      }
    }
  }
  iVar4 = FUN_007c4b80();
  return (undefined *)(iVar4 * 0x10 + *(int *)(param_1 + 0xc));
}

