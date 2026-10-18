/* speed.exe 00832f04 FUN_00832f04; analysis pseudocode, not buildable source.
 * calls 0083264d FUN_0083264d
 */

int FUN_00832f04(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0083264d(param_1);
  if (*(byte *)(param_1 + 6) != 0) {
    iVar1 = iVar1 + 1 + (uint)*(byte *)(param_1 + 6);
  }
  return iVar1;
}

