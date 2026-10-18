/* speed.exe 004011c0 FUN_004011c0; analysis pseudocode, not buildable source.
 */

void FUN_004011c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_3;
  return;
}

