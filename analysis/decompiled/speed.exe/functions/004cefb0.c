/* speed.exe 004cefb0 FUN_004cefb0; analysis pseudocode, not buildable source.
 * calls 004b8a90 FUN_004b8a90
 * calls 004ce960 FUN_004ce960
 */

void FUN_004cefb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004b8a90();
  local_8 = 0;
  local_4 = 0;
  local_14 = param_4;
  local_20 = param_1;
  local_18 = param_3;
  local_1c = param_2;
  local_10 = param_5;
  local_28[0] = param_6;
  FUN_004ce960(local_28,0xffffffff);
  return;
}

