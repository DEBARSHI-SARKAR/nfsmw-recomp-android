/* speed.exe 00580170 FUN_00580170; analysis pseudocode, not buildable source.
 * calls 0056e840 FUN_0056e840
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00580170(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack_8;
  
  piVar1 = param_2;
  *(undefined4 *)(param_1 + 0xbd4) = param_3;
  iVar3 = (**(code **)(*param_2 + 0xe0))();
  cVar2 = (**(code **)(*param_2 + 0x74))();
  if (cVar2 == '\0') {
    iVar4 = (**(code **)(*param_2 + 0xc4))();
    *(int *)(param_1 + 0xbc4) = *(int *)(param_1 + 0xbc4) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xc0))();
    *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xb0))();
    *(int *)(param_1 + 0xbd0) = *(int *)(param_1 + 0xbd0) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xa8))();
    *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xbc))();
    *(int *)(param_1 + 0xbbc) = *(int *)(param_1 + 0xbbc) + iVar4;
    iVar4 = (**(code **)(*param_2 + 200))();
    *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc8) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xb4))();
    *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xac))();
    *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + iVar4;
    (**(code **)(*param_2 + 0x18))();
    iVar4 = FUN_007c4b80();
    *(int *)(param_1 + 0xb44) = *(int *)(param_1 + 0xb44) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xa0))();
    *(int *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb48) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0x94))();
    *(int *)(param_1 + 0xb4c) = *(int *)(param_1 + 0xb4c) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0x98))();
    *(int *)(param_1 + 0xb50) = *(int *)(param_1 + 0xb50) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xb8))();
    *(int *)(param_1 + 0xb54) = *(int *)(param_1 + 0xb54) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0xa4))();
    *(int *)(param_1 + 0xb58) = *(int *)(param_1 + 0xb58) + iVar4;
    iVar4 = (**(code **)(*param_2 + 0x10))();
    *(int *)(param_1 + 0xb5c) = *(int *)(param_1 + 0xb5c) + iVar4;
    *(int *)(param_1 + 0xb60) = *(int *)(param_1 + 0xb60) + iVar3;
    iVar4 = *(int *)(param_1 + 0xb68);
    (**(code **)(*param_2 + 0x18))();
    iVar5 = FUN_007c4b80();
    if (iVar4 < iVar5) {
      (**(code **)(*param_2 + 0x18))();
      uVar6 = FUN_007c4b80();
      *(undefined4 *)(param_1 + 0xb68) = uVar6;
      *(undefined4 *)(param_1 + 0xb64) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0xa0))();
    if (*(int *)(param_1 + 0xb70) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0xa0))();
      *(undefined4 *)(param_1 + 0xb70) = uVar6;
      *(undefined4 *)(param_1 + 0xb6c) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0x94))();
    if (*(int *)(param_1 + 0xb78) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0x94))();
      *(undefined4 *)(param_1 + 0xb78) = uVar6;
      *(undefined4 *)(param_1 + 0xb74) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0x98))();
    if (*(int *)(param_1 + 0xb80) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0x98))();
      *(undefined4 *)(param_1 + 0xb80) = uVar6;
      *(undefined4 *)(param_1 + 0xb7c) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0xb8))();
    if (*(int *)(param_1 + 0xb88) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0xb8))();
      *(undefined4 *)(param_1 + 0xb88) = uVar6;
      *(undefined4 *)(param_1 + 0xb84) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0xa4))();
    if (*(int *)(param_1 + 0xb90) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0xa4))();
      *(undefined4 *)(param_1 + 0xb90) = uVar6;
      *(undefined4 *)(param_1 + 0xb8c) = param_3;
    }
    iVar4 = (**(code **)(*param_2 + 0x10))();
    if (*(int *)(param_1 + 0xb98) < iVar4) {
      uVar6 = (**(code **)(*param_2 + 0x10))();
      *(undefined4 *)(param_1 + 0xb98) = uVar6;
      *(undefined4 *)(param_1 + 0xb94) = param_3;
    }
    if (*(int *)(param_1 + 0xba8) < param_5) {
      *(int *)(param_1 + 0xba8) = param_5;
      *(undefined4 *)(param_1 + 0xba4) = param_3;
    }
    if (*(int *)(param_1 + 0xba0) < iVar3) {
      *(int *)(param_1 + 0xba0) = iVar3;
      *(undefined4 *)(param_1 + 0xb9c) = param_3;
    }
    if (*(int *)(param_1 + 0xbb0) < param_4) {
      *(int *)(param_1 + 0xbb0) = param_4;
      *(undefined4 *)(param_1 + 0xbac) = param_3;
    }
    param_2 = (int *)0x5;
    iVar4 = 0;
    piVar8 = (int *)(param_1 + 0xa3c);
    do {
      iVar5 = iVar4;
      if (*piVar8 < param_4) break;
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 0xe;
      iVar5 = (int)param_2;
    } while (iVar4 < 5);
    param_2 = (int *)iVar5;
    if ((int)param_2 < 4) {
      iStack_8 = 4 - (int)param_2;
      puVar7 = (undefined4 *)(param_1 + 0xb0c);
      do {
        puVar9 = puVar7 + -0xe;
        puVar10 = puVar7;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        iStack_8 = iStack_8 + -1;
        puVar7 = puVar7 + -0xe;
      } while (iStack_8 != 0);
    }
    if (param_2 != (int *)0x5) {
      iVar4 = (int)param_2 * 0x38 + param_1;
      FUN_0056e840();
      *(int *)(iVar4 + 0xa3c) = param_4;
      *(undefined4 *)(iVar4 + 0xa38) = param_3;
      (**(code **)(*piVar1 + 0x18))();
      uVar6 = FUN_007c4b80();
      *(undefined4 *)(iVar4 + 0xa40) = uVar6;
      uVar6 = (**(code **)(*piVar1 + 0xa0))();
      *(undefined4 *)(iVar4 + 0xa44) = uVar6;
      uVar6 = (**(code **)(*piVar1 + 0x94))();
      *(undefined4 *)(((int)param_2 + 0x2f) * 0x38 + param_1) = uVar6;
      uVar6 = (**(code **)(*piVar1 + 0x98))();
      *(undefined4 *)(iVar4 + 0xa4c) = uVar6;
      uVar6 = (**(code **)(*piVar1 + 0x10))();
      *(undefined4 *)(iVar4 + 0xa60) = uVar6;
      *(int *)(iVar4 + 0xa5c) = param_5;
      uVar6 = (**(code **)(*piVar1 + 0xa4))();
      *(undefined4 *)(iVar4 + 0xa50) = uVar6;
      uVar6 = (**(code **)(*piVar1 + 0xb8))();
      *(undefined4 *)(iVar4 + 0xa54) = uVar6;
      *(int *)(iVar4 + 0xa58) = iVar3;
    }
  }
  return;
}

