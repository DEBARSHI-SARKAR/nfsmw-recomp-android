/* speed.exe 00830f0b FUN_00830f0b; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00830f0b(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_2,puVar1[3]);
  }
  return;
}

