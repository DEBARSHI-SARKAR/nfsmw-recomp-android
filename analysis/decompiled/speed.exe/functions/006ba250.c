/* speed.exe 006ba250 FUN_006ba250; analysis pseudocode, not buildable source.
 * calls 006ba010 FUN_006ba010
 * calls 006a6070 FUN_006a6070
 */

void __fastcall FUN_006ba250(int param_1)

{
  FUN_006ba010();
  FUN_006a6070(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4));
  *(int *)(*(int *)(param_1 + 0x54) + 4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(*(int *)(param_1 + 0x54) + 8) = *(int *)(param_1 + 0x54);
  return;
}

