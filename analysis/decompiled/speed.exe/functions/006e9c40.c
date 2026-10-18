/* speed.exe 006e9c40 FUN_006e9c40; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e9c40(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}

