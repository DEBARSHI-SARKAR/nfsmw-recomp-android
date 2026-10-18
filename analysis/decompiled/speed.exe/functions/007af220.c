/* speed.exe 007af220 FUN_007af220; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0067c570 FUN_0067c570
 * calls 004e4ea0 FUN_004e4ea0
 * calls 005814e0 FUN_005814e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007af220(int param_1,int param_2,char param_3)

{
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883068;
  local_c = ExceptionList;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  if (param_3 == '\0') {
    ExceptionList = &local_c;
    FUN_004e4ea0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0,0);
    local_4 = 0;
    FUN_005814e0(**(undefined4 **)(param_1 + 4),local_20);
    FUN_0067c570(local_20,&local_2c);
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  else {
    ExceptionList = &local_c;
    FUN_0067c570(param_1 + 8,&local_2c);
  }
  if (param_2 == 0) {
    ExceptionList = local_c;
    return (float10)local_2c;
  }
  if (param_2 == 1) {
    ExceptionList = local_c;
    return (float10)local_28;
  }
  if (param_2 != 2) {
    ExceptionList = local_c;
    return (float10)_DAT_00890968;
  }
  ExceptionList = local_c;
  return (float10)local_24;
}

