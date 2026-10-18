/* speed.exe 007594a0 FUN_007594a0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00747ec0 FUN_00747ec0
 * calls 007517d0 FUN_007517d0
 * calls 00756e90 FUN_00756e90
 * calls 00747c40 FUN_00747c40
 * calls 00759470 FUN_00759470
 */

void __fastcall FUN_007594a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_10 [4];
  
  iVar4 = 0;
  do {
    iVar1 = *param_1;
    if ((((iVar1 != 4) || (iVar4 != 0x3a)) && ((iVar4 < 0x4d || (0x4d < iVar4)))) &&
       ((iVar4 < 0x53 || (0x82 < iVar4)))) {
      switch(iVar4) {
      case 0x4c:
        iVar1 = FUN_00747c40(iVar1,0x4c,*(undefined4 *)(iVar1 * 0xd0 + 0xcc + DAT_009b09d8),0,
                             0xffffffff);
        if (iVar1 != 0) {
          param_1[0x5e] = iVar1;
          FUN_007517d0();
        }
        break;
      default:
        iVar1 = FUN_00747ec0(iVar1,iVar4,0);
        if (iVar1 != 0) {
          FUN_00756e90(iVar4,iVar1,1);
        }
        break;
      case 0x85:
        uVar6 = 0xffffffff;
        uVar5 = 0;
        uVar2 = FUN_00460bf0("ORANGE",0,0xffffffff);
        iVar1 = FUN_00747c40(*param_1,0x85,uVar2,uVar5,uVar6);
        if (iVar1 == 0) {
LAB_007595df:
          FUN_00759470(iVar4,0);
        }
        else {
          param_1[0x97] = iVar1;
          FUN_007517d0();
        }
        break;
      case 0x86:
        uVar6 = 0xffffffff;
        uVar5 = 0;
        uVar2 = FUN_00460bf0("ORANGE",0,0xffffffff);
        iVar1 = FUN_00747c40(*param_1,0x86,uVar2,uVar5,uVar6);
        if (iVar1 == 0) goto LAB_007595df;
        param_1[0x98] = iVar1;
        FUN_007517d0();
        break;
      case 0x87:
        uVar6 = 0xffffffff;
        uVar5 = 0;
        uVar2 = FUN_00460bf0("WHITE",0,0xffffffff);
        iVar1 = FUN_00747c40(*param_1,0x87,uVar2,uVar5,uVar6);
        if (iVar1 == 0) goto LAB_007595df;
        param_1[0x99] = iVar1;
        FUN_007517d0();
      }
    }
    iVar4 = iVar4 + 1;
    if (0x8a < iVar4) {
      local_10[0] = FUN_00460bf0("VINYL_L1_COLOR01");
      local_10[1] = FUN_00460bf0("VINYL_L1_COLOR03");
      local_10[2] = FUN_00460bf0("VINYL_L2_COLOR11");
      local_10[3] = FUN_00460bf0("VINYL_L1_COLOR01");
      iVar1 = 0x4f;
      puVar3 = local_10;
      iVar4 = 4;
      do {
        uVar2 = FUN_00747c40(*param_1,iVar1,*puVar3,0,0xffffffff);
        FUN_00756e90(iVar1,uVar2,1);
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
  } while( true );
}

