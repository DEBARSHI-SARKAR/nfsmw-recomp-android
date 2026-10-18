/* speed.exe 007755a0 FUN_007755a0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 00765c30 FUN_00765c30
 * calls 00774c50 FUN_00774c50
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 007660a0 FUN_007660a0
 * calls 00774430 FUN_00774430
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007755a0(int param_1,float param_2,float *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  short sVar8;
  float *pfVar9;
  short extraout_DX;
  int iVar10;
  float10 fVar11;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  do {
    fVar4 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xcc);
    fVar5 = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd0);
    iVar10 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
    fVar11 = (float10)FUN_005c5e80(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
    if ((float10)_DAT_00890dc4 <= fVar11) {
      local_34 = (float)fVar11;
    }
    else {
      local_34 = 0.01;
    }
    local_30 = param_2 / local_34;
    local_2c = param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3;
    fVar11 = (float10)FUN_005c5e80(local_2c);
    local_2c = (float)fVar11;
    fVar4 = local_30 + *(float *)(param_1 + 0x90);
    if (fVar4 < _DAT_0089096c != (fVar4 == _DAT_0089096c)) {
      param_3 = (float *)(local_30 + *(float *)(param_1 + 0x90));
      *(float **)(param_1 + 0x90) = param_3;
      fVar4 = _DAT_00890968;
      if ((_DAT_00890968 < (float)param_3) &&
         (fVar4 = (float)param_3, _DAT_0089096c <= (float)param_3)) {
        fVar4 = _DAT_0089096c;
      }
      *(float *)(param_1 + 0x90) = fVar4;
      cVar7 = FUN_007660a0(param_2);
      if (cVar7 != '\0') {
        fVar4 = *(float *)(param_1 + 0x2c4);
        param_3 = (float *)fVar4;
        FUN_0076f4a0(iVar10,fVar4,0);
        FUN_0076f4a0(iVar10,fVar4,1);
        FUN_0076f140(iVar10,1);
        FUN_0076f140(iVar10,0);
        FUN_00765c30(iVar10);
      }
      FUN_007753e0(iVar10);
      return;
    }
    FUN_007660a0((_DAT_0089096c - *(float *)(param_1 + 0x90)) * local_34);
    local_38 = *(undefined4 *)(param_1 + 0x2c4);
    cVar7 = *(char *)(param_1 + 0x8c);
    iVar2 = *(int *)(param_1 + 0x78);
    pcVar1 = (char *)(param_1 + 0x8c);
    param_2 = (float)((uint)param_2 & 0xffffff00);
    pfVar9 = param_3;
    if (iVar2 == 2) {
      if (local_2c == _DAT_00890968) {
        if (cVar7 == '\0') {
          local_2c = (float)(int)*(char *)(iVar10 + 0x15);
          local_18 = (float)(int)*(char *)(iVar10 + 0x13) * _DAT_00890bf0;
          local_14 = (float)(int)*(char *)(iVar10 + 0x14) * _DAT_00890bf0;
          local_10 = (float)(int)local_2c * _DAT_00890bf0;
          local_24 = -local_18;
          local_20 = -local_14;
          local_1c = -local_10;
        }
        else {
          local_2c = (float)(int)*(char *)(iVar10 + 0x12);
          local_24 = (float)(int)*(char *)(iVar10 + 0x10) * _DAT_008b5b30;
          local_20 = (float)(int)*(char *)(iVar10 + 0x11) * _DAT_008b5b30;
          local_1c = (float)(int)local_2c * _DAT_008b5b30;
          local_c = local_24;
          local_8 = local_20;
          local_4 = local_1c;
        }
        pfVar9 = &local_24;
      }
LAB_007757e7:
      sVar8 = FUN_00774430(pfVar9,&local_38,pcVar1,&param_2);
    }
    else {
      if (iVar2 == 3) goto LAB_007757e7;
      sVar8 = extraout_DX;
      if (iVar2 == 1) {
        sVar8 = FUN_00774c50(param_3,&local_38,pcVar1,&param_2);
      }
    }
    if (((*(short *)(param_1 + 0x8e) == sVar8) && (*pcVar1 == cVar7)) &&
       (*(undefined1 *)(param_1 + 0x2c0) = 1, *(int *)(param_1 + 0x78) == 1)) {
      return;
    }
    *(short *)(param_1 + 0x8e) = sVar8;
    iVar10 = sVar8 * 0x16 + DAT_009b38c0;
    if (param_2._0_1_ == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x2c4);
      local_28 = uVar3;
      FUN_0076f4a0(iVar10,uVar3,0);
      FUN_0076f4a0(iVar10,uVar3,1);
    }
    else {
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 0x55) != '\0') {
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x100);
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x130);
      }
      FUN_0076f4a0(iVar10,local_38,0);
      *(undefined4 *)(param_1 + 0x2c4) = local_38;
      *(undefined4 *)(param_1 + 0x2cc) = local_38;
      *(undefined4 *)(param_1 + 0x2c8) = local_38;
    }
    FUN_0076f140(iVar10,1);
    FUN_0076f140(iVar10,0);
    FUN_00765c30(iVar10);
    fVar4 = _DAT_0089096c - *(float *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xd4);
    param_2 = (local_30 - fVar4) * local_34;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x90) = 0;
  } while( true );
}

