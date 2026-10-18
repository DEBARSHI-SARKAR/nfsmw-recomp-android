/* speed.exe 0082d270 FUN_0082d270; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 */

undefined4 FUN_0082d270(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0082caa0(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 300);
    *(undefined4 *)(iVar1 + 300) = 0;
  }
  FUN_00829450();
  return uVar2;
}

