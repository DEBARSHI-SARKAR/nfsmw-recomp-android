/* speed.exe 00838640 FUN_00838640; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00838640(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_00837bf0(param_1,0xffffffff);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        uVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar4);
        iVar2 = FUN_0083e3b0(uVar3);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x100) != 0)) {
          *(undefined2 *)(*(int *)(iVar2 + 0x100) + 6) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

