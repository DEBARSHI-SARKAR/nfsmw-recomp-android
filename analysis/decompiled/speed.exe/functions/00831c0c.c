/* speed.exe 00831c0c FUN_00831c0c; analysis pseudocode, not buildable source.
 * calls 00831beb FUN_00831beb
 */

int FUN_00831c0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00831beb(param_1);
  return (((*(byte *)(param_1 + 7) + 7) / 8) * (uint)*(byte *)(param_1 + 6) * 2 + 3 & 0xfffffffc) +
         iVar1;
}

