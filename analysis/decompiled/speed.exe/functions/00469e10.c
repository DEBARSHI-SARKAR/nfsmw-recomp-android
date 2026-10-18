/* speed.exe 00469e10 FUN_00469e10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00469e10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

