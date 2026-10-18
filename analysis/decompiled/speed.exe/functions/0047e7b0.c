/* speed.exe 0047e7b0 FUN_0047e7b0; analysis pseudocode, not buildable source.
 * calls 0045e0d0 FUN_0045e0d0
 * calls 007c4b80 FUN_007c4b80
 * calls 00462520 FUN_00462520
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045f510 FUN_0045f510
 * calls 0047e4d0 FUN_0047e4d0
 * calls 006cf0a0 FUN_006cf0a0
 * calls 0045db30 FUN_0045db30
 * calls 004700d0 FUN_004700d0
 * calls 00468960 FUN_00468960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047e7b0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  if (DAT_009110f4 != _DAT_00890968) {
    DAT_009110f8 = DAT_009110f8 + _DAT_008945ec;
    local_80 = _DAT_008ee260 - _DAT_009110e0;
    local_7c = DAT_008ee264 - _DAT_009110e4;
    local_78 = DAT_008ee268 - DAT_009110e8;
    local_68 = local_78;
    FUN_0045f510(&local_80,&local_80,0x41200000);
    _DAT_008ee260 = DAT_009110f0 + local_80;
    DAT_008ee264 = local_7c + DAT_009110f4;
    _DAT_009110e0 = DAT_009110f0;
    _DAT_009110e4 = DAT_009110f4;
    DAT_008ee268 = local_78 + DAT_009110f8;
    DAT_009110f0 = 0.0;
    DAT_009110f4 = 0.0;
    DAT_009110e8 = DAT_009110f8;
    DAT_009110f8 = 0.0;
    local_68 = DAT_008ee268;
    FUN_00462520();
  }
  if (DAT_00911093 != '\0') {
    DAT_008ee264 = -_DAT_009110c0;
    _DAT_008ee260 = DAT_009110c8;
    DAT_008ee268 = DAT_009110c4;
    DAT_00911093 = '\0';
  }
  if (DAT_00911094 != '\0') {
    _DAT_009110e4 = -_DAT_009110d0;
    _DAT_009110e0 = DAT_009110d8;
    DAT_009110e8 = DAT_009110d4;
    DAT_00911094 = '\0';
  }
  FUN_0047e4d0();
  local_80 = _DAT_009110e0 - _DAT_008ee260;
  local_7c = _DAT_009110e4 - DAT_008ee264;
  local_78 = DAT_009110e8 - DAT_008ee268;
  uVar3 = FUN_007c4b80();
  uVar3 = FUN_007c4b80(uVar3);
  iVar4 = FUN_0045e0d0(uVar3);
  if (((*(short *)(param_1 + 0x90) != 0) || (*(short *)(param_1 + 0x92) != 0)) ||
     (*(float *)(param_1 + 0x80) != _DAT_00890968)) {
    iVar5 = FUN_007c4b80();
    iVar4 = iVar4 + iVar5;
    uVar3 = FUN_007c4b80();
    uVar3 = FUN_007c4b80(uVar3);
    iVar5 = FUN_0045e0d0(uVar3);
    iVar6 = FUN_007c4b80();
    iVar5 = iVar5 + iVar6;
    uVar7 = (ushort)iVar5;
    if ((uVar7 < 0x3ff7) || (0x7fff < uVar7)) {
      if ((uVar7 < 0xc00a) && (0x7fff < uVar7)) {
        iVar5 = 0xc00a;
      }
    }
    else {
      iVar5 = 0x3ff6;
    }
    if (DAT_0091109c == 0) {
      if (DAT_00911098 == 0) {
        fVar2 = param_2 * *(float *)(param_1 + 0x80);
      }
      else {
        fVar2 = _DAT_008edea4 * *(float *)(param_1 + 0x80) * param_2;
      }
    }
    else {
      fVar2 = _DAT_008edea8 * *(float *)(param_1 + 0x80) * param_2;
    }
    DAT_008ee268 = DAT_008ee268 + fVar2;
    local_7c = DAT_008ee264;
    local_78 = DAT_008ee268;
    fVar8 = (float10)FUN_0045dbf0(iVar5);
    fVar9 = (float10)FUN_0045dbf0(iVar4);
    _DAT_009110e0 =
         (float)(fVar9 * (float10)(float)fVar8 * (float10)_DAT_00894b64 + (float10)_DAT_008ee260);
    fVar8 = (float10)FUN_0045dbf0(iVar5);
    fVar9 = (float10)FUN_0045db30(iVar4);
    _DAT_009110e4 =
         (float)(fVar9 * (float10)(float)fVar8 * (float10)_DAT_00894b64 + (float10)DAT_008ee264);
    fVar8 = (float10)FUN_0045db30(iVar5);
    DAT_009110e8 = (float)(fVar8 * (float10)_DAT_00894b64 + (float10)DAT_008ee268);
  }
  if (*(float *)(param_1 + 0x84) == _DAT_00890968) {
    if (*(float *)(param_1 + 0x88) != _DAT_00890968) {
      if (DAT_0091109c == 0) {
        local_78 = param_2;
        if (DAT_00911098 != 0) {
          local_78 = _DAT_008edea4 * param_2;
        }
      }
      else {
        local_78 = _DAT_008edea8 * param_2;
      }
      local_78 = local_78 * *(float *)(param_1 + 0x88);
      iVar5 = *(int *)(param_1 + 0x1c);
      fVar2 = local_78 * *(float *)(iVar5 + 0x50);
      local_7c = local_78 * *(float *)(iVar5 + 0x54);
      local_78 = local_78 * *(float *)(iVar5 + 0x58);
      _DAT_008ee260 = _DAT_008ee260 + fVar2;
      DAT_008ee264 = local_7c + DAT_008ee264;
      DAT_008ee268 = local_78 + DAT_008ee268;
      _DAT_009110e0 = fVar2 + _DAT_009110e0;
      _DAT_009110e4 = local_7c + _DAT_009110e4;
      DAT_009110e8 = local_78 + DAT_009110e8;
    }
  }
  else {
    if (DAT_0091109c == 0) {
      if (DAT_00911098 == 0) {
        local_7c = param_2 * *(float *)(param_1 + 0x84);
      }
      else {
        local_7c = _DAT_008edea4 * *(float *)(param_1 + 0x84) * param_2;
      }
    }
    else {
      local_7c = _DAT_008edea8 * *(float *)(param_1 + 0x84) * param_2;
    }
    fVar2 = local_7c * *(float *)(*(int *)(param_1 + 0x1c) + 0x50);
    local_7c = local_7c * *(float *)(*(int *)(param_1 + 0x1c) + 0x54);
    _DAT_008ee260 = _DAT_008ee260 + fVar2;
    DAT_008ee264 = local_7c + DAT_008ee264;
    _DAT_009110e0 = fVar2 + _DAT_009110e0;
    _DAT_009110e4 = local_7c + _DAT_009110e4;
  }
  if (*(float *)(param_1 + 0x8c) != _DAT_00890968) {
    if (DAT_0091109c == 0) {
      fVar2 = param_2;
      if (DAT_00911098 != 0) {
        fVar2 = _DAT_008edea4 * param_2;
      }
    }
    else {
      fVar2 = _DAT_008edea8 * param_2;
    }
    fVar2 = fVar2 * *(float *)(param_1 + 0x8c);
    fVar8 = (float10)FUN_0045db30(iVar4 + 0x4000);
    fVar1 = (float)(fVar8 * (float10)fVar2);
    fVar8 = (float10)FUN_0045dbf0(iVar4 + 0x4000);
    fVar8 = fVar8 * (float10)fVar2;
    _DAT_008ee260 = (float)((float10)_DAT_008ee260 + fVar8);
    DAT_008ee264 = fVar1 + DAT_008ee264;
    _DAT_009110e0 = (float)(fVar8 + (float10)_DAT_009110e0);
    _DAT_009110e4 = fVar1 + _DAT_009110e4;
  }
  FUN_00468960(local_60,&DAT_008ee260,&DAT_009110e0,0);
  FUN_006cf0a0(local_50,&DAT_008ee260,&DAT_009110e0,local_60);
  if (DAT_00911020 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = 0x32dc;
  }
  FUN_004700d0(local_50,param_2);
  return;
}

