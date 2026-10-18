/* speed.exe 006f2850 FUN_006f2850; analysis pseudocode, not buildable source.
 * calls 00672e80 FUN_00672e80
 * calls 00455fd0 FUN_00455fd0
 * calls 007897c0 FUN_007897c0
 * calls 005cc240 FUN_005cc240
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 0067c310 FUN_0067c310
 * calls 0056f210 FUN_0056f210
 * calls 00679580 FUN_00679580
 * calls 005d59f0 FUN_005d59f0
 * calls 00452380 FUN_00452380
 * calls 004e4ea0 FUN_004e4ea0
 * calls 004040f0 FUN_004040f0
 * calls 00735ad0 FUN_00735ad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f2850(int param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  int local_88;
  int *local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  uint local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  float *local_48;
  int local_44;
  int local_40;
  float *local_3c;
  undefined4 local_38;
  undefined1 local_34 [20];
  undefined1 local_20 [8];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087eaa8;
  local_c = ExceptionList;
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_a0 = 0.0;
  iVar9 = 0;
  ExceptionList = &local_c;
  local_80 = param_1;
  do {
    iVar3 = FUN_00735ad0(iVar9);
    if (iVar3 != 0) {
      FUN_004e4ea0(*(undefined4 *)(iVar3 + 0xfa4),0,0);
      local_4 = 0;
      if (*(char *)(iVar3 + 0xfa8) != '\0') {
        if (*(char *)(DAT_0091cf90 + 0x142) == '\0') {
          *(undefined4 *)(iVar3 + 0x10dc) = 0;
        }
        else if ((*(char *)(DAT_0091cf90 + 0x15f) != '\0') &&
                (iVar4 = FUN_00672e80(local_34,6), 0 < iVar4)) {
          *(undefined4 *)(iVar3 + 0x10dc) = 1;
        }
        FUN_0056f210(local_34);
      }
      if (*(char *)(DAT_0091cf90 + 0x15f) != '\0') {
        local_b8 = 0.0;
        local_b4 = 0.0;
        local_b0 = 0.0;
        cVar2 = FUN_00679580(local_34,&local_b8);
        if (cVar2 != '\0') {
          if (local_a0 < local_b0) {
            local_a0 = local_b0;
          }
          if (local_a8 < local_b8) {
            local_a8 = local_b8;
          }
          if (local_a4 < local_b4) {
            local_a4 = local_b4;
          }
        }
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  local_70 = *(undefined4 *)(param_1 + 0x78);
  local_6c = *(undefined4 *)(param_1 + 0x7c);
  local_68 = *(undefined4 *)(param_1 + 0x80);
  local_9c = *param_2;
  local_98 = param_2[1];
  local_94 = param_2[2];
  if (*(int *)(DAT_009b3918 + 0x14) == 0) {
    local_9c = DAT_008a2fb4;
    local_98 = DAT_008a2fb8;
    local_94 = DAT_008a2fbc;
  }
  local_8c = 0.0;
  local_b8 = 0.0;
  local_b4 = 4.2039e-45;
  cVar2 = FUN_007897c0(&local_9c,&local_8c,0);
  if (cVar2 != '\0') {
    local_98 = local_8c + _DAT_0089096c;
  }
  local_90 = 0;
  do {
    iVar9 = local_90;
    fVar5 = (float)FUN_00735ad0(local_90);
    local_b8 = fVar5;
    if (fVar5 != 0.0) {
      bVar10 = fVar5 == DAT_009b0fa4;
      pcVar6 = "OnlineLocalPlayer";
      if (!bVar10) {
        pcVar6 = "OnlineRemotePlayer";
      }
      iVar3 = FUN_005cc240(pcVar6);
      for (piVar8 = DAT_00988ec4; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == iVar3) {
          local_ac = (*(code *)piVar8[1])(0,0,0);
          goto LAB_006f2ac3;
        }
      }
      local_ac = 0;
LAB_006f2ac3:
      local_84 = (int *)FUN_005d59f0(&LAB_006200d0);
      if (local_84 != (int *)0x0) {
        uVar12 = 0;
        uVar11 = 0;
        local_74 = (float)(int)*(char *)((int)fVar5 + 0x1148) * _DAT_008959e4 - _DAT_00891048;
        local_7c = local_74 + local_9c;
        local_74 = local_74 * _DAT_00890968;
        local_78 = local_98 + local_74;
        local_74 = local_74 + local_94;
        uVar7 = FUN_00455fd0(0x4a97ec8f,*(undefined4 *)((int)fVar5 + 0xfa4),0,0);
        FUN_00452380(uVar7,uVar11,uVar12);
        local_4 = 1;
        if (local_18 == 0) {
          local_18 = FUN_006269b0(0x50);
        }
        uVar7 = 2;
        local_4 = 2;
        if (*(char *)((int)fVar5 + 0xfa8) == '\0') {
          local_88 = 0;
        }
        else {
          local_88 = (int)fVar5 + 0xfac;
        }
        if (*(char *)(DAT_0091cf90 + 0x142) == '\0') {
          uVar7 = 6;
        }
        else if (*(char *)(DAT_0091cf90 + 0x15f) != '\0') {
          uVar7 = 0x12;
        }
        local_bc = (float *)0x0;
        if ((*(char *)(DAT_0091cf90 + 0x15f) != '\0') &&
           (cVar2 = FUN_0067c310(local_20,&local_a8), cVar2 != '\0')) {
          local_bc = &local_a8;
        }
        uVar11 = *(undefined4 *)((int)fVar5 + 0xfa4);
        iVar9 = local_80 + 0x58;
        FUN_004040f0(&local_64);
        uVar12 = local_64;
        local_5c = &local_64;
        local_4c = &local_70;
        local_48 = &local_7c;
        local_60 = 0xa6b47fac;
        local_44 = local_88;
        local_3c = local_bc;
        local_54 = bVar10 - 1 & 6;
        local_50 = uVar11;
        local_40 = iVar9;
        local_38 = uVar7;
        iVar9 = FUN_005cc240("PVehicle");
        for (piVar8 = DAT_0092c66c; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          if (*piVar8 == iVar9) {
            piVar8 = (int *)(*(code *)piVar8[1])(uVar12,0xa6b47fac,&local_64);
            goto LAB_006f2ca7;
          }
        }
        piVar8 = (int *)0x0;
LAB_006f2ca7:
        piVar1 = local_84;
        (**(code **)(*piVar8 + 0xc))(local_84);
        piVar8 = (int *)FUN_005d59f0(&LAB_00402840);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))(local_b8);
        }
        if (bVar10) {
          (**(code **)(*piVar1 + 0x30))((int)*(char *)(DAT_0091cf90 + 0xc));
          (**(code **)(*piVar1 + 0x18))(0);
          (**(code **)(*piVar1 + 0x28))(1);
        }
        local_4 = 0xffffffff;
        FUN_0045a430();
        iVar9 = local_90;
      }
    }
    local_90 = iVar9 + 1;
    if (3 < local_90) {
      DAT_009b9e64 = 0;
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

