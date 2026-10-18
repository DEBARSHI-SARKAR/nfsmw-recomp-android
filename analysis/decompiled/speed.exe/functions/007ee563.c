/* speed.exe 007ee563 FUN_007ee563; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ee563(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_2 = 0;
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_2;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  else {
    *puVar1 = param_2;
  }
  return;
}

