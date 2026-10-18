/* speed.exe 004d9840 FUN_004d9840; analysis pseudocode, not buildable source.
 * calls 004b3320 FUN_004b3320
 */

void __fastcall FUN_004d9840(int *param_1)

{
  FUN_004b3320();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  (**(code **)(*param_1 + 0x38))(param_1 + 0x18);
  (**(code **)(*param_1 + 0x3c))(*(int *)(param_1[5] + 0x34) + 0x10);
  return;
}

