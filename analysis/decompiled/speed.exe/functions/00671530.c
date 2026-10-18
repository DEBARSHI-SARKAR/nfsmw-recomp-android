/* speed.exe 00671530 FUN_00671530; analysis pseudocode, not buildable source.
 * calls 0066a4b0 FUN_0066a4b0
 * calls 00401670 FUN_00401670
 * calls 0045a430 FUN_0045a430
 * calls 005c5e80 FUN_005c5e80
 * calls 006e9660 FUN_006e9660
 * calls 00789cc0 FUN_00789cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00671530(int param_1,float *param_2,float *param_3,float param_4,float *param_5,float param_6,
            float param_7,char param_8,undefined4 param_9,float param_10)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  undefined2 extraout_var;
  uint uVar7;
  float10 fVar9;
  float local_20;
  float local_1c;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined3 uVar8;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a868;
  local_c = ExceptionList;
  pfVar1 = (float *)(param_1 + 0x7c);
  ExceptionList = &local_c;
  FUN_00401670(param_1 + 0x6c,param_4,pfVar1);
  pfVar2 = (float *)(param_1 + 0x4c);
  *pfVar2 = *(float *)((int)param_4 + 0x30) + *pfVar1;
  *(float *)(param_1 + 0x50) = *(float *)((int)param_4 + 0x34) + *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x54) = *(float *)((int)param_4 + 0x38) + *(float *)(param_1 + 0x84);
  fVar4 = *(float *)(param_1 + 0x80) - param_5[1];
  fVar3 = *(float *)(param_1 + 0x84) - param_5[2];
  local_20 = fVar3 * param_2[1] - fVar4 * param_2[2];
  local_1c = (*pfVar1 - *param_5) * param_2[2] - fVar3 * *param_2;
  local_18 = fVar4 * *param_2 - (*pfVar1 - *param_5) * param_2[1];
  fVar4 = local_20 + *param_3;
  fVar3 = param_3[1];
  fVar5 = local_18 + param_3[2];
  *(float *)(param_1 + 0x8c) = fVar4;
  *(float *)(param_1 + 0x90) = local_1c + fVar3;
  *(float *)(param_1 + 0x94) = fVar5;
  *pfVar2 = *pfVar1 + *(float *)((int)param_4 + 0x30);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x80) + *(float *)((int)param_4 + 0x34);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x84) + *(float *)((int)param_4 + 0x38);
  param_4 = -((local_1c + fVar3) * param_6);
  if (param_4 <= _DAT_00890968) {
    param_4 = 0.0;
  }
  fVar9 = (float10)FUN_005c5e80(fVar4 * fVar4 + fVar5 * fVar5);
  fVar9 = fVar9 * (float10)param_6 + (float10)param_4 + (float10)param_7;
  if ((float10)(param_10 * _DAT_008933d4) <= fVar9) {
    fVar9 = (float10)(param_10 * _DAT_008933d4);
  }
  *(float *)(param_1 + 0x34) = (float)fVar9;
  fVar3 = *(float *)(param_1 + 0x78);
  uVar7 = CONCAT22(extraout_var,
                   (ushort)(fVar3 < _DAT_00890968) << 8 |
                   (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                   (ushort)(fVar3 == _DAT_00890968) << 0xe);
  if (fVar3 >= _DAT_00890968 && (fVar3 == _DAT_00890968) == 0) {
    uVar8 = (undefined3)(uVar7 >> 8);
    uVar7 = CONCAT31(uVar8,param_8);
    if (param_8 != '\0') {
      uVar7 = CONCAT31(uVar8,1);
      goto LAB_006716c8;
    }
  }
  uVar7 = uVar7 & 0xffffff00;
LAB_006716c8:
  uVar6 = FUN_00789cc0(pfVar2,param_1 + 0x3c,uVar7,param_9,1);
  FUN_006e9660(*(undefined4 *)(param_1 + 0x38));
  local_4 = 0;
  FUN_0066a4b0(&local_20);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar6;
}

