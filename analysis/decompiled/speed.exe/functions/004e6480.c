/* speed.exe 004e6480 FUN_004e6480; analysis pseudocode, not buildable source.
 * calls 004e4f20 FUN_004e4f20
 * calls 0045a430 FUN_0045a430
 */

bool FUN_004e6480(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int local_2c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ced8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e4f20(param_1,0,0);
  local_4 = 0;
  FUN_004e4f20(param_2,0,0);
  fVar1 = *(float *)(local_18 + 0x54);
  fVar2 = *(float *)(local_2c + 0x54);
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return fVar2 < fVar1;
}

