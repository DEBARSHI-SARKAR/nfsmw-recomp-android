/* speed.exe 006e9f80 FUN_006e9f80; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e9f80(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))(*(int *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

