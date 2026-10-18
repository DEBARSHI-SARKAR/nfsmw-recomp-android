/* speed.exe 0046aa50 FUN_0046aa50; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 */

void __thiscall FUN_0046aa50(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x2e0) != 0) {
    if (param_2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x2e0));
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  FUN_007869c0(0);
  return;
}

