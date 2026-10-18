/* speed.exe 007412b0 FUN_007412b0; analysis pseudocode, not buildable source.
 * calls 0079f090 FUN_0079f090
 * calls 0078c2a0 FUN_0078c2a0
 */

void __fastcall FUN_007412b0(int param_1)

{
  int iVar1;
  
  FUN_0079f090();
  iVar1 = FUN_0078c2a0();
  *(bool *)(param_1 + 0x111) = 0 < iVar1;
  return;
}

