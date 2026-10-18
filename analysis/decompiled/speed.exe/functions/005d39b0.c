/* speed.exe 005d39b0 FUN_005d39b0; analysis pseudocode, not buildable source.
 * calls 005d1a30 FUN_005d1a30
 */

void FUN_005d39b0(int *param_1,int *param_2,int *param_3)

{
  if (0xff8U - *(int *)(*param_2 + 4) < 0xff8U - *(int *)(*param_1 + 4)) {
    FUN_005d1a30(param_2,param_1);
  }
  if (0xff8U - *(int *)(*param_3 + 4) < 0xff8U - *(int *)(*param_2 + 4)) {
    FUN_005d1a30(param_3,param_2);
  }
  if (0xff8U - *(int *)(*param_2 + 4) < 0xff8U - *(int *)(*param_1 + 4)) {
    FUN_005d1a30(param_2,param_1);
  }
  return;
}

