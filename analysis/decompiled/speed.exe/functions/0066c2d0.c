/* speed.exe 0066c2d0 FUN_0066c2d0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0066b970 FUN_0066b970
 * calls 004ab2c0 FUN_004ab2c0
 * calls 0066c180 FUN_0066c180
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

float10 FUN_0066c2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a700;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar1,0,0);
  local_4 = 0;
  iVar1 = FUN_00454810(0xc92a0142,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_0066b970(iVar1,0,0);
  local_4._0_1_ = 1;
  fVar2 = (float10)FUN_0066c180(local_20,local_34,param_2,param_3);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return (float10)(float)fVar2;
}

