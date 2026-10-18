/* speed.exe 00448f20 FUN_00448f20; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 FUN_00448f20(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  if (DAT_0090db24 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = (undefined *)(DAT_0090db24 + -4);
  }
  do {
    if (puVar4 == &DAT_0090db20) {
      return 0;
    }
    iVar1 = *(int *)(puVar4 + 0x18);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = FUN_00460bf0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar5 * 4));
          if (param_1 == iVar3) {
            *param_2 = iVar1;
            *param_3 = iVar5;
            return 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
    }
    if (*(int *)(puVar4 + 4) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)(*(int *)(puVar4 + 4) + -4);
    }
  } while( true );
}

