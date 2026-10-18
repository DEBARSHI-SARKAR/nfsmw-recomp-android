/* speed.exe 0047e190 FUN_0047e190; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0045f7c0 FUN_0045f7c0
 * calls 006519e0 FUN_006519e0
 * calls 007c4b80 FUN_007c4b80
 * calls 00516e10 FUN_00516e10
 * calls 0046b6b0 FUN_0046b6b0
 * calls 00525b20 FUN_00525b20
 * calls 006bd940 FUN_006bd940
 * calls 006cf0a0 FUN_006cf0a0
 * calls 004700d0 FUN_004700d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047e190(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  iVar5 = FUN_00516e10();
  if ((iVar5 == 0) || (cVar4 = FUN_00525b20(1), cVar4 == '\0')) {
    local_90 = 0;
    local_8c = 0;
    local_88 = 0x3f800000;
    fVar2 = param_2 * _DAT_008947c0 + *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1b0) = fVar2;
    if (_DAT_0089096c < fVar2) {
      *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
    }
    FUN_0046b6b0(&local_a0,*(undefined4 *)(param_1 + 0x1b0));
    fVar2 = param_2 * _DAT_008947c4;
    fVar3 = fVar2 + *(float *)(param_1 + 0x250);
    *(float *)(param_1 + 0x250) = fVar3;
    if (_DAT_0089096c < fVar3) {
      *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
    }
    FUN_0046b6b0(&local_d0,*(undefined4 *)(param_1 + 0x250));
    fVar2 = fVar2 + *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x110) = fVar2;
    if (_DAT_0089096c < fVar2) {
      *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
    }
    FUN_0046b6b0(local_60,*(undefined4 *)(param_1 + 0x110));
    if (DAT_00911020 == 0) {
      iVar5 = FUN_007c4b80();
      *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) =
           (short)((ulonglong)((longlong)iVar5 * 0xb60b60b7) >> 0x28) -
           ((short)(char)((char)(iVar5 / 0x1680000) + (char)(iVar5 >> 0x1f)) >> 0xf);
    }
    local_a0 = local_a0 - local_d0;
    local_6c = local_9c - local_cc;
    local_78 = local_98 - local_c8;
    fVar2 = SQRT(local_a0 * local_a0 + local_6c * local_6c + local_78 * local_78);
    if (fVar2 < _DAT_0089096c) {
      fVar2 = _DAT_0089096c;
    }
    fVar2 = _DAT_0089096c / fVar2;
    local_80 = local_a0 * fVar2;
    local_7c = local_6c * fVar2;
    local_78 = local_78 * fVar2;
    FUN_0045f7c0(&local_c0,&local_80,&local_90);
    local_c0 = local_c0 * _DAT_00890968;
    local_bc = local_bc * _DAT_00890968;
    local_b0 = 0.0;
    local_ac = 0.0;
    local_a8 = 0.0;
    local_b8 = local_b8 * _DAT_00890968;
    local_d0 = local_d0 + local_c0;
    local_cc = local_cc + local_bc;
    FUN_006bd940(&local_b0,*(int *)(param_1 + 0x254) + 0x50,&local_b0);
    local_d0 = local_b0 + local_d0;
    local_cc = local_ac + local_cc;
    local_c8 = local_a8 + local_c8;
    FUN_006cf0a0(local_50,&local_a0,&local_d0,&local_90);
    fVar6 = (float10)FUN_0045f340(*(int *)(param_1 + 0x254) + 0x20,&local_a0);
    if (DAT_00911020 == 0) {
      *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = (float)fVar6;
    }
    pfVar1 = (float *)(param_1 + 600);
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 600) * _DAT_00894780;
    FUN_006519e0(pfVar1,param_2,0,0);
    fVar2 = (float)fVar6 + *pfVar1;
    if (fVar2 < _DAT_00890d3c) {
      fVar2 = _DAT_00890d3c;
    }
    if (((*(char *)(param_1 + 0x284) != '\0') && (DAT_00911020 == 0)) &&
       (*(float *)(*(int *)(param_1 + 0x1c) + 0xb4) = fVar2 + *pfVar1, DAT_00911020 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0x40f00000;
    }
    FUN_004700d0(local_50,param_2);
  }
  return;
}

