/* speed.exe 00838420 FUN_00838420; analysis pseudocode, not buildable source.
 * calls 00838360 FUN_00838360
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00838420(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  iVar1 = FUN_00837bf0(param_1,0xffffffff);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        uVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar5);
        iVar2 = FUN_0083e3b0(uVar3);
        if (((iVar2 != 0) && (*(int **)(iVar2 + 0x100) != (int *)0x0)) &&
           (iVar2 = **(int **)(iVar2 + 0x100), (*(uint *)(iVar2 + 0xf8) & 0x20000) != 0)) {
          uVar4 = FUN_00838360(param_1,iVar2,2,param_2,param_3);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return uVar4;
}

