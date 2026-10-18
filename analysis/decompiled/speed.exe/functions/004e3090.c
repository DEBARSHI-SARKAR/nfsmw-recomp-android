/* speed.exe 004e3090 FUN_004e3090; analysis pseudocode, not buildable source.
 * calls 004e3090 FUN_004e3090
 */

int __fastcall FUN_004e3090(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  while( true ) {
    if (iVar1 == 0) {
      return param_1;
    }
    iVar1 = FUN_004e3090();
    if (iVar1 == 0) break;
    param_1 = *(int *)(param_1 + 0x50);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  return *(int *)(param_1 + 0x50);
}

