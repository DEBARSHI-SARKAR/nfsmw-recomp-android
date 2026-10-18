/* speed.exe 0083264d FUN_0083264d; analysis pseudocode, not buildable source.
 * calls 00832634 FUN_00832634
 */

int FUN_0083264d(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_00832634(param_1);
  if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
    iVar2 = (*(byte *)(param_1 + 5) + 7) / 8 + 1;
  }
  return iVar1 + iVar2;
}

