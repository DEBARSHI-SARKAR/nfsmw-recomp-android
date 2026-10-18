/* speed.exe 00831beb FUN_00831beb; analysis pseudocode, not buildable source.
 */

int FUN_00831beb(int param_1)

{
  return ((uint)*(byte *)(param_1 + 6) * 2 + 3 & 0xfffffffc) + 0xc +
         ((*(byte *)(param_1 + 7) + 1) * 3 & 0xfffffffc) + param_1;
}

