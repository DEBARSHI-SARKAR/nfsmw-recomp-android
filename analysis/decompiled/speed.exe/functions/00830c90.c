/* speed.exe 00830c90 FUN_00830c90; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 008309f0 FUN_008309f0
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 * calls 00829410 FUN_00829410
 */

undefined4 FUN_00830c90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  uVar2 = 0xfffffff8;
  iVar1 = FUN_0082e3e0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0082caa0(param_1);
    if (iVar1 == 0) {
      FUN_00829450();
      return 0xfffffff8;
    }
    uVar2 = FUN_008309f0(iVar1,param_2);
  }
  FUN_00829450();
  return uVar2;
}

