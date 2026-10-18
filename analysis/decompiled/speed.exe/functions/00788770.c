/* speed.exe 00788770 FUN_00788770; analysis pseudocode, not buildable source.
 * calls 007886f0 FUN_007886f0
 */

void __fastcall FUN_00788770(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  while (piVar1 != (int *)(param_1 + 0x4c)) {
    FUN_007886f0(0x447a0000);
    piVar1 = *(int **)(param_1 + 0x4c);
  }
  return;
}

