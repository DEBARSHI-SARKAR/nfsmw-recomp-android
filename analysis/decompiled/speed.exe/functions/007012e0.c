/* speed.exe 007012e0 FUN_007012e0; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 00747ae0 FUN_00747ae0
 * calls 00747c40 FUN_00747c40
 */

undefined4 FUN_007012e0(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar3 = (**(code **)(*param_1 + 200))();
  param_2[1] = 0;
  bVar1 = false;
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x3c))();
    uVar4 = *(undefined4 *)(iVar3 * 0xd0 + 0xcc + DAT_009b09d8);
    uVar12 = 0xffffffff;
    uVar10 = 0;
    uVar9 = 0x4c;
    uVar11 = (**(code **)(*param_1 + 0x3c))(0x4c,uVar4,0,0xffffffff);
    iVar3 = FUN_00747c40(uVar11,uVar9,uVar4,uVar10,uVar12);
    if (iVar3 != 0) {
      iVar3 = FUN_00747ae0(0xd68a7bab,0);
      iVar8 = 0;
      if (0 < DAT_00902090) {
        do {
          if ((&DAT_00902028)[iVar8 * 2] == iVar3) {
            *param_2 = *(undefined4 *)(iVar8 * 8 + 0x90202c);
            return 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_00902090);
        return 1;
      }
    }
  }
  else {
    uVar11 = 0x4c;
    uVar4 = (**(code **)(*param_1 + 0x3c))(0x4c);
    iVar3 = FUN_0056f250(uVar4,uVar11);
    if (iVar3 != 0) {
      iVar3 = FUN_00747ae0(0xd68a7bab,0);
      iVar8 = 0;
      if (0 < DAT_00902090) {
        do {
          if ((&DAT_00902028)[iVar8 * 2] == iVar3) {
            *param_2 = *(undefined4 *)(iVar8 * 8 + 0x90202c);
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_00902090);
      }
      uVar11 = 0x4d;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x4d);
      iVar3 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x69;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x69);
      iVar8 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x6a;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x6a);
      iVar5 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x71;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x71);
      iVar6 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x72;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x72);
      iVar7 = FUN_0056f250(uVar4,uVar11);
      if ((((iVar8 != 0) || (iVar5 != 0)) || (iVar6 != 0)) || (iVar7 != 0)) {
        bVar1 = true;
      }
      uVar11 = 0x48;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x48);
      iVar8 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x49;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x49);
      iVar5 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x4a;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x4a);
      iVar6 = FUN_0056f250(uVar4,uVar11);
      uVar11 = 0x4b;
      uVar4 = (**(code **)(*param_1 + 0x3c))(0x4b);
      iVar7 = FUN_0056f250(uVar4,uVar11);
      if (((iVar8 == 0) && (iVar5 == 0)) && ((iVar6 == 0 && (iVar7 == 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (iVar3 != 0) {
        param_2[1] = param_2[1] | 1;
      }
      if (bVar1) {
        param_2[1] = param_2[1] | 4;
      }
      if (bVar2) {
        param_2[1] = param_2[1] | 8;
      }
    }
  }
  return 1;
}

