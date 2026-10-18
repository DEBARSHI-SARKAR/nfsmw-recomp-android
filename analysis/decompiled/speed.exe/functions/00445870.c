/* speed.exe 00445870 FUN_00445870; analysis pseudocode, not buildable source.
 * calls 0076e2d0 FUN_0076e2d0
 * calls 007862d0 FUN_007862d0
 * calls 0076e220 FUN_0076e220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007658a0 FUN_007658a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00445870(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  char local_2a4;
  undefined4 local_27c;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086998b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0077b9e0();
  local_4 = 0;
  FUN_0076e2d0(1);
  FUN_007658a0(0);
  local_300 = DAT_008a2fb4;
  local_2fc = DAT_008a2fb8;
  local_27c = 2;
  local_2f8 = DAT_008a2fbc;
  FUN_007862d0(param_2,&local_300,1,0);
  if (local_2a4 == '\0') {
    local_4 = 0xffffffff;
    FUN_0076e220();
    ExceptionList = local_c;
    return 0;
  }
  local_4 = 0xffffffff;
  fVar1 = (local_240 + local_24c) * _DAT_008933d4;
  fVar2 = (local_23c + local_248) * _DAT_008933d4;
  *param_1 = (local_244 + local_250) * _DAT_008933d4;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  FUN_0076e220();
  ExceptionList = local_c;
  return 1;
}

