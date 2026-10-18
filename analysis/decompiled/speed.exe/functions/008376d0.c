/* speed.exe 008376d0 FUN_008376d0; analysis pseudocode, not buildable source.
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00847b60 FUN_00847b60
 */

int FUN_008376d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8),param_2);
    iVar1 = FUN_0083e3b0(uVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x100) != 0)) {
      return *(int *)(iVar1 + 0x100);
    }
  }
  return 0;
}

