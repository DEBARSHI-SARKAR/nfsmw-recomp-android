/* speed.exe 00837bf0 FUN_00837bf0; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00847b60 FUN_00847b60
 */

int FUN_00837bf0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    iVar1 = FUN_0083e390(uVar2);
    if (0 < iVar1) {
      do {
        iVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
        if (iVar3 != 0) {
          uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar5);
          iVar3 = FUN_0083e3b0(uVar2);
          if ((((iVar3 != 0) && (*(int **)(iVar3 + 0x100) != (int *)0x0)) &&
              (iVar3 = **(int **)(iVar3 + 0x100), iVar3 != 0)) &&
             ((*(uint *)(iVar3 + 0xf8) & param_2) != 0)) {
            iVar4 = iVar4 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    return iVar4;
  }
  return 0;
}

