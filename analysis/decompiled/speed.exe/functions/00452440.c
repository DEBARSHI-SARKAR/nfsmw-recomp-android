/* speed.exe 00452440 FUN_00452440; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00452440(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    return *(int *)(*(int *)(*(int *)(iVar1 + 0x14) + 8) + 0x14) + *(int *)(iVar1 + 8);
  }
  return 0;
}

