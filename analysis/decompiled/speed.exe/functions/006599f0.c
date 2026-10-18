/* speed.exe 006599f0 FUN_006599f0; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 */

void __thiscall FUN_006599f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_007c7250(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 4) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}

