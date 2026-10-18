/* speed.exe 005f6010 FUN_005f6010; analysis pseudocode, not buildable source.
 * calls 005e6020 FUN_005e6020
 * calls 005f5d40 FUN_005f5d40
 */

void __fastcall FUN_005f6010(int param_1)

{
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4));
  *(int *)(*(int *)(param_1 + 0x13c) + 4) = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(int *)(*(int *)(param_1 + 0x13c) + 8) = *(int *)(param_1 + 0x13c);
  FUN_005f5d40();
  return;
}

