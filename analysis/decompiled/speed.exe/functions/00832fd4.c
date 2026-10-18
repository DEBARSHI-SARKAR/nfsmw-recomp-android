/* speed.exe 00832fd4 FUN_00832fd4; analysis pseudocode, not buildable source.
 * calls 00831c0c FUN_00831c0c
 */

undefined4 FUN_00832fd4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00831c0c(param_1);
  return *(undefined4 *)(iVar1 + (((*(byte *)(param_1 + 8) >> 4) + 1) * 3 & 0xfffffffc));
}

