/* speed.exe 007a2bf0 FUN_007a2bf0; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 */

bool __fastcall FUN_007a2bf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d3a0(0);
  return iVar1 == *(int *)(param_1 + 0xc0);
}

