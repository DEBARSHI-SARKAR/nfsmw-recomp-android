/* speed.exe 00832fab FUN_00832fab; analysis pseudocode, not buildable source.
 * calls 00831c0c FUN_00831c0c
 */

undefined2 FUN_00832fab(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00831c0c(param_1);
  return *(undefined2 *)
          (iVar1 + (((*(byte *)(param_1 + 8) >> 4) + 1) * 3 & 0xfffffffc) + 4 + param_2 * 2);
}

