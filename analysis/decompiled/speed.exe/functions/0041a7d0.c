/* speed.exe 0041a7d0 FUN_0041a7d0; analysis pseudocode, not buildable source.
 * calls 00401da0 FUN_00401da0
 * calls 00401c10 FUN_00401c10
 * calls 00401ae0 FUN_00401ae0
 * calls 0045dc10 FUN_0045dc10
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 005c81b0 thunk_FUN_0045dac0
 * calls 006da9b0 FUN_006da9b0
 * calls 006e8df0 FUN_006e8df0
 * calls 0045f7c0 FUN_0045f7c0
 * calls 006bde60 FUN_006bde60
 * calls 00401dc0 FUN_00401dc0
 * calls 0045f490 FUN_0045f490
 * calls 006bf530 FUN_006bf530
 * calls 00401d10 FUN_00401d10
 * calls 00405ed0 FUN_00405ed0
 * calls 0045dbf0 FUN_0045dbf0
 * calls 004102f0 FUN_004102f0
 * calls 00401850 FUN_00401850
 * calls 0045f510 FUN_0045f510
 * calls 004022e0 FUN_004022e0
 * calls 00402240 FUN_00402240
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041a7d0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_2 + 4) != 1) {
    return;
  }
  if (DAT_009885c8 != 0) {
    return;
  }
  if (0 < DAT_0091cae4) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x74);
  if (iVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x44);
  if (iVar2 == param_2 + 0x44) {
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 == 4) {
    return;
  }
  if (*(int *)(iVar2 + 8) != 1) {
    return;
  }
  local_ac = *(float *)(param_1 + 0x58);
  local_a8 = *(undefined4 *)(param_1 + 0x5c);
  local_a4 = *(undefined4 *)(param_1 + 0x60);
  fVar8 = (float10)FUN_00402240(*(int *)(iVar2 + 0x18) + 0x200);
  if (iVar4 == 1) {
    fVar3 = (*(float *)(param_1 + 0x374) + *(float *)(param_1 + 0x374) + _DAT_00890d44) *
            DAT_009259bc + *(float *)(param_1 + 0x36c);
    *(float *)(param_1 + 0x36c) = fVar3;
    fVar9 = (float10)thunk_FUN_0045dac0(fVar3,0x3f800000);
LAB_0041a8de:
    *(float *)(param_1 + 0x36c) = (float)fVar9;
  }
  else if (_DAT_00890968 < *(float *)(param_1 + 0x36c)) {
    fVar9 = (float10)FUN_00401dc0(*(float *)(param_1 + 0x36c) - DAT_009259bc * _DAT_00890d44,0);
    goto LAB_0041a8de;
  }
  fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x36c) * (float10)_DAT_00890510);
  local_68 = (float)(fVar9 * (float10)_DAT_00890cd4 + (float10)_DAT_0089096c);
  FUN_00401c10(param_1 + 0x68,(float)fVar8,&local_ac,&local_ac);
  iVar4 = *(int *)(iVar2 + 0x18);
  local_5c = -local_ac;
  local_60 = local_a4;
  local_58 = local_a8;
  FUN_006bde60(local_50,iVar4);
  uVar1 = *(ushort *)(iVar4 + 0xc4);
  uVar7 = uVar1 >> 1;
  iVar4 = FUN_006e8df0();
  if (iVar4 == 1) {
    uVar7 = uVar1 >> 2;
  }
  local_d8 = 1.0;
  iVar4 = FUN_006bf530();
  if ((iVar4 == 2) && (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x39) != '\0')) {
    local_d8 = 1.5;
  }
  fVar8 = (float10)FUN_0045dbf0(uVar7);
  uVar5 = FUN_007c4b80();
  FUN_0045dc10(&local_84,&local_64,uVar5);
  local_9c = local_84 * (float)(fVar8 + fVar8);
  local_a0 = 0;
  local_98 = local_64 * (float)(fVar8 + fVar8) * local_d8;
  thunk_FUN_006bd940(&local_a0,local_50,&local_a0);
  FUN_004102f0(&local_d0,&local_60);
  local_c8 = 0.0;
  FUN_0045f490(&local_d0,&local_d0);
  fVar8 = (float10)FUN_00401850(local_cc,local_d0);
  if (*(char *)(param_1 + 0x364) != '\0') {
    fVar10 = (float10)FUN_00401d10((float)((float10)*(float *)(param_1 + 0x368) - fVar8));
    fVar9 = (float10)FUN_00401d10((float)(fVar10 - (float10)_DAT_00890510));
    fVar11 = (float10)FUN_00401da0((float)fVar10,(float)fVar9);
    fVar9 = (float10)FUN_00401ae0((float)fVar11,0,0x40490fdb);
    fVar12 = (fVar9 * (float10)_DAT_00891210 + (float10)_DAT_00890f14) * (float10)DAT_009259bc *
             (float10)_DAT_00890510;
    fVar9 = fVar12;
    if ((float)fVar8 < *(float *)(param_1 + 0x368)) {
      fVar9 = fVar12 * (float10)_DAT_00890da8;
    }
    if (_DAT_0089050c < (float)fVar10) {
      fVar9 = fVar9 * (float10)_DAT_00890da8;
    }
    fVar10 = (float10)(float)fVar11;
    if (fVar10 < fVar12 == (fVar10 == fVar12)) {
      *(float *)(param_1 + 0x368) = (float)(fVar9 + (float10)*(float *)(param_1 + 0x368));
    }
    else {
      *(float *)(param_1 + 0x368) = (float)fVar8;
    }
    if (_DAT_0089050c < *(float *)(param_1 + 0x368)) {
      fVar8 = (float10)*(float *)(param_1 + 0x368) - (float10)_DAT_00890510;
    }
    else {
      if ((float10)_DAT_0089120c <= (float10)*(float *)(param_1 + 0x368)) goto LAB_0041ab68;
      fVar8 = (float10)*(float *)(param_1 + 0x368) + (float10)_DAT_00890510;
    }
  }
  *(float *)(param_1 + 0x368) = (float)fVar8;
LAB_0041ab68:
  fVar8 = (float10)*(float *)(param_1 + 0x368) * (float10)_DAT_0089096c;
  fVar9 = (float10)fcos(fVar8);
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0x3f800000;
  fVar8 = (float10)fsin(fVar8);
  local_d0 = (float)(fVar9 * (float10)_DAT_00890864);
  local_cc = (float)fVar8 * _DAT_00890864;
  local_c8 = local_c8 * _DAT_00890864;
  FUN_0045f7c0(&local_80,&local_c0,&local_d0);
  FUN_0045f510(&local_80,&local_80,0x3e4ccccd);
  FUN_0045f7c0(&local_c0,&local_d0,&local_80);
  FUN_0045f510(&local_c0,&local_c0,0x3e4ccccd);
  puVar6 = (undefined4 *)FUN_00405ed0(1);
  fVar3 = local_68;
  if (puVar6 != (undefined4 *)0x0) {
    FUN_004022e0(local_68);
    FUN_004022e0(fVar3);
    FUN_004022e0(fVar3);
    *puVar6 = local_80;
    puVar6[1] = local_7c;
    puVar6[3] = 0;
    puVar6[2] = local_78;
    puVar6[4] = local_c0;
    puVar6[7] = 0;
    puVar6[5] = local_bc;
    puVar6[6] = local_b8;
    puVar6[8] = local_d0;
    puVar6[9] = local_cc;
    puVar6[0xb] = 0;
    puVar6[10] = local_c8;
    puVar6[0xc] = local_a0;
    puVar6[0xf] = 0x3f800000;
    puVar6[0xd] = local_9c;
    puVar6[0xe] = local_98;
    FUN_006da9b0(*(undefined4 *)(param_1 + 100),puVar6,0,0,0);
    *(undefined1 *)(param_1 + 0x364) = 1;
  }
  return;
}

