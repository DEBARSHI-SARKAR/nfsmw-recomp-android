/* speed.exe 005eaad0 FUN_005eaad0; analysis pseudocode, not buildable source.
 * calls 005e7090 FUN_005e7090
 */

void __fastcall FUN_005eaad0(int param_1)

{
  FUN_005e7090(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

