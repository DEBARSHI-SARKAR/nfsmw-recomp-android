/* speed.exe 0059d500 FUN_0059d500; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251a0 FUN_005251a0
 * calls 00573140 FUN_00573140
 * calls 00514c70 FUN_00514c70
 * calls 00461300 FUN_00461300
 * calls 00524ee0 FUN_00524ee0
 * calls 00466410 FUN_00466410
 * calls 005b3670 FUN_005b3670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0059d500(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872ff3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_2;
  param_1[6] = 0x40010000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar8 = param_1 + 0xc;
  *param_1 = &PTR_FUN_008a2040;
  *puVar8 = puVar8;
  param_1[0xd] = puVar8;
  local_14 = param_1 + 0x13;
  param_1[0x14] = 0;
  *local_14 = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0xffffffff;
  _DAT_0091cf04 = 0;
  param_2 = param_1 + 0xf;
  local_4 = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar2 = 0;
  local_10 = param_1;
  do {
    uVar2 = uVar2 + 1;
    uVar3 = FUN_00573140("TRACK_MAP%d",uVar2);
    iVar4 = FUN_00524850(param_1[4],uVar3);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00466410();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5[2] = iVar4;
      }
      puVar8 = (undefined4 *)param_1[3];
      *puVar8 = piVar5;
      param_1[3] = piVar5;
      piVar5[1] = (int)puVar8;
      *piVar5 = (int)puVar1;
    }
    *param_2 = iVar4;
    if (iVar4 != 0) {
      FUN_005b3670(0,local_14,local_14 + 2);
    }
    param_2 = param_2 + 1;
    local_14 = local_14 + 4;
  } while (uVar2 < 4);
  uVar3 = FUN_00573140("TRACK_MAP");
  iVar4 = FUN_00524850(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0xe] = iVar4;
  uVar3 = FUN_00573140("MINIMAP_NORTH_INDICATOR");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0x23] = iVar4;
  uVar3 = FUN_00573140("PLAYERCARINDICATOR");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0x24] = iVar4;
  uVar3 = FUN_00573140("PLAYERCARINDICATOR2");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0x25] = iVar4;
  uVar3 = FUN_00573140("TRACKMAPTARGETRING");
  iVar4 = FUN_00524850(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  uVar3 = FUN_00573140("MAP_COLOR_TINT");
  iVar4 = FUN_00524850(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  puVar8 = param_1 + 0x46;
  for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar3 = FUN_00573140("HELICOPTER_ICON_GROUP");
  uVar3 = FUN_0058bbd0(uVar3);
  param_1[0x32] = uVar3;
  uVar3 = FUN_00573140("HELICOPTER_LINE_OF_SIGHT");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  local_18 = param_1 + 0x3c;
  param_1[0x33] = iVar4;
  param_2 = (int *)0x0;
  do {
    uVar3 = FUN_00573140("MMICON_COPCAR_%d",param_2);
    iVar4 = FUN_005251a0(param_1[4],uVar3);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00466410();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5[2] = iVar4;
      }
      puVar8 = (undefined4 *)param_1[3];
      *puVar8 = piVar5;
      param_1[3] = piVar5;
      piVar5[1] = (int)puVar8;
      *piVar5 = (int)puVar1;
    }
    local_18[-8] = iVar4;
    uVar3 = FUN_00573140("MMICON_AIRACER_%d",param_2);
    iVar4 = FUN_005251a0(param_1[4],uVar3);
    if (iVar4 != 0) {
      piVar6 = (int *)FUN_00466410();
      piVar5 = (int *)0x0;
      if (piVar6 != (int *)0x0) {
        piVar6[2] = iVar4;
        piVar5 = piVar6;
      }
      puVar8 = (undefined4 *)param_1[3];
      *puVar8 = piVar5;
      param_1[3] = piVar5;
      piVar5[1] = (int)puVar8;
      *piVar5 = (int)puVar1;
    }
    local_14 = local_18 + 10;
    *local_18 = iVar4;
    ppuVar7 = &PTR_DAT_008f3ac0;
    do {
      uVar2 = (uint)param_2;
      if (ppuVar7[-1] != (undefined *)0x0) {
        if ((param_2 == (int *)0x0) || (iVar4 = FUN_00461300(*ppuVar7,&DAT_0089cef0), iVar4 != 0)) {
          uVar3 = FUN_00573140(*ppuVar7,uVar2);
          iVar4 = FUN_005251a0(param_1[4],uVar3);
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_00466410();
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5[2] = iVar4;
            }
            puVar8 = (undefined4 *)param_1[3];
            *puVar8 = piVar5;
            param_1[3] = piVar5;
            piVar5[1] = (int)puVar8;
            *piVar5 = (int)puVar1;
          }
          *local_14 = iVar4;
          if (iVar4 != 0) {
            FUN_00514c70(iVar4);
          }
        }
        else {
          *local_14 = 0;
        }
      }
      ppuVar7 = ppuVar7 + 5;
      local_14 = local_14 + 8;
    } while ((int)ppuVar7 < 0x8f3c14);
    param_2 = (int *)((int)param_2 + 1);
    local_18 = local_18 + 1;
  } while (param_2 < 8);
  uVar3 = FUN_00573140("MMICON_CHECKPOINT");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0x44] = iVar4;
  iVar4 = FUN_005251a0(param_1[4],0xe8741681);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar8 = (undefined4 *)param_1[3];
    *puVar8 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar8;
    *piVar5 = (int)puVar1;
  }
  param_1[0x45] = iVar4;
  if (param_1[0xe] != 0) {
    iVar4 = *(int *)(param_1[0xe] + 0x2c);
    param_1[0x27] = *(undefined4 *)(iVar4 + 0x1c);
    param_1[0x28] = *(undefined4 *)(iVar4 + 0x20);
    param_1[0x29] = *(undefined4 *)(iVar4 + 0x24);
    FUN_00524ee0(param_1[0xe],&param_2,&local_14);
    param_1[0x2e] = param_2;
    FUN_00524ee0(param_1[0xe],&local_14,&param_2);
    param_1[0x2f] = param_2;
  }
  ExceptionList = local_c;
  return param_1;
}

