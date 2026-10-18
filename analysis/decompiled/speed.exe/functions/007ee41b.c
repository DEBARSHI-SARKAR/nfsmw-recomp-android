/* speed.exe 007ee41b FUN_007ee41b; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ee41b(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1[1] + 8);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_2;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  else {
    *puVar1 = (undefined4 *)(param_2 + 8);
  }
  return;
}

