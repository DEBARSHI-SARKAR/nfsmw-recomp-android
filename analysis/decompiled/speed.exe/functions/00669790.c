/* speed.exe 00669790 FUN_00669790; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00669790(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))();
  if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}

