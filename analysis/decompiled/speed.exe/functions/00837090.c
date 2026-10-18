/* speed.exe 00837090 FUN_00837090; analysis pseudocode, not buildable source.
 */

void FUN_00837090(int param_1)

{
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))(param_1,10,0xffffff94,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffff94;
  return;
}

