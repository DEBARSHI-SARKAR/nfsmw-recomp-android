/* speed.exe 00478320 FUN_00478320; analysis pseudocode, not buildable source.
 * calls 004461d0 FUN_004461d0
 * calls 00460bf0 FUN_00460bf0
 * calls 00460e30 FUN_00460e30
 */

void __fastcall FUN_00478320(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined **ppuVar9;
  uint uVar10;
  uint local_1c;
  undefined1 local_10 [16];
  
  uVar10 = 0;
  local_1c = 0;
  if (DAT_0090d9e4 != (uint *)0x0) {
    local_1c = *DAT_0090d9e4;
  }
  if (local_1c != 0) {
    do {
      if ((DAT_0090d9e4 == (uint *)0x0) || (*DAT_0090d9e4 <= uVar10)) {
        uVar7 = 0;
      }
      else {
        uVar7 = DAT_0090d9e4[uVar10 * 2 + 1];
      }
      local_10[0] = 0;
      if (DAT_0090d9e4 != (uint *)0x0) {
        local_10[0] = 0;
        uVar1 = 0;
        if (*DAT_0090d9e4 != 0) {
          puVar5 = DAT_0090d9e4 + 1;
          do {
            if (uVar7 == *puVar5) {
              FUN_004461d0(uVar1,local_10);
              break;
            }
            uVar1 = uVar1 + 1;
            puVar5 = puVar5 + 2;
          } while (uVar1 < *DAT_0090d9e4);
        }
      }
      iVar2 = FUN_00460e30(local_10,&PTR_LAB_00894fd0,3);
      if (((iVar2 != 0) && (iVar2 = FUN_00460e30(local_10,"replay",6), iVar2 != 0)) &&
         (iVar2 = FUN_00460e30(local_10,&DAT_00894fc0,4), iVar2 != 0)) {
        iVar2 = param_1[5];
        iVar3 = 0;
        if (0 < iVar2) {
          puVar5 = (uint *)*param_1;
          do {
            if (uVar7 == *puVar5) {
              if ((uint *)*param_1 + iVar3 * 5 != (uint *)0x0) goto LAB_0047842d;
              break;
            }
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 5;
          } while (iVar3 < param_1[5]);
        }
        if (iVar2 < 0x100) {
          *(undefined4 *)(*param_1 + 4 + iVar2 * 0x14) = 0;
          *(uint *)(*param_1 + param_1[5] * 0x14) = uVar7;
          param_1[5] = param_1[5] + 1;
        }
      }
LAB_0047842d:
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_1c);
  }
  uVar10 = 0;
  if (local_1c != 0) {
    do {
      if ((DAT_0090d9e4 == (uint *)0x0) || (*DAT_0090d9e4 <= uVar10)) {
        uVar7 = 0;
      }
      else {
        uVar7 = DAT_0090d9e4[uVar10 * 2 + 1];
      }
      local_10[0] = 0;
      if (DAT_0090d9e4 != (uint *)0x0) {
        local_10[0] = 0;
        uVar1 = 0;
        if (*DAT_0090d9e4 != 0) {
          puVar5 = DAT_0090d9e4 + 1;
          do {
            if (uVar7 == *puVar5) {
              FUN_004461d0(uVar1,local_10);
              break;
            }
            uVar1 = uVar1 + 1;
            puVar5 = puVar5 + 2;
          } while (uVar1 < *DAT_0090d9e4);
        }
      }
      iVar2 = FUN_00460e30(local_10,&PTR_LAB_00894fd0,3);
      if (iVar2 == 0) {
        iVar2 = param_1[6];
        if (0 < iVar2) {
          iVar3 = 0;
          puVar5 = (uint *)param_1[1];
          do {
            if (uVar7 == *puVar5) {
              if ((uint *)param_1[1] + iVar3 * 5 != (uint *)0x0) goto LAB_0047850b;
              break;
            }
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 5;
          } while (iVar3 < param_1[6]);
        }
        if (iVar2 < 10) {
          *(undefined4 *)(param_1[1] + 4 + iVar2 * 0x14) = 1;
          *(uint *)(param_1[1] + param_1[6] * 0x14) = uVar7;
          param_1[6] = param_1[6] + 1;
        }
      }
LAB_0047850b:
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_1c);
  }
  piVar8 = &DAT_008ee3a4;
  do {
    iVar2 = param_1[7];
    iVar3 = *piVar8;
    iVar4 = 0;
    if (0 < iVar2) {
      piVar6 = (int *)param_1[2];
      do {
        if (iVar3 == *piVar6) {
          if ((int *)param_1[2] + iVar4 * 5 != (int *)0x0) goto LAB_0047856c;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 5;
      } while (iVar4 < param_1[7]);
    }
    if (iVar2 < 0x32) {
      *(undefined4 *)(param_1[2] + 4 + iVar2 * 0x14) = 2;
      *(int *)(param_1[2] + param_1[7] * 0x14) = iVar3;
      param_1[7] = param_1[7] + 1;
    }
LAB_0047856c:
    piVar8 = piVar8 + 6;
  } while ((int)piVar8 < 0x8ee434);
  ppuVar9 = &PTR_s_Cinematics_008edee4;
  do {
    iVar3 = FUN_00460bf0(*ppuVar9);
    iVar2 = param_1[8];
    iVar4 = 0;
    if (0 < iVar2) {
      piVar8 = (int *)param_1[3];
      do {
        if (iVar3 == *piVar8) {
          if ((int *)param_1[3] + iVar4 * 5 != (int *)0x0) goto LAB_004785dc;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 5;
      } while (iVar4 < param_1[8]);
    }
    if (iVar2 < 0x32) {
      *(undefined4 *)(param_1[3] + 4 + iVar2 * 0x14) = 3;
      *(int *)(param_1[3] + param_1[8] * 0x14) = iVar3;
      param_1[8] = param_1[8] + 1;
    }
LAB_004785dc:
    ppuVar9 = ppuVar9 + 1;
    if (0x8edeeb < (int)ppuVar9) {
      return;
    }
  } while( true );
}

