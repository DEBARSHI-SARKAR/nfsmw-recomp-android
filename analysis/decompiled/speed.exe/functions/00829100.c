/* speed.exe 00829100 FUN_00829100; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 */

undefined4 FUN_00829100(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0082caa0(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) ^ (param_2 ^ *(uint *)(iVar1 + 8)) & 0x7fff;
  return 0;
}

