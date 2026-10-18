/* speed.exe 006db310 FUN_006db310; analysis pseudocode, not buildable source.
 * calls 006bdb50 FUN_006bdb50
 * calls 006da9b0 FUN_006da9b0
 * calls 006c0d50 FUN_006c0d50
 * calls 006c0dc0 FUN_006c0dc0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006db310(int param_1,int param_2,float param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  float local_74;
  float local_70;
  int *local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_5c;
  float local_58;
  undefined1 auStack_50 [76];
  
  if (DAT_00982bcc == '\0') {
    return;
  }
  local_64 = DAT_00925970;
  iVar1 = *(int *)(param_1 + 0x40);
  _DAT_00987f44 = *(undefined4 *)(iVar1 + 0x44);
  _DAT_00987f40 = *(undefined4 *)(iVar1 + 0x40);
  _DAT_00987f48 = *(float *)(iVar1 + 0x48);
  _DAT_00987f10 = 1.0;
  _DAT_00987f14 = 0;
  _DAT_00987f18 = 0;
  _DAT_00987f1c = 0;
  _DAT_00987f20 = 0;
  _DAT_00987f24 = 1.0;
  _DAT_00987f28 = 0;
  _DAT_00987f2c = 0;
  _DAT_00987f30 = 0;
  _DAT_00987f34 = 0;
  _DAT_00987f38 = 1.0;
  _DAT_00987f3c = 0;
  _DAT_00987f4c = 0x3f800000;
  local_68 = *(int *)(param_1 + 4);
  local_84 = 1.0;
  local_78 = 0;
  local_74 = 0.0;
  if (param_2 == 0) {
    local_84 = 1.0;
  }
  else if (param_2 == 1) {
    local_84 = 0.9;
  }
  else {
    if (param_2 == 2) {
      local_84 = 0.8;
    }
    else {
      if (param_2 != 4) goto LAB_006db461;
      local_84 = 0.06;
      _DAT_00987f38 = -1.0;
      local_74 = 130.0;
    }
    local_78 = 1;
  }
LAB_006db461:
  if ((local_68 < 0x12) || (0x17 < local_68)) {
    if (local_68 == 3) {
      local_84 = 0.03;
    }
  }
  else {
    local_84 = 0.0065;
    if (DAT_008f9364 == 0) {
      _DAT_00987f10 = 1.0;
      _DAT_00987f14 = 0;
      _DAT_00987f18 = 0;
      _DAT_00987f1c = 0;
      _DAT_00987f20 = 0;
      _DAT_00987f24 = 1.0;
      _DAT_00987f28 = 0;
      _DAT_00987f2c = 0;
      _DAT_00987f30 = 0;
      _DAT_00987f34 = 0;
      _DAT_00987f3c = 0;
      _DAT_00987f40 = 0;
      _DAT_00987f44 = 0;
      _DAT_00987f48 = 0.0;
      _DAT_00987f4c = 0x3f800000;
      return;
    }
  }
  local_5c = _DAT_00987f44;
  local_58 = _DAT_00987f48;
  if (*(char *)(DAT_0093dec4 + 0x40) == '\0') {
    FUN_006c0d50(param_2);
    FUN_006c0dc0(param_1,param_2,&local_6c,&local_80,&local_7c,&local_70);
    local_80 = local_80 * param_3;
    local_7c = local_7c * param_3;
    if ((param_2 == 2) && (local_70 == _DAT_00890968)) {
      return;
    }
    local_6c = *(int **)(DAT_0093decc + 0x48);
    iVar1 = *local_6c;
    uVar3 = FUN_007c4b80();
    iVar4 = FUN_007c4b80();
    uVar5 = FUN_007c4b80();
    uVar6 = FUN_007c4b80();
    (**(code **)(iVar1 + 0x68))
              (local_6c,*(undefined4 *)(*(int *)(DAT_0093decc + 0x44) + 0x45c),
               ((uVar3 & 0xff | iVar4 << 8) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff);
  }
  if ((local_68 < 1) || (3 < local_68)) {
    _DAT_00987f10 = _DAT_00987f10 * local_84;
    _DAT_00987f24 = _DAT_00987f24 * local_84;
    _DAT_00987f38 = _DAT_00987f38 * local_84;
    _DAT_00987f48 = _DAT_00987f48 + local_74;
  }
  else {
    if (DAT_008f9360 == 0) {
      return;
    }
    local_84 = _DAT_008f935c * local_84;
    _DAT_00987f10 = _DAT_00987f10 * local_84;
    _DAT_00987f24 = _DAT_00987f24 * local_84;
    _DAT_00987f38 = local_84 * _DAT_00987f38;
    _DAT_00987f48 = _DAT_00987f48 + local_74;
    if (local_78 != 0) {
      sVar2 = FUN_007c4b80();
      DAT_00988574 = DAT_00988574 + sVar2;
      FUN_006bdb50(auStack_50,DAT_00988574);
      D3DXMatrixMultiply(&DAT_00987f10,auStack_50,&DAT_00987f10);
    }
  }
  FUN_006da9b0(&DAT_00986f50,&DAT_00987f10,0,0x20000,0);
  return;
}

