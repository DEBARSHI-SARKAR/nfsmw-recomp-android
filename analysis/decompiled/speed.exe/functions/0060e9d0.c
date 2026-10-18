/* speed.exe 0060e9d0 FUN_0060e9d0; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 00606c20 FUN_00606c20
 * calls 0060e7d0 FUN_0060e7d0
 * calls 00607bb0 FUN_00607bb0
 * calls 0060bd50 FUN_0060bd50
 * calls 00607d80 FUN_00607d80
 * calls 0060bea0 FUN_0060bea0
 * calls 00607c40 FUN_00607c40
 * calls 00612820 FUN_00612820
 * calls 0060b9d0 FUN_0060b9d0
 * calls 006127a0 FUN_006127a0
 * calls 00613970 FUN_00613970
 * calls 00613eb0 FUN_00613eb0
 * calls 007c4b80 FUN_007c4b80
 * calls 0060c200 FUN_0060c200
 * calls 006128d0 FUN_006128d0
 * calls 00608230 FUN_00608230
 * calls 00606d50 FUN_00606d50
 * calls 00613880 FUN_00613880
 * calls 00607570 FUN_00607570
 * calls 00608360 FUN_00608360
 * calls 006082c0 FUN_006082c0
 * calls 0060e960 FUN_0060e960
 * calls 00607f20 FUN_00607f20
 * calls 00607cb0 FUN_00607cb0
 * calls 0060bf90 FUN_0060bf90
 * calls 0060b630 FUN_0060b630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0060e9d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  float fStack_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int iStack_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  
LAB_0060e9e0:
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_00606c20(param_1,0,0xffffffff);
  }
LAB_0060e9f6:
  *(uint ***)(*(int *)(param_1 + 0x14) + 0x10) = &local_48;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 2;
  local_48 = *(uint **)(*(int *)(param_1 + 0x14) + 0xc);
  local_3c = *(int *)(*(int *)(param_1 + 0xc) + -4);
  local_40 = *(int *)(*(int *)(local_3c + 0xc) + 8);
switchD_0060ea8b_default:
  uVar6 = *local_48;
  local_48 = local_48 + 1;
  if ((*(byte *)(param_1 + 0x30) & 0xc) != 0) {
    piVar12 = (int *)(param_1 + 0x38);
    *piVar12 = *piVar12 + -1;
    if (((*piVar12 == 0) || ((*(byte *)(param_1 + 0x30) & 4) != 0)) &&
       (FUN_00607f20(), (*(byte *)(*(int *)(param_1 + 0x14) + 8) & 0x10) != 0)) {
      *(uint **)(*(int *)(param_1 + 0x14) + 0xc) = local_48 + -1;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0x18;
      return (int *)0x0;
    }
  }
  local_44 = *(int **)(param_1 + 0xc);
  local_34 = (int *)(uVar6 >> 0x18);
  local_38 = (int *)((int)local_34 * 8);
  piVar12 = (int *)((int)local_38 + (int)local_44);
  switch(uVar6 & 0x3f) {
  case 0:
    uVar6 = uVar6 >> 0xf & 0x1ff;
    *piVar12 = local_44[uVar6 * 2];
    piVar12[1] = local_44[uVar6 * 2 + 1];
    goto switchD_0060ea8b_default;
  case 1:
    uVar6 = uVar6 >> 6 & 0x3ffff;
    *piVar12 = *(int *)(local_40 + uVar6 * 8);
    piVar12[1] = *(int *)(local_40 + uVar6 * 8 + 4);
    goto switchD_0060ea8b_default;
  case 2:
    *piVar12 = 1;
    piVar12[1] = uVar6 >> 0xf & 0x1ff;
    if ((uVar6 & 0x7fc0) != 0) {
      local_48 = local_48 + 1;
    }
    goto switchD_0060ea8b_default;
  case 3:
    piVar5 = local_44 + (uVar6 >> 0xf & 0x1ff) * 2;
    do {
      *piVar5 = 0;
      piVar5 = piVar5 + -2;
    } while (piVar12 <= piVar5);
    goto switchD_0060ea8b_default;
  case 4:
    piVar5 = *(int **)(*(int *)(local_3c + 0x18 + (uVar6 >> 0xf & 0x1ff) * 4) + 8);
    *piVar12 = *piVar5;
    piVar12[1] = piVar5[1];
    goto switchD_0060ea8b_default;
  case 5:
    piVar5 = (int *)(local_40 + (uVar6 >> 6 & 0x3ffff) * 8);
    piVar13 = (int *)(*(int *)(*(int *)(local_3c + 0x14) + 0x10) +
                     ((1 << (*(byte *)(*(int *)(local_3c + 0x14) + 7) & 0x1f)) - 1U &
                     *(uint *)(piVar5[1] + 8)) * 0x14);
    do {
      local_34 = piVar5;
      if ((*piVar13 == 4) && (piVar13[1] == piVar5[1])) {
        if (piVar13[2] != 0) {
          *piVar12 = piVar13[2];
          piVar12[1] = piVar13[3];
          goto switchD_0060ea8b_default;
        }
        break;
      }
      piVar13 = (int *)piVar13[4];
    } while (piVar13 != (int *)0x0);
    iVar11 = *(int *)(*(int *)(local_3c + 0x14) + 8);
    if ((*(byte *)(iVar11 + 6) & 1) == 0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0x54);
      piVar12 = (int *)(*(int *)(iVar11 + 0x10) +
                       ((1 << (*(byte *)(iVar11 + 7) & 0x1f)) - 1U & *(uint *)(iVar10 + 8)) * 0x14);
      do {
        if ((*piVar12 == 4) && (piVar12[1] == iVar10)) {
          piVar13 = piVar12 + 2;
          if (piVar12[2] == 0) {
            *(byte *)(iVar11 + 6) = *(byte *)(iVar11 + 6) | 1;
            piVar13 = (int *)0x0;
          }
          goto LAB_0060ec0d;
        }
        piVar12 = (int *)piVar12[4];
      } while (piVar12 != (int *)0x0);
      *(byte *)(iVar11 + 6) = *(byte *)(iVar11 + 6) | 1;
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = (int *)0x0;
    }
LAB_0060ec0d:
    if (piVar13 == (int *)0x0) {
      piVar12 = &DAT_008a3c5c;
    }
    else if (*piVar13 == 6) {
      FUN_006127a0(param_1,piVar13,local_3c + 0x10,piVar5);
      piVar12 = *(int **)(param_1 + 8);
    }
    else if (*piVar13 == 5) {
      piVar12 = (int *)FUN_00607d80(piVar13[1],piVar5);
      if (*piVar12 == 0) {
        piVar12 = (int *)FUN_0060e960(param_1,piVar13,piVar5,1);
      }
    }
    else {
      piVar12 = (int *)FUN_0060bea0(piVar5,1);
    }
    goto LAB_0060ec71;
  case 6:
    uVar4 = uVar6 >> 6 & 0x1ff;
    piVar5 = local_44 + (uVar6 >> 0xf & 0x1ff) * 2;
    if (uVar4 < 0xfa) {
      piVar13 = local_44 + uVar4 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    local_44 = piVar5;
    if (*piVar5 == 5) {
      local_34 = (int *)piVar5[1];
      if (*piVar13 == 3) {
        local_2c = FUN_007c4b80();
        if ((float)piVar13[1] != (float)local_2c) goto LAB_0060ed42;
        piVar5 = (int *)FUN_00607cb0(local_34,local_2c);
      }
      else if (*piVar13 == 4) {
        piVar5 = (int *)(local_34[4] +
                        ((1 << (*(byte *)((int)local_34 + 7) & 0x1f)) - 1U &
                        *(uint *)(piVar13[1] + 8)) * 0x14);
        do {
          if ((*piVar5 == 4) && (piVar5[1] == piVar13[1])) {
            piVar5 = piVar5 + 2;
            goto LAB_0060ed4b;
          }
          piVar5 = (int *)piVar5[4];
        } while (piVar5 != (int *)0x0);
        piVar5 = &DAT_008a3c5c;
      }
      else {
LAB_0060ed42:
        piVar5 = (int *)FUN_00607c40(local_34);
      }
LAB_0060ed4b:
      if (*piVar5 == 0) {
        piVar12 = (int *)FUN_0060e960(param_1,local_44,piVar13,0);
        goto LAB_0060ec71;
      }
      *piVar12 = *piVar5;
      piVar12[1] = piVar5[1];
    }
    else {
      puVar8 = (undefined4 *)FUN_0060bea0(piVar13,0);
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xc) + (int)local_38);
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
    }
    goto switchD_0060ea8b_default;
  case 7:
    FUN_0060bf90(param_1,local_3c + 0x10,local_40 + (uVar6 >> 6 & 0x3ffff) * 8,piVar12);
    goto switchD_0060ea8b_default;
  case 8:
    piVar5 = *(int **)(*(int *)(local_3c + 0x18 + (uVar6 >> 0xf & 0x1ff) * 4) + 8);
    *piVar5 = *piVar12;
    piVar5[1] = piVar12[1];
    goto switchD_0060ea8b_default;
  case 9:
    uVar4 = uVar6 >> 6 & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar5 = local_44 + uVar4 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 0xf & 0x1ff;
    if (uVar6 < 0xfa) {
      FUN_0060bf90(param_1,piVar12,local_44 + uVar6 * 2,piVar5);
    }
    else {
      FUN_0060bf90(param_1,piVar12,local_40 + -2000 + uVar6 * 8,piVar5);
    }
    goto switchD_0060ea8b_default;
  case 10:
    local_38 = (int *)((uVar6 >> 0xf & 7) << ((byte)((int)(uVar6 >> 0xf & 0x1ff) >> 3) & 0x1f));
    *piVar12 = 5;
    iVar10 = FUN_00613970(param_1,0,0,0x20,5);
    *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
    *(undefined1 *)(iVar10 + 6) = 0xff;
    *(undefined4 *)(iVar10 + 0xc) = 0;
    *(undefined4 *)(iVar10 + 0x1c) = 0;
    *(undefined1 *)(iVar10 + 7) = 0;
    *(undefined4 *)(iVar10 + 0x10) = 0;
    local_2c = iVar10;
    uVar2 = FUN_00613970(param_1,0,0,(int)local_38 << 3,6);
    *(undefined4 *)(iVar10 + 0xc) = uVar2;
    for (iVar11 = *(int *)(iVar10 + 0x1c); iVar11 < (int)local_38; iVar11 = iVar11 + 1) {
      *(undefined4 *)(*(int *)(iVar10 + 0xc) + iVar11 * 8) = 0;
    }
    *(int **)(iVar10 + 0x1c) = local_38;
    FUN_00607bb0(uVar6 >> 6 & 0x1ff);
    piVar12[1] = local_2c;
    goto switchD_0060ea8b_default;
  case 0xb:
    uVar4 = uVar6 >> 6 & 0x1ff;
    piVar5 = local_44 + (uVar6 >> 0xf & 0x1ff) * 2;
    if (uVar4 < 0xfa) {
      piVar13 = local_44 + uVar4 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    if (*piVar13 != 4) {
      return (int *)0x0;
    }
    piVar12[2] = *piVar5;
    piVar12[3] = piVar5[1];
    if (*piVar5 == 5) {
      piVar3 = (int *)(*(int *)(piVar5[1] + 0x10) +
                      ((1 << (*(byte *)(piVar5[1] + 7) & 0x1f)) - 1U & *(uint *)(piVar13[1] + 8)) *
                      0x14);
      do {
        if ((*piVar3 == 4) && (piVar3[1] == piVar13[1])) {
          if (piVar3[2] != 0) {
            *piVar12 = piVar3[2];
            piVar12[1] = piVar3[3];
            goto switchD_0060ea8b_default;
          }
          break;
        }
        piVar3 = (int *)piVar3[4];
      } while (piVar3 != (int *)0x0);
      piVar12 = (int *)FUN_0060e960(param_1,piVar5,piVar13,0);
LAB_0060ec71:
      piVar5 = (int *)(*(int *)(param_1 + 0xc) + (int)local_38);
      *piVar5 = *piVar12;
      piVar5[1] = piVar12[1];
    }
    else {
      puVar8 = (undefined4 *)FUN_0060bea0(piVar13,0);
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xc) + (int)local_38);
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
    }
    goto switchD_0060ea8b_default;
  case 0xc:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar5 = local_44 + uVar4 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 6 & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar13 = local_44 + uVar6 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    if ((*piVar5 == 3) && (*piVar13 == 3)) {
      *piVar12 = 3;
      piVar12[1] = (int)((float)piVar13[1] + (float)piVar5[1]);
    }
    else {
      FUN_0060c200(piVar13,5);
    }
    goto switchD_0060ea8b_default;
  case 0xd:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar5 = local_44 + uVar4 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 6 & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar13 = local_44 + uVar6 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    if ((*piVar5 == 3) && (*piVar13 == 3)) {
      *piVar12 = 3;
      piVar12[1] = (int)((float)piVar5[1] - (float)piVar13[1]);
    }
    else {
      FUN_0060c200(piVar13,6);
    }
    goto switchD_0060ea8b_default;
  case 0xe:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar5 = local_44 + uVar4 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 6 & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar13 = local_44 + uVar6 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    if ((*piVar5 == 3) && (*piVar13 == 3)) {
      *piVar12 = 3;
      piVar12[1] = (int)((float)piVar13[1] * (float)piVar5[1]);
    }
    else {
      FUN_0060c200(piVar13,7);
    }
    goto switchD_0060ea8b_default;
  case 0xf:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar5 = local_44 + uVar4 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 6 & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar13 = local_44 + uVar6 * 2;
    }
    else {
      piVar13 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    if ((*piVar5 == 3) && (*piVar13 == 3)) {
      *piVar12 = 3;
      piVar12[1] = (int)((float)piVar5[1] / (float)piVar13[1]);
    }
    else {
      FUN_0060c200(piVar13,8);
    }
    goto switchD_0060ea8b_default;
  case 0x10:
    uVar4 = uVar6 >> 6 & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar12 = local_44 + uVar4 * 2;
    }
    else {
      piVar12 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    if ((uVar6 >> 0xf & 0x1ff) < 0xfa) {
      FUN_0060c200(piVar12,9);
    }
    else {
      FUN_0060c200(piVar12,9);
    }
    goto switchD_0060ea8b_default;
  case 0x11:
    piVar5 = local_44 + (uVar6 >> 0xf & 0x1ff) * 2;
    if (*piVar5 != 3) {
      if ((*piVar5 != 4) || (iVar11 = FUN_00607570(piVar5[1] + 0x10,&local_28), iVar11 == 0)) {
        local_18 = 0;
        iVar11 = FUN_00612820(param_1,piVar5,&local_18,piVar12,10);
        if (iVar11 == 0) {
          piVar12 = &local_18;
          if ((*piVar5 != 3) &&
             ((*piVar5 != 4 || (iVar11 = FUN_00607570(piVar5[1] + 0x10,&local_1c), iVar11 == 0)))) {
            piVar12 = piVar5;
          }
          FUN_0060b630(param_1,piVar12,"perform arithmetic on");
        }
        goto switchD_0060ea8b_default;
      }
      local_18 = 3;
      local_14 = local_28;
      piVar5 = &local_18;
    }
    *piVar12 = 3;
    piVar12[1] = (int)-(float)piVar5[1];
    goto switchD_0060ea8b_default;
  case 0x12:
    uVar6 = uVar6 >> 0xf & 0x1ff;
    if ((local_44[uVar6 * 2] == 0) || ((local_44[uVar6 * 2] == 1 && (local_44[uVar6 * 2 + 1] == 0)))
       ) {
      *piVar12 = 1;
      piVar12[1] = 1;
    }
    else {
      *piVar12 = 1;
      piVar12[1] = 0;
    }
    goto switchD_0060ea8b_default;
  case 0x13:
    uVar4 = uVar6 >> 6 & 0x1ff;
    uVar6 = uVar6 >> 0xf & 0x1ff;
    FUN_006128d0(param_1,(uVar4 - uVar6) + 1,uVar4);
    iVar11 = *(int *)(param_1 + 0xc);
    *(undefined4 *)((int)local_38 + iVar11) = *(undefined4 *)(iVar11 + uVar6 * 8);
    *(undefined4 *)((int)local_38 + iVar11 + 4) = *(undefined4 *)(iVar11 + 4 + uVar6 * 8);
    goto switchD_0060ea8b_default;
  case 0x14:
    local_48 = local_48 + ((uVar6 >> 6 & 0x3ffff) - 0x1ffff);
    goto switchD_0060ea8b_default;
  case 0x15:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar12 = local_44 + uVar4 * 2;
    }
    else {
      piVar12 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 6 & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar5 = local_44 + uVar6 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    if (*piVar12 == *piVar5) {
      if (uVar6 < 0xfa) {
        piVar12 = local_44 + uVar6 * 2;
      }
      else {
        piVar12 = (int *)(local_40 + -2000 + uVar6 * 8);
      }
      if (uVar4 < 0xfa) {
        piVar5 = local_44 + uVar4 * 2;
      }
      else {
        piVar5 = (int *)(local_40 + -2000 + uVar4 * 8);
      }
      iVar11 = FUN_00608360(param_1,piVar5,piVar12);
      if (iVar11 == 0) goto LAB_0060f420;
      piVar12 = (int *)0x1;
    }
    else {
LAB_0060f420:
      piVar12 = (int *)0x0;
    }
    if (piVar12 != local_34) {
      local_48 = local_48 + 1;
      goto switchD_0060ea8b_default;
    }
    break;
  case 0x16:
    uVar4 = uVar6 >> 6 & 0x1ff;
    if (uVar4 < 0xfa) {
      piVar12 = local_44 + uVar4 * 2;
    }
    else {
      piVar12 = (int *)(local_40 + -2000 + uVar4 * 8);
    }
    uVar6 = uVar6 >> 0xf & 0x1ff;
    if (uVar6 < 0xfa) {
      piVar5 = local_44 + uVar6 * 2;
    }
    else {
      piVar5 = (int *)(local_40 + -2000 + uVar6 * 8);
    }
    piVar12 = (int *)FUN_00608230(param_1,piVar5,piVar12);
    if (piVar12 != local_34) {
      local_48 = local_48 + 1;
      goto switchD_0060ea8b_default;
    }
    break;
  case 0x17:
    piVar12 = (int *)FUN_006082c0(param_1);
    if (piVar12 == local_34) {
      local_48 = local_48 + ((*local_48 >> 6 & 0x3ffff) - 0x1fffe);
    }
    else {
      local_48 = local_48 + 1;
    }
    goto switchD_0060ea8b_default;
  case 0x18:
    piVar5 = local_44 + (uVar6 >> 0xf & 0x1ff) * 2;
    iVar11 = *piVar5;
    if ((iVar11 == 0) || ((iVar11 == 1 && (piVar5[1] == 0)))) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == (uVar6 >> 6 & 0x1ff)) {
      local_48 = local_48 + 1;
      goto switchD_0060ea8b_default;
    }
    *piVar12 = iVar11;
    piVar12[1] = piVar5[1];
    break;
  case 0x19:
  case 0x1a:
    uVar4 = uVar6 >> 0xf & 0x1ff;
    if (uVar4 != 0) {
      *(int **)(param_1 + 8) = piVar12 + uVar4 * 2;
    }
    local_2c = (uVar6 >> 6 & 0x1ff) - 1;
    uVar4 = FUN_0060e7d0(param_1,piVar12);
    iVar11 = local_2c;
    if (uVar4 == 0) {
      if (((byte)uVar6 & 0x3f) == 0x19) {
        *(uint **)(*(int *)(param_1 + 0x14) + -0xc) = local_48;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x10) = 0xc;
      }
      else {
        piVar12 = *(int **)(*(int *)(param_1 + 0x14) + -0x18);
        local_1c = piVar12 + (uVar6 >> 0x18) * 2;
        local_44 = piVar12;
        if (*(int *)(param_1 + 0x48) != 0) {
          FUN_0060b9d0(param_1,piVar12);
        }
        iVar11 = 0;
        if (local_1c < *(int **)(param_1 + 8)) {
          piVar5 = piVar12 + -2;
          piVar13 = local_1c;
          do {
            *piVar5 = *piVar13;
            piVar5[1] = piVar13[1];
            piVar13 = piVar13 + 2;
            iVar11 = iVar11 + 1;
            piVar5 = piVar5 + 2;
            piVar12 = local_44;
          } while (piVar13 < *(int **)(param_1 + 8));
        }
        *(int **)(param_1 + 8) = piVar12 + iVar11 * 2;
        *(int **)(*(int *)(param_1 + 0x14) + -0x14) = piVar12 + iVar11 * 2;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + -0xc) =
             *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc);
        piVar12 = (int *)(*(int *)(param_1 + 0x14) + -4);
        *piVar12 = *piVar12 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x10) = 8;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + -0x18);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *(undefined4 *)(param_1 + 0xc) = *puVar8;
      }
      goto LAB_0060e9e0;
    }
    if (*(uint *)(param_1 + 8) < uVar4) {
      *(uint **)(*(int *)(param_1 + 0x14) + -0xc) = local_48;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x10) = 8;
      return (int *)0x0;
    }
    FUN_00606d50(param_1,local_2c,uVar4);
    if (-1 < iVar11) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    }
    goto switchD_0060ea8b_default;
  case 0x1b:
    goto switchD_0060ea8b_caseD_1b;
  case 0x1c:
    local_44 = piVar12 + 2;
    local_38 = piVar12 + 4;
    if (*piVar12 != 3) {
      FUN_00613880(param_1,"`for\' initial value must be a number");
    }
    if (*local_44 != 3) {
      if ((*local_44 == 4) && (iVar11 = FUN_00607570(local_44[1] + 0x10,&local_24), iVar11 != 0)) {
        *local_44 = 3;
        local_44[1] = local_24;
      }
      else {
        local_44 = (int *)0x0;
        FUN_00613880(param_1,"`for\' limit must be a number");
      }
    }
    if (*local_38 != 3) {
      if ((*local_38 == 4) && (iVar11 = FUN_00607570(local_38[1] + 0x10,&iStack_20), iVar11 != 0)) {
        *local_38 = 3;
        local_38[1] = iStack_20;
      }
      else {
        local_38 = (int *)0x0;
        FUN_00613880(param_1,"`for\' step must be a number");
      }
    }
    fStack_30 = (float)local_44[1];
    local_34 = (int *)((float)local_38[1] + (float)piVar12[1]);
    if ((float)local_38[1] <= _DAT_00890968) {
      if ((float)local_34 < fStack_30) goto switchD_0060ea8b_default;
    }
    else if ((float)local_34 < fStack_30 == ((float)local_34 == fStack_30))
    goto switchD_0060ea8b_default;
    local_48 = local_48 + ((uVar6 >> 6 & 0x3ffff) - 0x1ffff);
    piVar12[1] = (int)local_34;
    goto switchD_0060ea8b_default;
  case 0x1d:
    iVar10 = (uVar6 >> 6 & 0x1ff) + 1;
    piVar12[iVar10 * 2 + 4] = *piVar12;
    piVar5 = piVar12 + iVar10 * 2 + 4;
    piVar5[1] = piVar12[1];
    piVar5[2] = piVar12[2];
    piVar5[3] = piVar12[3];
    piVar5[4] = piVar12[4];
    piVar5[5] = piVar12[5];
    *(int **)(param_1 + 8) = piVar5 + 6;
    FUN_006126a0(param_1,piVar5,iVar10);
    piVar12 = (int *)(*(int *)(param_1 + 0xc) + 0x10 + (int)local_34 * 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    piVar5 = piVar12 + iVar10 * 2 + 1;
    iVar11 = iVar10;
    do {
      iVar1 = iVar11 * 2;
      iVar11 = iVar11 + -1;
      piVar13 = piVar5 + -2;
      piVar5[-3] = piVar12[iVar10 * 2 + iVar1 + -2];
      *piVar13 = piVar13[iVar10 * 2];
      piVar5 = piVar13;
    } while (0 < iVar11);
    if (*piVar12 == 0) {
      local_48 = local_48 + 1;
      goto switchD_0060ea8b_default;
    }
    break;
  case 0x1e:
    if (*piVar12 == 5) {
      piVar12[2] = 5;
      piVar12[3] = piVar12[1];
      iVar11 = FUN_00613eb0(param_1,&DAT_008a4274,4);
      piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x10) +
                      ((1 << (*(byte *)(*(int *)(param_1 + 0x44) + 7) & 0x1f)) - 1U &
                      *(uint *)(iVar11 + 8)) * 0x14);
      do {
        if ((*piVar5 == 4) && (piVar5[1] == iVar11)) {
          piVar5 = piVar5 + 2;
          goto LAB_0060f80b;
        }
        piVar5 = (int *)piVar5[4];
      } while (piVar5 != (int *)0x0);
      piVar5 = &DAT_008a3c5c;
LAB_0060f80b:
      *piVar12 = *piVar5;
      piVar12[1] = piVar5[1];
    }
    local_48 = local_48 + ((uVar6 >> 6 & 0x3ffff) - 0x1ffff);
    goto switchD_0060ea8b_default;
  case 0x1f:
  case 0x20:
    if (*piVar12 != 5) {
      return (int *)0x0;
    }
    local_38 = (int *)piVar12[1];
    if ((uVar6 & 0x3f) == 0x1f) {
      iVar11 = (uVar6 >> 6 & 0x1f) + 1;
    }
    else {
      iVar11 = (*(int *)(param_1 + 8) - (int)piVar12 >> 3) + -1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    }
    if (0 < iVar11) {
      local_34 = (int *)(iVar11 + (uVar6 >> 6 & 0x3ffe0));
      do {
        piVar5 = (int *)FUN_00607cb0(local_38,local_34);
        if (piVar5 == &DAT_008a3c5c) {
          local_c = (float)(int)local_34;
          local_10 = 3;
          piVar5 = (int *)FUN_0060bd50(param_1,local_38,&local_10);
        }
        *piVar5 = piVar12[iVar11 * 2];
        piVar5[1] = piVar12[iVar11 * 2 + 1];
        iVar11 = iVar11 + -1;
        local_34 = (int *)((int)local_34 + -1);
      } while (0 < iVar11);
    }
    goto switchD_0060ea8b_default;
  case 0x21:
    puVar8 = *(undefined4 **)(param_1 + 0x48);
    while ((puVar8 != (undefined4 *)0x0 && (piVar5 = (int *)puVar8[2], piVar12 <= piVar5))) {
      puVar8[3] = *piVar5;
      puVar8[4] = piVar5[1];
      puVar9 = (undefined4 *)*puVar8;
      puVar8[2] = puVar8 + 3;
      *(undefined4 **)(param_1 + 0x48) = puVar9;
      puVar8 = puVar9;
    }
    goto switchD_0060ea8b_default;
  case 0x22:
    iVar11 = *(int *)(*(int *)(*(int *)(local_3c + 0xc) + 0x10) + (uVar6 >> 6 & 0x3ffff) * 4);
    local_34 = (int *)(uint)*(byte *)(iVar11 + 0x44);
    local_2c = FUN_00613970(param_1,0,0,(int)local_34 * 4 + 0x18,0xc);
    *(undefined1 *)(local_2c + 6) = 0;
    *(undefined4 *)(local_2c + 0x10) = *(undefined4 *)(local_3c + 0x10);
    *(undefined4 *)(local_2c + 0x14) = *(undefined4 *)(local_3c + 0x14);
    *(char *)(local_2c + 7) = (char)local_34;
    *(int *)(local_2c + 0xc) = iVar11;
    if (0 < (int)local_34) {
      local_38 = local_34;
      local_34 = (int *)(local_2c + 0x18);
      do {
        uVar6 = *local_48 >> 0xf & 0x1ff;
        if (((byte)*local_48 & 0x3f) == 4) {
          puVar7 = *(undefined4 **)(local_3c + 0x18 + uVar6 * 4);
        }
        else {
          local_1c = local_44 + uVar6 * 2;
          puVar9 = *(undefined4 **)(param_1 + 0x48);
          puVar8 = (undefined4 *)(param_1 + 0x48);
          while ((puVar7 = puVar9, puVar7 != (undefined4 *)0x0 && (local_1c <= (int *)puVar7[2]))) {
            if ((int *)puVar7[2] == local_1c) goto LAB_0060f9f2;
            puVar8 = puVar7;
            puVar9 = (undefined4 *)*puVar7;
          }
          puVar7 = (undefined4 *)FUN_00613970(param_1,0,0,0x14,0xd);
          *(undefined1 *)(puVar7 + 1) = 10;
          *(undefined1 *)((int)puVar7 + 5) = 1;
          puVar7[2] = local_1c;
          *puVar7 = *puVar8;
          *puVar8 = puVar7;
        }
LAB_0060f9f2:
        *local_34 = (int)puVar7;
        local_34 = local_34 + 1;
        local_48 = local_48 + 1;
        local_38 = (int *)((int)local_38 + -1);
      } while (local_38 != (int *)0x0);
    }
    *piVar12 = 6;
    piVar12[1] = local_2c;
  default:
    goto switchD_0060ea8b_default;
  }
  local_48 = local_48 + ((*local_48 >> 6 & 0x3ffff) - 0x1fffe);
  goto switchD_0060ea8b_default;
switchD_0060ea8b_caseD_1b:
  iVar11 = *(int *)(param_1 + 0x14);
  local_2c = iVar11 + -0x18;
  uVar6 = uVar6 >> 0xf & 0x1ff;
  if (uVar6 != 0) {
    *(int **)(param_1 + 8) = piVar12 + uVar6 * 2 + -2;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x48);
  while ((puVar8 != (undefined4 *)0x0 && (piVar5 = (int *)puVar8[2], local_44 <= piVar5))) {
    puVar8[3] = *piVar5;
    puVar8[4] = piVar5[1];
    puVar8[2] = puVar8 + 3;
    puVar8 = (undefined4 *)*puVar8;
    *(undefined4 **)(param_1 + 0x48) = puVar8;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 8;
  *(uint **)(*(int *)(param_1 + 0x14) + 0xc) = local_48;
  if ((*(byte *)(iVar11 + -0x10) & 4) == 0) {
    return piVar12;
  }
  iVar11 = (*(uint *)(*(int *)(iVar11 + -0xc) + -4) >> 6 & 0x1ff) - 1;
  FUN_00606d50(param_1,iVar11,piVar12);
  if (-1 < iVar11) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  }
  goto LAB_0060e9f6;
}

