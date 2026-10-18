/* speed.exe 007842f0 FUN_007842f0; analysis pseudocode, not buildable source.
 * calls 00784170 FUN_00784170
 * calls 0077ae80 FUN_0077ae80
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 * calls 005c5e80 FUN_005c5e80
 * calls 0077fab0 FUN_0077fab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007842f0(undefined4 param_1,float *param_2)

{
  float10 fVar1;
  float local_28;
  float local_24;
  float local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882108;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_1c = &PTR_FUN_00891594;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0041b250(0x40);
  FUN_0077ae80(param_2,&local_1c);
  local_28 = (*param_2 + param_2[4]) * _DAT_008933d4;
  local_24 = (param_2[5] + param_2[1]) * _DAT_008933d4;
  local_20 = (param_2[6] + param_2[2]) * _DAT_008933d4;
  fVar1 = (float10)FUN_005c5e80((local_28 - *param_2) * (local_28 - *param_2) +
                                (local_24 - param_2[1]) * (local_24 - param_2[1]) +
                                (local_20 - param_2[2]) * (local_20 - param_2[2]));
  FUN_0077fab0(0x10);
  FUN_00784170(&local_1c,param_1,&local_28,(float)fVar1);
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return;
}

