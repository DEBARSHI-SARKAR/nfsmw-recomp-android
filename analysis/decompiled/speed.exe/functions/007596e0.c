/* speed.exe 007596e0 FUN_007596e0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 0074d070 FUN_0074d070
 * calls 00460bf0 FUN_00460bf0
 * calls 0056e2c0 FUN_0056e2c0
 * calls 00751670 FUN_00751670
 * calls 00756e90 FUN_00756e90
 * calls 00747c40 FUN_00747c40
 */

void __thiscall FUN_007596e0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  iVar1 = param_2;
  piVar7 = (int *)0x0;
  uVar3 = FUN_00751670(*param_1,param_2,0,param_3);
  param_2 = 0;
LAB_00759710:
  do {
    param_2 = param_2 + 1;
    if (0xf < param_2) {
      return;
    }
    iVar4 = FUN_0045da30(uVar3);
    iVar4 = iVar4 + 1;
    if (0 < iVar4) {
      do {
        piVar7 = (int *)FUN_00747c40(*param_1,iVar1,0,piVar7,param_3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  } while (piVar7 == (int *)0x0);
  if (iVar1 == 0x4d) goto code_r0x0075975a;
  if ((iVar1 == 0x4c) && (param_1[0xc2] == 2)) {
    iVar4 = FUN_0074d070();
    bVar8 = iVar4 == 0x3797533;
    goto LAB_007597a2;
  }
  goto LAB_007597a8;
code_r0x0075975a:
  if ((*(byte *)((int)piVar7 + 5) & 0x1f) != 8) {
    iVar4 = FUN_0074d070();
    iVar5 = FUN_00460bf0(&DAT_008b516c);
    if (iVar4 == iVar5) {
      cVar2 = FUN_0056e2c0();
      bVar8 = cVar2 == '\0';
LAB_007597a2:
      if (bVar8) goto LAB_00759710;
    }
LAB_007597a8:
    piVar6 = &DAT_009038d4;
    while ((((int)(short)piVar6[-1] != *param_1 || (*(short *)((int)piVar6 + -2) != iVar1)) ||
           (*piVar6 != *piVar7))) {
      piVar6 = piVar6 + 2;
      if (0x904323 < (int)piVar6) {
        FUN_00756e90(iVar1,piVar7,1);
        return;
      }
    }
  }
  goto LAB_00759710;
}

