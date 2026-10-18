/* speed.exe 007f1cf9 FUN_007f1cf9; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f1cf9(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x2c];
  *param_1 = &PTR_LAB_008c2260;
  while( true ) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((int)param_1[0x28] < 1) break;
    puVar1 = (undefined4 *)param_1[8];
  }
  param_1[0x28] = 0;
  *param_1 = &PTR_LAB_008c2240;
  return;
}

