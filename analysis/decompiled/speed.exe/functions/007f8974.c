/* speed.exe 007f8974 FUN_007f8974; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 007f86e9 FUN_007f86e9
 * calls 007f8639 FUN_007f8639
 * calls 007f84b0 FUN_007f84b0
 * calls 007f8751 FUN_007f8751
 */

void __thiscall FUN_007f8974(int *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_cc [13];
  char *local_98 [13];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  char *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  int *local_c;
  char local_5;
  
  uVar7 = 0;
  local_1c = -1;
  local_24 = (char *)0x0;
  local_60 = -1;
  local_54 = -1;
  local_5c = -1;
  local_34 = -1;
  local_40 = -1;
  local_58 = -1;
  local_48 = -1;
  local_64 = -1;
  local_50 = -1;
  local_38 = -1;
  local_3c = -1;
  local_44 = -1;
  local_4c = -1;
  local_98[0] = "FRAME";
  local_98[1] = "STRINGID";
  local_98[2] = "X";
  local_98[3] = "Y";
  local_98[4] = "WIDTH";
  local_98[5] = "HEIGHT";
  local_98[6] = "JUSTIFY_X";
  local_98[7] = "JUSTIFY_Y";
  local_98[8] = "SHAPE";
  local_98[9] = "A";
  local_98[10] = "R";
  local_98[0xb] = "G";
  local_98[0xc] = "B";
  do {
    pcVar3 = *(char **)((int)local_98 + uVar7);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    *(int *)((int)local_cc + uVar7) = (int)pcVar3 - (int)pcVar1;
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0x34);
  local_10 = 0;
  local_5 = '\x01';
  local_2d = 0;
  local_18 = param_1;
  if (param_3 != 0) {
    do {
      piVar4 = (int *)(local_10 + param_2);
      if ((((char)*piVar4 == '\t') || (local_5 == '\x01')) && (local_5 = '\0', local_1c == -1)) {
        local_14 = param_3 - local_10;
        local_c = piVar4;
        FUN_007f8751(&local_c,local_98,local_cc,0xd,&local_20);
        if (local_20 != -1) {
          local_1c = (int)local_24;
        }
      }
      if ((char)*piVar4 == '\n') {
        local_24 = (char *)((int)local_24 + 1);
        local_5 = '\x01';
      }
      local_10 = local_10 + 1;
    } while (local_10 < param_3);
    if (local_1c != -1) {
      iVar8 = (int)local_24 + (-1 - local_1c);
      piVar4 = (int *)FUN_007f84b0(iVar8 * 0x34 + 4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar8;
        local_c = piVar4 + 1;
        FUN_00404db0(local_c,0x34,iVar8,&LAB_007f87fa);
        piVar4 = local_c;
      }
      param_1[1] = iVar8;
      *param_1 = (int)piVar4;
      local_14 = 0;
      iVar8 = 0;
      local_10 = 0;
      do {
        if (*(char *)(local_10 + param_2) == '\n') {
          iVar8 = iVar8 + 1;
        }
      } while ((local_1c != iVar8) && (local_10 = local_10 + 1, local_10 < param_3));
      local_5 = '\x01';
      for (; local_10 < param_3; local_10 = local_10 + 1) {
        piVar4 = (int *)(local_10 + param_2);
        if (((char)*piVar4 == '\t') || (local_5 == '\x01')) {
          local_1c = param_3 - local_10;
          local_5 = '\0';
          local_c = piVar4;
          FUN_007f8751(&local_c,local_98,local_cc,0xd,&local_20);
          switch(local_20) {
          case 0:
            local_60 = local_14;
            break;
          case 1:
            local_54 = local_14;
            break;
          case 2:
            local_64 = local_14;
            break;
          case 3:
            local_50 = local_14;
            break;
          case 4:
            local_5c = local_14;
            break;
          case 5:
            local_34 = local_14;
            break;
          case 6:
            local_40 = local_14;
            break;
          case 7:
            local_58 = local_14;
            break;
          case 8:
            local_48 = local_14;
            break;
          case 9:
            local_38 = local_14;
            break;
          case 10:
            local_3c = local_14;
            break;
          case 0xb:
            local_44 = local_14;
            break;
          case 0xc:
            local_4c = local_14;
          }
          local_14 = local_14 + 1;
        }
        if ((char)*piVar4 == '\n') {
          local_10 = local_10 + 1;
          local_5 = '\x01';
          break;
        }
      }
      local_14 = 0;
      if (param_3 <= local_10) {
        return;
      }
      local_20 = 0;
      local_24 = (char *)(local_10 + param_2);
      local_1c = -1;
      do {
        iVar8 = local_14;
        if (*local_24 == '\t') {
          if (local_5 != '\x01') {
            local_10 = local_10 + 1;
            local_24 = local_24 + 1;
          }
LAB_007f8c91:
          uVar7 = local_10;
          for (iVar5 = 0;
              ((uVar7 < param_3 && (local_24[iVar5] != '\t')) && (local_24[iVar5] != '\n'));
              iVar5 = iVar5 + 1) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = iVar5 + local_10;
          if (uVar7 != param_3) {
            local_2d = *(undefined1 *)(param_2 + uVar7);
            *(undefined1 *)(param_2 + uVar7) = 0;
          }
          local_5 = '\0';
          if (local_14 == local_60) {
            local_2c = (char *)(param_3 - local_10);
            local_28 = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 0x14 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 0x14 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_54) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 0x10 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 0x10 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_5c) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 8 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 8 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_34) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 0xc + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 0xc + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_40) {
            iVar5 = FUN_007f8639(param_3 - local_10);
            param_1 = local_18;
            if (iVar5 == -1) {
              iVar5 = local_1c;
              if (local_1c < 1) {
                iVar5 = 0;
              }
              *(undefined4 *)(*local_18 + 0x18 + local_20) =
                   *(undefined4 *)(iVar5 * 0x34 + 0x18 + *local_18);
              local_14 = iVar8;
            }
            else {
              *(int *)(local_20 + 0x18 + *local_18) = iVar5;
              local_14 = iVar8;
            }
          }
          else if (local_14 == local_58) {
            iVar5 = FUN_007f8639(param_3 - local_10);
            param_1 = local_18;
            if (iVar5 == -1) {
              iVar5 = local_1c;
              if (local_1c < 1) {
                iVar5 = 0;
              }
              *(undefined4 *)(*local_18 + 0x1c + local_20) =
                   *(undefined4 *)(iVar5 * 0x34 + 0x1c + *local_18);
              local_14 = iVar8;
            }
            else {
              *(int *)(local_20 + 0x1c + *local_18) = iVar5;
              local_14 = iVar8;
            }
          }
          else if (local_14 == local_48) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 0x20 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 0x20 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_64) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_50) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = *(int **)(iVar8 * 0x34 + 4 + *param_1);
            FUN_007f86e9(&local_c);
            *(int **)(local_20 + 4 + *local_18) = local_c;
            param_1 = local_18;
          }
          else if (local_14 == local_38) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = (int *)(uint)*(byte *)(iVar8 * 0x34 + 0x24 + *param_1);
            FUN_007f86e9(&local_c);
            *(undefined1 *)(local_20 + 0x24 + *local_18) = local_c._0_1_;
            param_1 = local_18;
          }
          else if (local_14 == local_3c) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = (int *)(uint)*(byte *)(iVar8 * 0x34 + 0x25 + *param_1);
            FUN_007f86e9(&local_c);
            *(undefined1 *)(local_20 + 0x25 + *local_18) = local_c._0_1_;
            param_1 = local_18;
          }
          else if (local_14 == local_44) {
            local_28 = (char *)(param_3 - local_10);
            local_2c = local_24;
            iVar8 = local_1c;
            if (local_1c < 1) {
              iVar8 = 0;
            }
            local_c = (int *)(uint)*(byte *)(iVar8 * 0x34 + 0x26 + *param_1);
            FUN_007f86e9(&local_c);
            *(undefined1 *)(local_20 + 0x26 + *local_18) = local_c._0_1_;
            param_1 = local_18;
          }
          else {
            local_14 = iVar8;
            if (local_14 == local_4c) {
              local_28 = (char *)(param_3 - local_10);
              local_2c = local_24;
              iVar8 = local_1c;
              if (local_1c < 1) {
                iVar8 = 0;
              }
              local_c = (int *)(uint)*(byte *)(iVar8 * 0x34 + 0x27 + *param_1);
              FUN_007f86e9(&local_c);
              *(undefined1 *)(local_20 + 0x27 + *local_18) = local_c._0_1_;
              param_1 = local_18;
            }
          }
          local_14 = local_14 + 1;
          if (uVar7 != param_3) {
            *(undefined1 *)(uVar7 + param_2) = local_2d;
          }
        }
        else {
          if (local_5 == '\x01') goto LAB_007f8c91;
          if (*local_24 == '\n') {
            local_14 = 0;
            iVar8 = local_1c + 1;
            local_20 = local_20 + 0x34;
            local_5 = '\x01';
            uVar7 = param_1[1] - 1U;
            if (local_1c + 2U < param_1[1] - 1U) {
              uVar7 = local_1c + 2U;
            }
            puVar6 = (undefined4 *)(*param_1 + -0x34 + local_20);
            puVar9 = (undefined4 *)(uVar7 * 0x34 + *param_1);
            for (iVar5 = 0xd; local_1c = iVar8, iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          local_10 = local_10 + 1;
          local_24 = local_24 + 1;
        }
        if (param_3 <= local_10) {
          return;
        }
      } while( true );
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

