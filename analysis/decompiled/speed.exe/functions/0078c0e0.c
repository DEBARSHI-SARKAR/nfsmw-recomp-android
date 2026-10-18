/* speed.exe 0078c0e0 FUN_0078c0e0; analysis pseudocode, not buildable source.
 * calls 0083e3a0 FUN_0083e3a0
 */

bool __fastcall FUN_0078c0e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return true;
  }
  iVar1 = FUN_0083e3a0(*(int *)(param_1 + 0xc));
  return *(int *)(param_1 + 0xf4) == iVar1;
}

