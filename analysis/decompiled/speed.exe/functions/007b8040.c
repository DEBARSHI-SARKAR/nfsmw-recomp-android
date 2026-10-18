/* speed.exe 007b8040 FUN_007b8040; analysis pseudocode, not buildable source.
 * calls 005881c0 FUN_005881c0
 * calls 007a6fd0 FUN_007a6fd0
 * calls 007af4f0 FUN_007af4f0
 * calls 00747ae0 FUN_00747ae0
 * calls 00652ad0 _malloc
 * calls 00593560 FUN_00593560
 * calls 00593880 FUN_00593880
 * calls 005157e0 FUN_005157e0
 * calls 0059bd30 FUN_0059bd30
 * calls 007aed20 FUN_007aed20
 * calls 007b5ef0 FUN_007b5ef0
 * calls 00460bf0 FUN_00460bf0
 * calls 007b3f00 FUN_007b3f00
 * calls 00747ac0 FUN_00747ac0
 * calls 00588220 FUN_00588220
 */

void __thiscall FUN_007b8040(int *param_1,uint param_2)

{
  int ***pppiVar1;
  int ***pppiVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int ****ppppiVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int local_24;
  int ***local_14;
  int ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088345c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593880();
  if ((param_2 < 0x4f) || (0x51 < param_2)) {
LAB_007b80be:
    iVar5 = FUN_007aed20(param_2);
  }
  else {
    iVar5 = 0;
    if (param_2 == 0x4f) {
      iVar5 = 0;
    }
    else if (param_2 == 0x50) {
      iVar5 = 1;
    }
    else if (param_2 == 0x51) {
      iVar5 = 2;
    }
    if ((((&DAT_009b9e3c)[iVar5] == 0) || (param_1[iVar5 + 0xb5] != 0)) ||
       (iVar5 = *(int *)((&DAT_009b9e3c)[iVar5] + 0xc), iVar5 == 0)) goto LAB_007b80be;
  }
  uVar6 = FUN_007a6fd0(iVar5);
  if (param_1[0x6f] != -1) goto LAB_007b812f;
  if (uVar6 < 0x3437a53) {
    if (uVar6 == 0x3437a52) {
      param_1[0x6f] = 1;
      goto LAB_007b812f;
    }
    if ((uVar6 != 0xda27) && (uVar6 == 0x2daab07)) {
      param_1[0x6f] = 0;
      goto LAB_007b812f;
    }
  }
  else if (uVar6 == 0x3797533) {
    param_1[0x6f] = 2;
    goto LAB_007b812f;
  }
  param_1[0x6f] = 0;
LAB_007b812f:
  local_14 = (int ***)&local_14;
  local_4 = 0;
  local_10 = local_14;
  FUN_007af4f0(param_2,&local_14,0);
  local_24 = 0;
  if ((int ****)local_14 != &local_14) {
    do {
      uVar7 = FUN_00747ae0(0xebb03e66,0);
      if (uVar7 == uVar6) {
        if ((int ****)local_14 == (int ****)0x0) {
          ppppiVar8 = (int ****)0x0;
        }
        else {
          ppppiVar8 = (int ****)(local_14 + -1);
        }
        uVar9 = FUN_007b5ef0(param_1[0x52],*(byte *)((int)ppppiVar8[3] + 5) >> 5);
        puVar10 = _malloc(0x20);
        local_4._0_1_ = 1;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          pppiVar1 = (int ***)*local_14;
          pppiVar2 = (int ***)local_14[1];
          *pppiVar2 = (int **)pppiVar1;
          pppiVar1[1] = (int **)pppiVar2;
          ppppiVar8 = (int ****)(local_14 + -1);
          FUN_005881c0(0xc6afdd7e,0);
          *puVar10 = &PTR_FUN_008b7580;
          puVar10[6] = ppppiVar8;
          puVar10[7] = uVar9;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if ((param_1[param_1[0x6f] + 0x70] == -1) && (iVar5 == *(int *)(puVar10[6] + 0xc))) {
          param_1[param_1[0x6f] + 0x70] = local_24;
        }
        FUN_0059bd30(puVar10);
        iVar11 = FUN_00588220(local_24);
        if (iVar11 != 0) {
          uVar12 = 0;
          uVar9 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
          bVar3 = FUN_00747ac0(uVar9,uVar12);
          uVar12 = 0;
          uVar9 = FUN_00460bf0("GREEN",0);
          bVar4 = FUN_00747ac0(uVar9,uVar12);
          uVar12 = 0;
          uVar9 = FUN_00460bf0(&DAT_008a15c0,0);
          uVar7 = FUN_00747ac0(uVar9,uVar12);
          FUN_005157e0(*(undefined4 *)(iVar11 + 0xc),
                       ((bVar3 | 0xffffff00) << 8 | (uint)bVar4) << 8 | uVar7 & 0xff);
        }
        local_24 = local_24 + 1;
      }
      else {
        pppiVar1 = (int ***)*local_14;
        pppiVar2 = (int ***)local_14[1];
        *pppiVar2 = (int **)pppiVar1;
        pppiVar1[1] = (int **)pppiVar2;
        if ((int ****)(local_14 + -1) != (int ****)0x0) {
          (*(code *)*local_14[-1])(1);
        }
      }
    } while ((int ****)local_14 != &local_14);
  }
  if (DAT_009b9e84 == 0) {
    if (param_1[param_1[0x6f] + 0x70] == -1) {
      param_1[param_1[0x6f] + 0x70] = 0;
    }
    FUN_00593560(param_1[param_1[0x6f] + 0x70]);
  }
  else {
    param_1[param_1[0x6f] + 0x70] = DAT_009b9e84 + -1;
    FUN_00593560(DAT_009b9e84 + -1);
    DAT_009b9e84 = 0;
  }
  (**(code **)(*param_1 + 0xc))();
  local_4 = 0xffffffff;
  FUN_007b3f00();
  ExceptionList = local_c;
  return;
}

