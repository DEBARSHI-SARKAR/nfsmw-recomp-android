/* speed.exe 005246b0 FUN_005246b0; analysis pseudocode, not buildable source.
 * calls 00513b50 FUN_00513b50
 * calls 0056c6e0 FUN_0056c6e0
 */

void __thiscall FUN_005246b0(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_3 != 0) && (*(char *)(param_1 + 0x14d) == '\0')) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
  }
  return;
}

