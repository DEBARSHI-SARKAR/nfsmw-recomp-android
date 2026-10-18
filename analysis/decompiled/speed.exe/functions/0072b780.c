/* speed.exe 0072b780 FUN_0072b780; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f490 FUN_0045f490
 * calls 00721fc0 FUN_00721fc0
 * calls 0045fc60 FUN_0045fc60
 * calls 0045fd30 FUN_0045fd30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0072b780(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  int iVar7;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_3c = 0.0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    iVar7 = (*(int *)(param_1 + 0xf0) + 6) * 0x10;
    local_20 = *param_2 - *(float *)(iVar7 + param_1);
    iVar7 = iVar7 + param_1;
    local_1c = param_2[1] - *(float *)(iVar7 + 4);
    local_18 = param_2[2] - *(float *)(iVar7 + 8);
    local_3c = SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
    FUN_0045f490(&local_30,&local_20);
  }
  iVar7 = *(int *)(param_1 + 0xf0);
  if (1 < iVar7) {
    fVar5 = _DAT_0089096c -
            (local_30 * *(float *)(param_1 + 0x10) +
            local_28 * *(float *)(param_1 + 0x18) + local_2c * *(float *)(param_1 + 0x14));
    fVar4 = local_3c + *(float *)(param_1 + 0x20);
    if (_DAT_00895074 < fVar5) {
      if (*(undefined4 **)(param_1 + 0x2c) == (undefined4 *)0x0) {
        return 0;
      }
      **(undefined4 **)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return 0;
    }
    if ((fVar4 <= _DAT_008b2764) && (fVar5 < _DAT_008b276c || fVar4 < _DAT_008b2768)) {
      iVar1 = iVar7 + 6;
      *(float *)(param_1 + 0x20) = fVar4;
      goto LAB_0072b8fb;
    }
  }
  if (iVar7 == 8) {
    return 1;
  }
  iVar1 = iVar7 + 7;
  *(int *)(param_1 + 0xf0) = iVar7 + 1;
  if (1 < iVar7 + 1) {
    *(float *)(param_1 + 0x10) = local_30;
    *(float *)(param_1 + 0x14) = local_2c;
    *(float *)(param_1 + 0x18) = local_28;
  }
  *(float *)(param_1 + 0x20) = local_3c;
LAB_0072b8fb:
  FUN_00721fc0(param_2,param_3);
  uVar6 = FUN_007c4b80();
  *(undefined1 *)(iVar1 * 0x10 + param_1 + 0xf) = uVar6;
  pfVar2 = (float *)(param_1 + 0x50);
  pfVar3 = (float *)(param_1 + 0x60);
  FUN_0045fc60(pfVar3,pfVar2,param_2,local_3c);
  FUN_0045fd30(*(int *)(param_1 + 0x24) + 0x30,*(int *)(param_1 + 0x24) + 0x40,pfVar3,pfVar2);
  *(float *)(param_1 + 0x100) = *pfVar2 + *pfVar3;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * _DAT_008933d4;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) * _DAT_008933d4;
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * _DAT_008933d4;
  return 0;
}

