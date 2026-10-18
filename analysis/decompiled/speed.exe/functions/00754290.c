/* speed.exe 00754290 FUN_00754290; analysis pseudocode, not buildable source.
 * calls 00460460 FUN_00460460
 * calls 0045f490 FUN_0045f490
 * calls 0073d1b0 FUN_0073d1b0
 * calls 0074b180 FUN_0074b180
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00754290(float *param_1,float *param_2,float *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  if (*(char *)(param_1 + 1) != '\0') {
    cVar1 = FUN_00460460(param_2,param_1 + 4,3);
    if (cVar1 != '\0') goto LAB_007542f1;
  }
  iVar2 = FUN_0074b180(param_2);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    return (float10)*param_1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0073d1b0(param_1 + 4);
LAB_007542f1:
  pfVar3 = param_1 + 4;
  local_50 = param_1[0xc] - *pfVar3;
  local_4c = param_1[0xd] - param_1[5];
  local_48 = param_1[0xe] - param_1[6];
  local_40 = param_1[8] - *pfVar3;
  local_3c = param_1[9] - param_1[5];
  local_38 = param_1[10] - param_1[6];
  local_18 = local_38;
  FUN_0045f7c0(&local_30,&local_40,&local_50);
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = (float)local_28;
  FUN_0045f490(&local_60,&local_20);
  fVar4 = ((float10)_DAT_00890da8 / (float10)local_58) *
          (((float10)local_60 * (float10)*param_2 + (float10)local_5c * (float10)param_2[1]) -
          ((float10)local_60 * (float10)*pfVar3 +
          (float10)local_5c * (float10)param_1[5] + (float10)local_58 * (float10)param_1[6]));
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  *param_1 = (float)fVar4;
  if (param_3 != (float *)0x0) {
    *param_3 = local_60;
    param_3[1] = local_5c;
    param_3[2] = local_58;
  }
  return fVar4;
}

