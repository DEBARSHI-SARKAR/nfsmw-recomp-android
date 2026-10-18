/* speed.exe 007900f0 FUN_007900f0; analysis pseudocode, not buildable source.
 * calls 00840e80 FUN_00840e80
 */

void FUN_007900f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_3; puVar1 != param_3; puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,param_2,puVar1[3]);
  }
  FUN_00840e80(param_1,param_2);
  return;
}

