/* speed.exe 00415f60 FUN_00415f60; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00408bc0 FUN_00408bc0
 * calls 00410220 FUN_00410220
 * calls 0076e220 FUN_0076e220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00415f60(int param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  undefined4 local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  undefined1 local_5dc [140];
  char local_550;
  undefined2 local_54e;
  float local_54c;
  float local_544;
  float local_540;
  float local_53c;
  float local_520;
  float local_518;
  undefined4 local_318;
  undefined1 local_2f4 [140];
  char local_268;
  short local_266;
  undefined4 local_264;
  float local_25c;
  float local_258;
  float local_254;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867be6;
  local_c = ExceptionList;
  local_5ec = *(float *)(param_1 + 0x90);
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  if (param_3 != '\0') {
    local_5ec = local_5ec + _DAT_00890da4;
  }
  if (local_5ec < *(float *)(param_1 + 4)) {
    FUN_0077b9e0();
    local_4 = 0;
    FUN_00408bc0(local_5dc,param_1 + 0x50);
    local_60c = local_544 - *(float *)(param_1 + 0x84);
    local_5f8 = local_540 - *(float *)(param_1 + 0x88);
    local_604 = local_53c - *(float *)(param_1 + 0x8c);
    local_608 = 0.0;
    local_5fc = local_60c;
    local_5f4 = local_604;
    FUN_00410220(&local_60c);
    local_5ec = (_DAT_0089096c -
                (local_60c * *(float *)(param_1 + 0x38) +
                local_608 * *(float *)(param_1 + 0x3c) + local_604 * *(float *)(param_1 + 0x40))) *
                _DAT_008910f8 + local_5ec;
    if (local_5ec < *(float *)(param_1 + 4)) {
      fVar1 = *(float *)(param_1 + 0x60);
      local_600 = *(float *)(param_1 + 0x60);
      local_5e8 = (((local_544 - *(float *)(param_1 + 0x84)) * fVar1 + *(float *)(param_1 + 0x84)) -
                  *(float *)(param_1 + 0x44)) * local_600 + *(float *)(param_1 + 0x44);
      local_5e4 = (((local_540 - *(float *)(param_1 + 0x88)) * fVar1 + *(float *)(param_1 + 0x88)) -
                  *(float *)(param_1 + 0x48)) * local_600 + *(float *)(param_1 + 0x48);
      local_5e0 = (((local_53c - *(float *)(param_1 + 0x8c)) * fVar1 + *(float *)(param_1 + 0x8c)) -
                  *(float *)(param_1 + 0x4c)) * local_600 + *(float *)(param_1 + 0x4c);
      FUN_0077b9e0();
      local_4._0_1_ = 1;
      FUN_00408bc0(local_2f4,&local_5e8);
      local_60c = local_25c - *(float *)(param_1 + 0x84);
      local_5f8 = local_258 - *(float *)(param_1 + 0x88);
      local_604 = local_254 - *(float *)(param_1 + 0x8c);
      local_608 = 0.0;
      local_5fc = local_60c;
      local_5f4 = local_604;
      FUN_00410220(&local_60c);
      fVar3 = local_60c;
      fVar1 = local_604 * *(float *)(param_1 + 0x40);
      fVar2 = local_608 * *(float *)(param_1 + 0x3c);
      local_60c = local_520;
      local_604 = local_518;
      local_608 = 0.0;
      local_600 = (_DAT_0089096c - (fVar3 * *(float *)(param_1 + 0x38) + fVar2 + fVar1)) *
                  _DAT_008910f4;
      FUN_00410220(&local_60c);
      fVar1 = _DAT_0089096c -
              (local_60c * *(float *)(param_1 + 0x38) +
              local_608 * *(float *)(param_1 + 0x3c) + local_604 * *(float *)(param_1 + 0x40));
      fVar1 = local_600 + local_5ec + fVar1 + fVar1;
      if ((local_266 != *(short *)(param_1 + 0x5c)) && (local_266 != *(short *)(param_1 + 0x5e))) {
        fVar1 = fVar1 + _DAT_00890d3c;
      }
      if (fVar1 < *(float *)(param_1 + 4)) {
        *(float *)(param_1 + 4) = fVar1;
        local_5fc = (float)CONCAT22(local_5fc._2_2_,local_266);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x80);
        *(float *)(param_1 + 0x18) = local_5fc;
        *(int *)(param_1 + 0x1c) = (int)local_268;
        *(undefined4 *)(param_1 + 0x20) = local_264;
        *(undefined4 *)(param_1 + 0x24) = local_30;
        local_5f4 = local_54c;
        local_5fc = (float)CONCAT22(local_5fc._2_2_,local_54e);
        local_5f0 = local_318;
        *(float *)(param_1 + 0x28) = local_5fc;
        *(int *)(param_1 + 0x2c) = (int)local_550;
        *(float *)(param_1 + 0x30) = local_54c;
        *(undefined4 *)(param_1 + 0x34) = local_318;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0076e220();
    }
    local_4 = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = local_c;
  return;
}

