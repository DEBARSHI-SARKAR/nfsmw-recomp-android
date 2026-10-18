/* speed.exe 005ee820 FUN_005ee820; analysis pseudocode, not buildable source.
 * calls 005e7ed0 FUN_005e7ed0
 */

void FUN_005ee820(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_005e7ed0(param_1,0,param_2 + -4 >> 2,uVar1);
  }
  return;
}

