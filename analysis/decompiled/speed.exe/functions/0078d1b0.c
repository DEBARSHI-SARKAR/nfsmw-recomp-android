/* speed.exe 0078d1b0 FUN_0078d1b0; analysis pseudocode, not buildable source.
 * calls 00844120 FUN_00844120
 */

bool __thiscall FUN_0078d1b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00844120(param_2);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 != 0;
}

