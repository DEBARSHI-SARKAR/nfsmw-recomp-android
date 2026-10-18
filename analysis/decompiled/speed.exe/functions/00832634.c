/* speed.exe 00832634 FUN_00832634; analysis pseudocode, not buildable source.
 * calls 00832616 FUN_00832616
 */

int FUN_00832634(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00832616(param_1);
  return iVar1 + (*(byte *)(param_1 + 4) & 0x7f) * 4;
}

