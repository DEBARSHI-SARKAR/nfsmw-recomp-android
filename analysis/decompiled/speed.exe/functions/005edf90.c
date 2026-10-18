/* speed.exe 005edf90 FUN_005edf90; analysis pseudocode, not buildable source.
 * calls 005edd60 FUN_005edd60
 */

void __fastcall FUN_005edf90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 700);
  while (iVar1 != 0) {
    FUN_005edd60(0);
    iVar1 = *(int *)(param_1 + 700);
  }
  return;
}

