/* speed.exe 00677fe0 FUN_00677fe0; analysis pseudocode, not buildable source.
 * calls 00458660 FUN_00458660
 * calls 0045a430 FUN_0045a430
 * calls 00456cb0 FUN_00456cb0
 * calls 00672f50 FUN_00672f50
 * calls 00452bd0 FUN_00452bd0
 * calls 00452b30 FUN_00452b30
 * calls 00452d40 FUN_00452d40
 * calls 0066bb80 FUN_0066bb80
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 00454760 FUN_00454760
 */

bool FUN_00677fe0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ab50;
  local_c = ExceptionList;
  piVar3 = &DAT_008f87a0;
  iVar2 = DAT_008f87a8;
  while( true ) {
    if (iVar2 == 0) {
      return false;
    }
    if (*piVar3 == param_2) break;
    iVar2 = piVar3[9];
    piVar3 = piVar3 + 7;
  }
  if (piVar3[5] == 0) {
    return false;
  }
  if (param_2 == 5) {
    ExceptionList = &local_c;
    iVar2 = FUN_00672f50(param_1);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return false;
    }
  }
  else {
    ExceptionList = &local_c;
    if ((param_2 == 6) && (ExceptionList = &local_c, cVar1 = FUN_0066bb80(param_1), cVar1 == '\0'))
    {
      ExceptionList = local_c;
      return false;
    }
  }
  iVar2 = FUN_00454810(0x171737e9,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  FUN_00456cb0(iVar2,0,0);
  local_4 = 0;
  FUN_00452b30();
  local_4._0_1_ = 1;
  cVar1 = FUN_00454760(piVar3[5],local_30);
  if ((cVar1 != '\0') && (iVar2 = FUN_00458660(), iVar2 == 0x51ead18d)) {
    iVar2 = FUN_00452d40();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00452bd0();
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return iVar2 != 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00452bd0();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return false;
}

