/* speed.exe 007f9a97 FUN_007f9a97; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f9a97(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

