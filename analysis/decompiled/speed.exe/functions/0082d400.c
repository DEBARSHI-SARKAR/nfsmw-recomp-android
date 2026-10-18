/* speed.exe 0082d400 FUN_0082d400; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 * calls 00829410 FUN_00829410
 * calls 0082cf50 FUN_0082cf50
 */

undefined4 FUN_0082d400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  uVar2 = 0xffffffd5;
  iVar1 = FUN_0082e3e0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0082caa0(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_0082cf50(iVar1,param_2,param_3);
    }
  }
  FUN_00829450();
  return uVar2;
}

