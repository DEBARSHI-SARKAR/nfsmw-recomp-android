/* speed.exe 0070ea00 FUN_0070ea00; analysis pseudocode, not buildable source.
 * calls 00705390 FUN_00705390
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070ea00(int param_1)

{
  FUN_00705390();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

