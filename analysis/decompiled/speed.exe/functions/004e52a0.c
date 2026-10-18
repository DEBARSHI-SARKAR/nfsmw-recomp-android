/* speed.exe 004e52a0 FUN_004e52a0; analysis pseudocode, not buildable source.
 * calls 004d91d0 FUN_004d91d0
 */

void __thiscall FUN_004e52a0(int *param_1,undefined4 param_2)

{
  if (param_1[0xd] != 0) {
    (**(code **)(*param_1 + 0x30))();
    FUN_004d91d0(param_2);
  }
  return;
}

