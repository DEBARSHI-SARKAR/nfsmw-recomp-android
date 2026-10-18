/* speed.exe 00749520 FUN_00749520; analysis pseudocode, not buildable source.
 * calls 00747ac0 FUN_00747ac0
 * calls 00503400 FUN_00503400
 * calls 0073acb0 FUN_0073acb0
 * calls 00460c20 FUN_00460c20
 * calls 00748ad0 FUN_00748ad0
 * calls 006bedc0 FUN_006bedc0
 * calls 00747a50 FUN_00747a50
 * calls 0073b360 FUN_0073b360
 * calls 006bed80 FUN_006bed80
 * calls 00739730 FUN_00739730
 * calls 00460bf0 FUN_00460bf0
 * calls 0073b010 FUN_0073b010
 * calls 006cb2a0 FUN_006cb2a0
 * calls 007535e0 FUN_007535e0
 * calls 0073ac30 FUN_0073ac30
 * calls 007493a0 FUN_007493a0
 * calls 006bedd0 FUN_006bedd0
 * calls 006bedb0 FUN_006bedb0
 */

undefined4 FUN_00749520(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  undefined4 uVar14;
  uint local_ac;
  int *local_a8;
  int local_a4;
  int local_98;
  int *local_90;
  int local_84 [4];
  int local_74;
  int local_70;
  int local_6c;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38 [13];
  int local_4;
  
  uVar11 = 0;
  if ((param_1[0xf] == 0) || (iVar1 = FUN_00503400(param_1[0xf],0,0), iVar1 == 0)) {
    return 1;
  }
  bVar13 = *(char *)(iVar1 + 0x4a) != ' ';
  if (param_1[0x5e] == 0) {
    return 1;
  }
  uVar2 = FUN_00460bf0(&PTR_DAT_008a15d0);
  iVar3 = FUN_00739730(uVar2,0);
  if (iVar3 == 0) {
    local_ac = 0;
  }
  else {
    local_ac = *(uint *)(iVar3 + 4);
  }
  uVar2 = FUN_00460bf0("GREEN");
  iVar3 = FUN_00739730(uVar2,0);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar3 + 4);
  }
  uVar2 = FUN_00460bf0(&DAT_008a15c0);
  iVar3 = FUN_00739730(uVar2,0);
  if (iVar3 != 0) {
    uVar11 = *(uint *)(iVar3 + 4);
  }
  uVar2 = FUN_00460bf0("GLOSS");
  iVar3 = FUN_00739730(uVar2,0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  uVar11 = ((iVar3 << 8 | uVar11) << 8 | uVar6) << 8 | local_ac;
  piVar9 = local_84;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  piVar9 = local_84;
  local_a8 = param_1 + 0x5f;
  local_ac = 0;
  local_a4 = 0;
  local_90 = piVar9;
  do {
    if (((-1 < local_a4) && (local_a4 < 1)) && (*local_a8 != 0)) {
      iVar3 = FUN_007493a0(*local_a8,*param_1,(int)*(char *)((int)param_1 + 7));
      *piVar9 = iVar3;
      uVar2 = FUN_00460bf0("NUMCOLOURS");
      iVar3 = FUN_00739730(uVar2,0);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      piVar9[7] = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = *piVar9;
    if (iVar3 != 0) {
      iVar4 = FUN_00503400(iVar3,0,0);
      piVar9[1] = iVar4;
      if (iVar4 == 0) {
        *piVar9 = 0;
      }
      else {
        iVar4 = FUN_006bed80(0);
        piVar9[3] = iVar4;
        if (bVar13) {
          iVar5 = FUN_006bedc0(0);
          piVar9[4] = iVar5;
        }
        if (iVar4 == 0) {
          *piVar9 = 0;
        }
        else {
          if (DAT_009b09fc != 0) {
            FUN_0073b360(piVar9,iVar1);
            return 1;
          }
          if (*(char *)((int)param_1 + 7) == '\x02') {
            FUN_0073b360(piVar9,iVar1);
            return 1;
          }
          uVar2 = FUN_00460c20("_MASK",iVar3);
          iVar3 = FUN_00503400(uVar2,0,0);
          piVar9[2] = iVar3;
          if (iVar3 == 0) {
            *piVar9 = 0;
          }
          else {
            iVar3 = FUN_006bed80(0);
            piVar9[5] = iVar3;
            if (bVar13) {
              iVar4 = FUN_006bedc0(0);
              piVar9[6] = iVar4;
            }
            if (iVar3 == 0) {
              *piVar9 = 0;
            }
            else {
              if (((-1 < local_a4) && (local_a4 < 1)) && (*local_a8 != 0)) {
                uVar2 = FUN_00460bf0("REMAP");
                iVar3 = FUN_00747a50(uVar2);
                if (iVar3 != 0) {
                  uVar14 = 0;
                  uVar2 = FUN_00460bf0("REMAP",0);
                  iVar3 = FUN_00747ac0(uVar2,uVar14);
                  piVar9[8] = iVar3;
                  if (iVar3 != 0) {
                    piVar10 = local_a8 + 2;
                    local_98 = 0;
                    puVar12 = (uint *)(piVar9 + 9);
                    do {
                      if (*piVar10 == 0) {
                        uVar6 = 0xff << ((byte)local_98 & 0x1f);
                      }
                      else {
                        uVar14 = 0;
                        uVar2 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
                        uVar6 = FUN_00747ac0(uVar2,uVar14);
                        uVar14 = 0;
                        uVar2 = FUN_00460bf0("GREEN",0);
                        uVar7 = FUN_00747ac0(uVar2,uVar14);
                        uVar14 = 0;
                        uVar2 = FUN_00460bf0(&DAT_008a15c0,0);
                        uVar8 = FUN_00747ac0(uVar2,uVar14);
                        uVar14 = 0;
                        uVar2 = FUN_00460bf0("GLOSS",0);
                        iVar3 = FUN_00747ac0(uVar2,uVar14);
                        uVar6 = ((iVar3 << 8 | uVar8) << 8 | uVar7) << 8 | uVar6;
                        piVar9 = local_90;
                      }
                      local_98 = local_98 + 8;
                      *puVar12 = uVar6;
                      piVar10 = piVar10 + 1;
                      puVar12 = puVar12 + 1;
                    } while (local_98 < 0x20);
                  }
                }
              }
              local_ac = local_ac + 1;
              piVar9 = piVar9 + 0xd;
              local_90 = piVar9;
            }
          }
        }
      }
    }
    local_a4 = local_a4 + 1;
    local_a8 = local_a8 + 1;
    if (0 < local_a4) {
      FUN_006cb2a0();
      FUN_007535e0(param_1);
      local_4 = local_ac;
      local_50 = iVar1;
      local_4c = uVar11;
      local_48 = uVar11;
      local_44 = uVar11;
      local_40 = uVar11;
      local_3c = uVar11;
      piVar9 = local_84;
      piVar10 = local_38;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
      uVar2 = 1;
      iVar3 = FUN_0073ac30(&local_50);
      if (iVar3 == 0) {
        FUN_0073acb0(&local_50);
        if (*(char *)(iVar1 + 0x4a) == '\b') {
          uVar2 = FUN_00748ad0(&local_50);
        }
        else {
          uVar2 = FUN_0073b010(&local_50);
        }
      }
      if (local_84[3] != 0) {
        FUN_006bedb0(local_84[3]);
      }
      if (local_74 != 0) {
        FUN_006bedd0(local_74);
      }
      if (local_70 != 0) {
        FUN_006bedb0(local_70);
      }
      if (local_6c != 0) {
        FUN_006bedd0(local_6c);
      }
      return uVar2;
    }
  } while( true );
}

