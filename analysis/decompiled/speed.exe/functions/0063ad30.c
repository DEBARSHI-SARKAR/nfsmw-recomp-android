/* speed.exe 0063ad30 FUN_0063ad30; analysis pseudocode, not buildable source.
 * calls 005425d0 FUN_005425d0
 * calls 006596e0 FUN_006596e0
 * calls 0062fe40 FUN_0062fe40
 * calls 00516980 FUN_00516980
 * calls 006bccc0 FUN_006bccc0
 */

undefined4 * __thiscall FUN_0063ad30(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879407;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a7c88;
  param_1[2] = param_2;
  local_4 = 0;
  cVar1 = FUN_00516980();
  if (cVar1 != '\0') {
    FUN_005425d0();
  }
  FUN_006bccc0(param_1[2]);
  if (DAT_00925e90 == 3) {
    FUN_006596e0();
    ExceptionList = local_c;
    return param_1;
  }
  if (DAT_00925e90 == 6) {
    iVar2 = DAT_00920390 + 0x10;
    bVar3 = DAT_00920390 != 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    DAT_00920390 = iVar2;
    if (bVar3) {
      FUN_0062fe40(1,0);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

