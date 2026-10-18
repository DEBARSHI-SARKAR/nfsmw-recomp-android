/* speed.exe 00513860 FUN_00513860; analysis pseudocode, not buildable source.
 * calls 0056cd20 FUN_0056cd20
 */

void FUN_00513860(undefined4 param_1,int *param_2,int *param_3,int *param_4,float param_5,
                 float param_6,float param_7)

{
  float fVar1;
  
  FUN_0056cd20(param_7);
  fVar1 = (float)param_3[8];
  if ((float)param_3[8] < param_7) {
    fVar1 = param_7;
  }
  if ((float)param_3[7] <= fVar1) {
    fVar1 = (float)param_3[7];
  }
  param_3[0x10] = (int)fVar1;
  (**(code **)(*param_3 + 0x24))();
  FUN_0056cd20(param_5);
  fVar1 = (float)param_2[8];
  if ((float)param_2[8] < param_5) {
    fVar1 = param_5;
  }
  if ((float)param_2[7] <= fVar1) {
    fVar1 = (float)param_2[7];
  }
  param_2[0x10] = (int)fVar1;
  (**(code **)(*param_2 + 0x24))();
  FUN_0056cd20(param_6);
  fVar1 = (float)param_4[8];
  if ((float)param_4[8] < param_6) {
    fVar1 = param_6;
  }
  if ((float)param_4[7] <= fVar1) {
    fVar1 = (float)param_4[7];
  }
  param_4[0x10] = (int)fVar1;
                    /* WARNING: Could not recover jumptable at 0x00513937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x24))();
  return;
}

