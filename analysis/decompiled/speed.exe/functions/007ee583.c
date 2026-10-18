/* speed.exe 007ee583 FUN_007ee583; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007ee583(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1 == (undefined4 *)param_1[1]) {
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      *param_1 = *puVar1;
    }
    param_1[2] = param_1[2] + -1;
    *puVar1 = 0;
  }
  return;
}

