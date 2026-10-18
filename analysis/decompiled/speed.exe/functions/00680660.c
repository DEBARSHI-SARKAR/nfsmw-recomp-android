/* speed.exe 00680660 FUN_00680660; analysis pseudocode, not buildable source.
 * calls 00676ce0 FUN_00676ce0
 */

void FUN_00680660(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_00676ce0(param_1,0,param_2 + -4 >> 2,uVar1,param_3);
  }
  return;
}

