/* speed.exe 0078c6c0 FUN_0078c6c0; analysis pseudocode, not buildable source.
 * calls 00837090 FUN_00837090
 */

void __thiscall FUN_0078c6c0(int param_1,int param_2,int param_3)

{
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    (**(code **)(param_1 + 0x100))(param_3,*(undefined4 *)(param_1 + 0x104));
    if (param_3 != 2) {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
  }
  if (((param_2 == 1) && (param_3 == 0)) && (*(int *)(param_1 + 0xf8) != 0)) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    FUN_00837090(*(int *)(param_1 + 0xf8));
  }
  DAT_0091ca90 = 1;
  return;
}

