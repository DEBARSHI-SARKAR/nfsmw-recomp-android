/* speed.exe 0082d460 FUN_0082d460; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 0082d3b0 FUN_0082d3b0
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 */

int FUN_0082d460(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return -0x12;
  }
  iVar1 = FUN_0082d3b0(param_1,param_2);
  if (-1 < iVar1) {
    iVar2 = FUN_0082caa0(param_1);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) ^ (param_3 ^ *(uint *)(iVar2 + 8)) & 0x7fff;
    }
  }
  FUN_00829450();
  return iVar1;
}

