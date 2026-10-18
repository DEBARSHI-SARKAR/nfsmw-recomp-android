/* speed.exe 00758b30 FUN_00758b30; analysis pseudocode, not buildable source.
 * calls 00755140 FUN_00755140
 * calls 00627400 FUN_00627400
 * calls 00621b60 FUN_00621b60
 * calls 005fba00 FUN_005fba00
 * calls 0078f9b0 FUN_0078f9b0
 * calls 00754c30 FUN_00754c30
 * calls 005e97b0 FUN_005e97b0
 * calls 005ddee0 FUN_005ddee0
 * calls 0078a3a0 FUN_0078a3a0
 * calls 005faa20 FUN_005faa20
 * calls 006002c0 FUN_006002c0
 * calls 007c4b80 FUN_007c4b80
 * calls 005dc260 FUN_005dc260
 * calls 0078f8c0 FUN_0078f8c0
 */

void FUN_00758b30(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  ushort local_2c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088105f;
  local_c = ExceptionList;
  local_38 = 0;
  ExceptionList = &local_c;
  FUN_0078a3a0(&local_38,8);
  param_1 = 0;
  FUN_0078a3a0(&param_1,8);
  param_1 = 0;
  FUN_0078a3a0(&param_1,8);
  FUN_0078f8c0(local_2c,0x20);
  iVar2 = FUN_00754c30(&local_3c);
  local_38 = iVar2;
  if (iVar2 != 0) {
    uVar3 = param_1 & 0xff;
    if (uVar3 == 8) {
      if (local_3c != 0.0) {
        local_34 = FUN_00627400(0xc);
        local_4 = 0;
        if (local_34 != 0) {
          FUN_00621b60(*(undefined4 *)((int)local_3c + 8));
        }
        local_4 = 0xffffffff;
      }
    }
    else if (uVar3 == 9) {
      FUN_006002c0();
    }
    else if (uVar3 != 0xb) {
      FUN_005e97b0();
    }
  }
  local_3c = 0.0;
  FUN_0078a3a0(&local_3c,1);
  if (local_3c == 1.4013e-45) {
    if (iVar2 == 0) {
      FUN_0078f9b0();
      FUN_0078f9b0();
      FUN_0078f9b0();
      FUN_0078f9b0();
      FUN_0078f9b0();
      FUN_0078f9b0();
      FUN_0078f9b0();
      local_38 = 0;
      FUN_0078a3a0(&local_38,0x20);
      iVar5 = 4;
      do {
        FUN_0078f9b0();
        local_34 = 0;
        FUN_0078a3a0(&local_34,0x20);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else {
      fVar10 = (float10)FUN_0078f9b0();
      local_3c = (float)fVar10;
      FUN_005ddee0(local_3c);
      FUN_0078f9b0();
      uVar4 = FUN_007c4b80();
      *(undefined4 *)(iVar2 + 0x28) = uVar4;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0x18) = (float)fVar10;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0xfc) = (float)fVar10;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0x100) = (float)fVar10;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0x108) = (float)fVar10;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0x124) = (float)fVar10;
      fVar10 = (float10)FUN_0078f9b0();
      *(float *)(iVar2 + 0x128) = (float)fVar10;
      local_3c = 0.0;
      FUN_0078a3a0(&local_3c,0x20);
      *(float *)(iVar2 + 0x114) = local_3c;
      if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar5 = FUN_005faa20(), iVar5 != 1)) {
        piVar9 = (int *)(iVar2 + 0x13c);
        iVar5 = 4;
        do {
          fVar10 = (float10)FUN_0078f9b0();
          piVar9[-4] = (int)(float)fVar10;
          local_38 = 0;
          FUN_0078a3a0(&local_38,0x20);
          *piVar9 = local_38;
          piVar9 = piVar9 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      else {
        iVar8 = 0;
        iVar5 = FUN_005fba00();
        if (0 < iVar5) {
          do {
            uVar4 = *(undefined4 *)(iVar2 + 0xc);
            fVar10 = (float10)FUN_0078f9b0();
            FUN_005dc260(iVar8,uVar4,(float)fVar10);
            iVar8 = iVar8 + 1;
            iVar5 = FUN_005fba00();
            iVar2 = local_38;
          } while (iVar8 < iVar5);
        }
      }
    }
  }
  iVar5 = 0;
  puVar6 = (ushort *)(local_30 + 0x122e);
  do {
    uVar7 = puVar6[-1];
    if (puVar6[-1] < local_2c[iVar5]) {
      uVar7 = local_2c[iVar5];
    }
    uVar1 = local_2c[iVar5 + 1];
    puVar6[-1] = uVar7;
    uVar7 = *puVar6;
    if (*puVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = local_2c[iVar5 + 2];
    *puVar6 = uVar7;
    uVar7 = puVar6[1];
    if (puVar6[1] < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = local_2c[iVar5 + 3];
    puVar6[1] = uVar7;
    uVar7 = puVar6[2];
    if (puVar6[2] < uVar1) {
      uVar7 = uVar1;
    }
    puVar6[2] = uVar7;
    iVar5 = iVar5 + 4;
    puVar6 = puVar6 + 4;
  } while (iVar5 < 0x10);
  if (*(int *)(local_30 + 0x1144) != 3) {
    *(undefined4 *)(local_30 + 0x1144) = 3;
  }
  FUN_00755140(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),0,param_1 & 0xff);
  ExceptionList = local_c;
  return;
}

