/* speed.exe 00756e90 FUN_00756e90; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 004647c0 FUN_004647c0
 * calls 00460c20 FUN_00460c20
 * calls 007517d0 FUN_007517d0
 * calls 00747c40 FUN_00747c40
 */

int __thiscall FUN_00756e90(int *param_1,int param_2,int param_3,char param_4)

{
  ushort uVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_40 [64];
  
  switch(param_2) {
  case 0x17:
    if (param_3 == 0) {
      param_1[0x40] = 0;
      param_1[0x43] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      goto LAB_007571b6;
    }
    uVar1 = *(ushort *)(param_3 + 10);
    if (uVar1 != 0xffff) {
      iVar8 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
      psVar2 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          psVar2 = psVar2 + 1;
          iVar4 = *(int *)(DAT_009b09d4 + 0x1c) + *psVar2 * 8;
          if (*(int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar2 * 8) == 0x796c0cb0) {
            if (iVar4 != 0) {
              uVar6 = *(undefined4 *)(iVar4 + 4);
              goto LAB_00756f61;
            }
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
    }
    uVar6 = 0;
LAB_00756f61:
    FUN_004647c0(local_40,"%s_KIT%02d_",*param_1 * 0xd0 + DAT_009b09d8,uVar6);
    uVar6 = FUN_00460bf0(local_40);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    uVar3 = FUN_00460c20("DAMAGE0_FRONT",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x2e,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    param_1[0x40] = iVar7;
    uVar3 = FUN_00460c20("DAMAGE0_REAR",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x31,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    param_1[0x43] = iVar7;
    uVar3 = FUN_00460c20("DAMAGE0_FRONTLEFT",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x2f,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    param_1[0x41] = iVar7;
    uVar3 = FUN_00460c20("DAMAGE0_FRONTRIGHT",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x30,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    param_1[0x42] = iVar7;
    uVar3 = FUN_00460c20("DAMAGE0_REARLEFT",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x32,uVar3,uVar9,uVar10);
    param_1[0x44] = iVar7;
    uVar9 = 0xffffffff;
    uVar3 = 0;
    uVar6 = FUN_00460c20("DAMAGE0_REARRIGHT",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x33,uVar6,uVar3,uVar9);
    param_1[0x45] = iVar7;
    uVar1 = *(ushort *)(param_3 + 10);
    if (uVar1 != 0xffff) {
      iVar8 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
      psVar2 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          psVar2 = psVar2 + 1;
          iVar4 = *(int *)(DAT_009b09d4 + 0x1c) + *psVar2 * 8;
          if (*(int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar2 * 8) == 0x796c0cb0) {
            if (iVar4 != 0) {
              uVar6 = *(undefined4 *)(iVar4 + 4);
              goto LAB_007570d3;
            }
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
    }
    uVar6 = 0;
LAB_007570d3:
    FUN_004647c0(local_40,"%s_KIT%02d_",*param_1 * 0xd0 + DAT_009b09d8,uVar6);
    uVar6 = FUN_00460bf0(local_40);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    uVar3 = FUN_00460c20("DECAL_LEFT_DOOR_RECT_MEDIUM",uVar6,0,0xffffffff);
    iVar7 = FUN_00747c40(*param_1,0x48,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    uVar3 = FUN_00460c20("DECAL_RIGHT_DOOR_RECT_MEDIUM",uVar6,0,0xffffffff);
    iVar8 = FUN_00747c40(*param_1,0x49,uVar3,uVar9,uVar10);
    uVar10 = 0xffffffff;
    uVar9 = 0;
    uVar3 = FUN_00460c20("DECAL_LEFT_QUARTER_RECT_MEDIUM",uVar6,0,0xffffffff);
    iVar4 = FUN_00747c40(*param_1,0x4a,uVar3,uVar9,uVar10);
    uVar9 = 0xffffffff;
    uVar3 = 0;
    uVar6 = FUN_00460c20("DECAL_RIGHT_QUARTER_RECT_MEDIUM",uVar6,0,0xffffffff);
    iVar5 = FUN_00747c40(*param_1,0x4b,uVar6,uVar3,uVar9);
    param_1[0x5a] = iVar7;
    param_1[0x5b] = iVar8;
    param_1[0x5c] = iVar4;
    param_1[0x5d] = iVar5;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x43:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    return param_1[param_2 + 0x12];
  }
LAB_007571b6:
  iVar7 = param_1[param_2 + 0x12];
  param_1[param_2 + 0x12] = param_3;
  if (param_4 != '\0') {
    FUN_007517d0();
  }
  return iVar7;
}

