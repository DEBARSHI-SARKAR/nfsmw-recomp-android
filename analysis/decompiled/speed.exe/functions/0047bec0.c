/* speed.exe 0047bec0 FUN_0047bec0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0046f020 FUN_0046f020
 * calls 00467420 FUN_00467420
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0047bec0(int *param_1,undefined4 param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  float local_70;
  float local_6c;
  float local_68;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_38;
  float fStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  if (param_3 != 0) {
    local_24 = 5;
    local_20 = 0;
    local_1c = 0x42a00000;
    local_18 = 0x3d4ccccd;
    local_14 = &DAT_008edfb0;
    FUN_0046f020(&local_50,*(undefined4 *)(param_3 + 0x10));
    pfVar11 = (float *)FUN_00454810(0xf0c9e498,0);
    if (pfVar11 == (float *)0x0) {
      pfVar11 = (float *)FUN_006269b0(4);
    }
    fVar1 = *pfVar11;
    pfVar11 = (float *)FUN_00454810(0xf0c9e498,1);
    if (pfVar11 == (float *)0x0) {
      pfVar11 = (float *)FUN_006269b0(4);
    }
    local_6c = local_48;
    local_70 = local_50 * param_4;
    if (*(char *)(param_3 + 0xbe) != '\0') {
      local_70 = local_70 * _DAT_00890d44;
    }
    if (_DAT_00894820 < *(float *)(param_3 + 0x10)) {
      fVar3 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x40) +
              *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x44) +
              *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x48);
      fVar4 = _DAT_00890968;
      if ((_DAT_00890968 < fVar3) && (fVar4 = fVar3, _DAT_00894b64 < fVar3)) {
        fVar4 = _DAT_00894b64;
      }
      local_70 = _DAT_008945b4 * fVar4 * _DAT_00890ea8 + local_70;
      local_6c = (_DAT_00894594 - local_48) * fVar4 * _DAT_00890ea8 + local_48;
    }
    if (*(char *)(param_3 + 0xbf) != '\0') {
      local_70 = local_70 + _DAT_008945b4;
      local_6c = local_6c * _DAT_008945e8;
    }
    if ((*(char *)(param_3 + 0xbc) != '\0') && (_DAT_00894820 < *(float *)(param_3 + 0x10))) {
      local_70 = 0.3;
      local_6c = 2.0;
    }
    if ((*(char *)(param_3 + 0xbd) != '\0') && (_DAT_00894820 < *(float *)(param_3 + 0x10))) {
      local_70 = 0.3;
      local_6c = 5.0;
    }
    local_68 = local_4c * fVar1 * param_5;
    fVar1 = local_44 * *pfVar11;
    cVar10 = (**(code **)(*param_1 + 0x24))();
    fVar3 = _DAT_008edf8c;
    if (cVar10 == '\0') {
      local_70 = local_70 * _DAT_008910f0;
      local_68 = local_68 * _DAT_008910f0;
    }
    iVar2 = param_1[7];
    fVar7 = _DAT_008edf70 * local_6c;
    fVar8 = _DAT_008edf74 * local_6c;
    fVar9 = _DAT_008edf7c * local_6c;
    fVar4 = _DAT_008edf80 * local_70;
    fVar5 = _DAT_008edf84 * local_70;
    fVar6 = _DAT_008edf88 * local_70;
    *(float *)(iVar2 + 0x78) = _DAT_008edf78 * local_6c;
    *(float *)(iVar2 + 0x7c) = fVar9;
    *(float *)(iVar2 + 0x70) = fVar7;
    *(float *)(iVar2 + 0x74) = fVar8;
    iVar2 = param_1[7];
    *(float *)(iVar2 + 0x80) = fVar4;
    *(float *)(iVar2 + 0x84) = fVar5;
    *(float *)(iVar2 + 0x88) = fVar6;
    *(float *)(iVar2 + 0x8c) = fVar3 * local_70;
    fVar7 = _DAT_008edfac;
    fVar3 = _DAT_008edf90 * fVar1;
    iVar2 = param_1[7];
    fVar4 = _DAT_008edf94 * fVar1;
    fStack_38 = _DAT_008edf98 * fVar1;
    fStack_34 = _DAT_008edf9c * fVar1;
    fVar1 = _DAT_008edfa0 * local_68;
    fVar5 = _DAT_008edfa4 * local_68;
    fVar6 = _DAT_008edfa8 * local_68;
    *(float *)(iVar2 + 0x98) = fStack_38;
    *(float *)(iVar2 + 0x9c) = fStack_34;
    *(float *)(iVar2 + 0x90) = fVar3;
    *(float *)(iVar2 + 0x94) = fVar4;
    iVar2 = param_1[7];
    *(float *)(iVar2 + 0xa0) = fVar1;
    *(float *)(iVar2 + 0xa4) = fVar5;
    *(float *)(iVar2 + 0xa8) = fVar6;
    *(float *)(iVar2 + 0xac) = fVar7 * local_68;
    FUN_00467420(param_2,(float)DAT_00925ae8 * _DAT_00890984,0x3f800000);
  }
  return;
}

