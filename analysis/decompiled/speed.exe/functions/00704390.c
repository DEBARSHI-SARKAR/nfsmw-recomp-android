/* speed.exe 00704390 FUN_00704390; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00704390(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f9e8;
  local_c = ExceptionList;
  uVar5 = 0;
  uVar4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_004cb270(*(undefined4 *)((int)param_1 + 8));
  FUN_004b8880(uVar2,uVar4,uVar5);
  local_4 = 0;
  pfVar3 = (float *)FUN_00454810(0xdb3bd2f3,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(4);
  }
  fVar1 = *pfVar3;
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return (float10)_DAT_00890da8;
  }
  param_1 = (float)(DAT_00925ae8 - *(int *)((int)param_1 + 0x18)) * _DAT_00890984;
  if (param_1 < fVar1) {
    param_1 = fVar1 - param_1;
  }
  else {
    param_1 = -1.0;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return (float10)param_1;
}

