/* speed.exe 00713b20 FUN_00713b20; analysis pseudocode, not buildable source.
 * calls 004b8880 FUN_004b8880
 * calls 006fe330 FUN_006fe330
 * calls 00625e60 FUN_00625e60
 * calls 00454810 FUN_00454810
 * calls 004b1c00 FUN_004b1c00
 * calls 0065faf0 FUN_0065faf0
 * calls 00625ef0 FUN_00625ef0
 * calls 0070c520 FUN_0070c520
 * calls 00704490 FUN_00704490
 * calls 007136e0 FUN_007136e0
 * calls 006269b0 FUN_006269b0
 * calls 004b1d60 FUN_004b1d60
 * calls 004549b0 FUN_004549b0
 * calls 004ba9b0 FUN_004ba9b0
 * calls 00709d00 FUN_00709d00
 * calls 0045a430 FUN_0045a430
 * calls 004b1c90 FUN_004b1c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00713b20(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  int local_2c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880081;
  local_c = ExceptionList;
  puVar10 = (undefined4 *)0x0;
  if ((((DAT_008f8700 == 0) || (DAT_00992234 == 3)) || (DAT_00911fa8 == 0)) ||
     ((*(int *)(DAT_00911fa8 + 0x24) == 0 ||
      (*(float *)(*(int *)(DAT_00911fa8 + 0x24) + 4) == _DAT_00890968)))) {
    ExceptionList = &local_c;
    uVar2 = FUN_004549b0(*param_3);
    iVar3 = FUN_004ba9b0(uVar2);
    if (iVar3 == 0xcc) {
      FUN_00625ef0(&local_48);
      local_44 = local_48;
      local_3c = 0x10;
      local_38 = 0;
      local_40 = 0x20d60dbf;
      FUN_0065faf0();
      FUN_00625e60(&local_48);
      local_44 = local_48;
      local_3c = 0x10;
      local_38 = 0;
      local_40 = 0x20d60dbf;
      FUN_0065faf0();
    }
  }
  else if (*(int *)(DAT_009922dc + 0x18) != *(int *)(DAT_009922dc + 0x2c)) {
    ExceptionList = &local_c;
    uVar2 = FUN_004549b0(*param_3);
    iVar3 = FUN_004ba9b0(uVar2);
    FUN_004b8880(uVar2,0,0);
    local_4 = 0;
    piVar11 = &DAT_0099339c;
    do {
      for (piVar4 = (int *)piVar11[-1]; piVar4 != (int *)*piVar11; piVar4 = piVar4 + 1) {
        iVar5 = *piVar4;
        if (*(int *)(iVar5 + 8) == iVar3) {
          if (param_5 == 0) {
            if (*(int *)(iVar5 + 0xc) != 0) goto LAB_00713d7c;
          }
          else if ((*(int *)(iVar5 + 0xc) == 0) || (*(int *)(iVar5 + 0xc) == param_5))
          goto LAB_00713d7c;
          *(undefined4 *)(iVar5 + 0x10) = DAT_00925ae8;
          *(int *)(iVar5 + 0xc) = param_5;
          if (param_1 != 0) {
            puVar10 = (undefined4 *)FUN_004b1d60(0);
            for (uVar12 = param_1 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar10 = *param_2;
              param_2 = param_2 + 1;
              puVar10 = puVar10 + 1;
            }
            for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)param_2;
              param_2 = (undefined4 *)((int)param_2 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
          }
          goto LAB_00713d7c;
        }
      }
      piVar11 = piVar11 + 5;
    } while ((int)piVar11 < 0x9933ec);
    if ((*(char *)(local_2c + 0x1a) != '\0') || (cVar1 = FUN_00704490(local_34), cVar1 != '\0')) {
      iVar5 = FUN_006fe330();
      if (iVar5 != 0) {
        uVar12 = 0;
        iVar5 = FUN_006fe330();
        if (iVar5 != 0) {
          do {
            iVar5 = FUN_00454810(0x4710d6d5,uVar12);
            if (iVar5 == 0) {
              iVar5 = FUN_006269b0(0xc);
            }
            FUN_004b8880(*(undefined4 *)(iVar5 + 4),0,0);
            uVar2 = *(undefined4 *)(local_18 + 4);
            local_4 = CONCAT31(local_4._1_3_,1);
            cVar1 = FUN_00709d00(uVar2,4);
            if (cVar1 != '\0') {
              FUN_0070c520(uVar2);
            }
            local_4 = local_4 & 0xffffff00;
            FUN_0045a430();
            uVar12 = uVar12 + 1;
            uVar6 = FUN_006fe330();
          } while (uVar12 < uVar6);
        }
      }
      local_48 = (undefined4 *)FUN_004b1c90(0x40,param_1);
      local_4._0_1_ = 2;
      if (local_48 != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)FUN_004b1c00();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      local_48 = puVar10;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = param_3;
        puVar10[1] = param_4;
        puVar10[3] = param_5;
        puVar10[2] = iVar3;
        pcVar7 = (char *)FUN_00454810(0xaecbb4ad,0);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)FUN_006269b0(1);
        }
        if (*pcVar7 == '\0') {
          cVar1 = (char)*(undefined2 *)(local_2c + 0x18);
        }
        else {
          cVar1 = (char)*(undefined2 *)(local_2c + 0x18) + 'd';
        }
        *(char *)((int)puVar10 + 0x3b) = cVar1;
        pfVar8 = (float *)FUN_00454810(0xffbdad32,0);
        if (pfVar8 == (float *)0x0) {
          pfVar8 = (float *)FUN_006269b0(4);
        }
        if (_DAT_00890968 < *pfVar8) {
          *(byte *)((int)puVar10 + 0x3e) = *(byte *)((int)puVar10 + 0x3e) | 2;
        }
        FUN_007136e0(&local_48);
        if (param_1 != 0) {
          puVar9 = (undefined4 *)FUN_004b1d60(0);
          for (uVar12 = param_1 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar9 = *param_2;
            param_2 = param_2 + 1;
            puVar9 = puVar9 + 1;
          }
          for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)param_2;
            param_2 = (undefined4 *)((int)param_2 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_4 = 0xffffffff;
        FUN_0045a430();
        ExceptionList = local_c;
        return puVar10;
      }
    }
LAB_00713d7c:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

