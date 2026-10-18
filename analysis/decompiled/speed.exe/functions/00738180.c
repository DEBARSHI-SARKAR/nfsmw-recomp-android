/* speed.exe 00738180 FUN_00738180; analysis pseudocode, not buildable source.
 * calls 006be750 FUN_006be750
 * calls 00444fe0 FUN_00444fe0
 * calls 00460bf0 FUN_00460bf0
 * calls 006c0a30 FUN_006c0a30
 * calls 00503400 FUN_00503400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738180(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar3 = DAT_00915f84;
  uVar1 = DAT_00915f84 + 0x40;
  if (DAT_00915f88 <= DAT_00915f84 + 0x40) {
    DAT_00915f98 = DAT_00915f98 + 0x40;
    DAT_00915f94 = 1;
    uVar3 = 0;
    uVar1 = DAT_00915f84;
  }
  DAT_00915f84 = uVar1;
  FUN_00444fe0(uVar3,param_2);
  if (_DAT_00891058 <=
      (*(float *)(uVar3 + 0x18) + *(float *)(uVar3 + 8)) * _DAT_00890968 + *(float *)(uVar3 + 0x28))
  {
    FUN_006c0a30();
    uVar2 = FUN_00460bf0("2PLAYERHEADLIGHT1",1,0);
    uVar2 = FUN_00503400(uVar2);
    local_b0 = _DAT_009034e4 - _DAT_0090350c;
    local_ac = _DAT_009b096c - _DAT_00903514;
    local_30 = DAT_00903524;
    local_2c = DAT_00903524;
    local_28 = DAT_00903524;
    local_a0 = _DAT_009034fc + _DAT_009034e4;
    local_24 = DAT_00903524;
    local_9c = _DAT_009b096c - _DAT_00903504;
    local_a8 = 0;
    local_98 = 0;
    local_78 = 0;
    local_80 = _DAT_009034e4 - _DAT_00903510;
    local_88 = 0;
    local_7c = _DAT_00903518 + _DAT_009b096c;
    local_90 = _DAT_00903500 + _DAT_009034e4;
    local_8c = _DAT_00903508 + _DAT_009b096c;
    FUN_006be750(&local_b0,uVar2,uVar3,0,0);
  }
  return;
}

