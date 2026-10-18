/* speed.exe 004e52c0 FUN_004e52c0; analysis pseudocode, not buildable source.
 * calls 004b8a90 FUN_004b8a90
 * calls 004ce960 FUN_004ce960
 */

void __thiscall
FUN_004e52c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  int local_4;
  
  FUN_004b8a90();
  local_4 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  local_14 = param_5;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  local_10 = param_6;
  local_28[0] = param_7;
  local_c = param_9;
  local_8 = param_1;
  if ((local_4 == 0) && (*(char *)(param_1 + 0x22) == '\x02')) {
    local_8 = 0;
  }
  FUN_004ce960(local_28,param_8);
  return;
}

