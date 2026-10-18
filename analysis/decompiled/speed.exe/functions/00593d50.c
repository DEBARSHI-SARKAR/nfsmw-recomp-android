/* speed.exe 00593d50 FUN_00593d50; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00589900 FUN_00589900
 * calls 00589870 FUN_00589870
 * calls 00575960 FUN_00575960
 * calls 00589ab0 FUN_00589ab0
 * calls 00515990 FUN_00515990
 * calls 00589d40 FUN_00589d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00593d50(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (float)param_1[0x14]) {
    iVar3 = param_1[0xd];
    iVar2 = param_1[0xc];
    if (iVar2 < iVar3) {
      iVar1 = param_1[0x12] + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (iVar3 <= iVar2 + iVar1) {
        iVar1 = iVar3 - iVar2;
      }
      param_1[0x12] = iVar1;
      FUN_00575960(iVar1);
    }
    if (param_1[2] != 0) {
      FUN_00589870(param_1[0xc],param_1[0xd],param_1[0x12] + 1,param_1[0x12] + 1);
      return 1;
    }
  }
  else {
    if (param_2 != (float)param_1[0x13]) {
      if ((param_2 != -1.7055997e-24) || (param_1[2] == 0)) {
        return 0;
      }
      FUN_00589900();
      iVar3 = *(int *)(param_1[2] + 0x58);
      FUN_00515990(&param_2);
      if (param_2 <= _DAT_00890968) {
        if (_DAT_00890968 <= param_2) {
          if (iVar3 == 0x2711) {
            return 0;
          }
          if (iVar3 == 10000) {
            iVar2 = param_1[0xc];
          }
          else {
            if (iVar3 != -10000) goto LAB_00593e8e;
            iVar2 = -param_1[0xc];
          }
          FUN_00589ab0(iVar2);
        }
        else {
          iVar3 = 1;
          FUN_00516c90(0x148cd7,*(undefined4 *)(*param_1 + 0x10),0);
        }
      }
      else {
        iVar3 = -1;
        FUN_00516c90(0x704,*(undefined4 *)(*param_1 + 0x10),0);
      }
LAB_00593e8e:
      FUN_00589ab0(iVar3);
      FUN_00589d40();
      return 1;
    }
    FUN_00589ab0(1);
    if (param_1[2] != 0) {
      FUN_00589870(param_1[0xc],param_1[0xd],param_1[0x12] + 1,param_1[0x12] + 1);
    }
  }
  return 1;
}

