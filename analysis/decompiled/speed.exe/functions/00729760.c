/* speed.exe 00729760 FUN_00729760; analysis pseudocode, not buildable source.
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 00729760 FUN_00729760
 * calls 00729120 FUN_00729120
 */

void __thiscall FUN_00729760(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_4 == 1) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_30 = param_2[3];
    local_2c = param_2[4];
    local_28 = param_2[5];
    param_4 = thunk_FUN_006cf2b0(&local_20,&local_30,0);
  }
  if ((param_4 != 0) && (local_34 = 0, 0 < *(short *)(param_2 + 6))) {
    local_38 = (short *)((int)param_2 + 0x1a);
    do {
      sVar1 = *local_38;
      if (sVar1 < 0) {
        FUN_00729760(*(int *)(param_1 + 0x28) + sVar1 * -0x24,param_3,param_4);
      }
      else {
        FUN_00729120((int)sVar1,param_3,param_4);
      }
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
    } while (local_34 < *(short *)(param_2 + 6));
  }
  return;
}

