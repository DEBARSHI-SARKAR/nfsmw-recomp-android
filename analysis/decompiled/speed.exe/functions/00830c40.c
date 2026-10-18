/* speed.exe 00830c40 FUN_00830c40; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 00830890 FUN_00830890
 */

undefined4 FUN_00830c40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffff8;
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  iVar1 = FUN_0082caa0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00830890(iVar1,param_2);
  }
  FUN_00829450();
  return uVar2;
}

