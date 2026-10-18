/* speed.exe 00507750 FUN_00507750; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00507750(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x58;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x5c) = iVar1;
  return;
}

