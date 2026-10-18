/* speed.exe 007ee314 FUN_007ee314; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007ee314(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(*param_1 + 8);
  }
  while ((puVar2 != (undefined4 *)0x0 &&
         (puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0))) {
    *puVar2 = 0;
    puVar2 = puVar1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

