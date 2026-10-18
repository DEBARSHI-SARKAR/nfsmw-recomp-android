/* speed.exe 0068cd10 FUN_0068cd10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0068cd10(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + -0x4c) + 0x2c))();
  if (cVar1 == '\0') {
    *param_2 = 0;
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x4c);
  return;
}

