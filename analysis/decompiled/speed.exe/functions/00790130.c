/* speed.exe 00790130 FUN_00790130; analysis pseudocode, not buildable source.
 * calls 00840e80 FUN_00840e80
 */

void FUN_00790130(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_3 + 0x20); puVar1 != (undefined4 *)(param_3 + 0x20);
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,param_2,puVar1[3]);
  }
  FUN_00840e80(param_1,param_2);
  return;
}

