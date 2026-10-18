/* speed.exe 00735840 FUN_00735840; analysis pseudocode, not buildable source.
 * calls 0078b2c0 FUN_0078b2c0
 */

int __fastcall FUN_00735840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0078b2c0();
  return iVar1 - *(int *)(param_1 + 0x20);
}

