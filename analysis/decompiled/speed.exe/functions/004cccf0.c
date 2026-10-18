/* speed.exe 004cccf0 FUN_004cccf0; analysis pseudocode, not buildable source.
 * calls 004c7420 FUN_004c7420
 */

void FUN_004cccf0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 3; param_2 = param_2 + -8) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    uVar2 = *(undefined4 *)((int)param_1 + param_2 + -8);
    *(undefined4 *)((int)param_1 + param_2 + -8) = *param_1;
    *(undefined4 *)((int)param_1 + param_2 + -4) = param_1[1];
    FUN_004c7420(param_1,0,param_2 + -8 >> 3,uVar2,uVar1);
  }
  return;
}

