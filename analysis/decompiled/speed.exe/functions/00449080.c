/* speed.exe 00449080 FUN_00449080; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 FUN_00449080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  if (DAT_0090db24 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = (undefined *)(DAT_0090db24 + -4);
  }
  do {
    if (puVar6 == &DAT_0090db20) {
      return 0;
    }
    piVar1 = *(int **)(puVar6 + 0x14);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 4))();
      iVar7 = 0;
      if (0 < iVar3) {
        do {
          uVar4 = (**(code **)(*piVar1 + 0x10))(iVar7);
          iVar5 = FUN_00460bf0(uVar4);
          if (param_1 == iVar5) {
            piVar2 = *(int **)(puVar6 + 0x14);
            iVar5 = (**(code **)(*piVar2 + 4))();
            if ((iVar7 < iVar5) && (iVar5 = (**(code **)(*piVar2 + 0xc))(iVar7), iVar5 != 0)) {
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
    }
    if (*(int *)(puVar6 + 4) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)(*(int *)(puVar6 + 4) + -4);
    }
  } while( true );
}

