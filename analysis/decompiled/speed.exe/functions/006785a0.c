/* speed.exe 006785a0 FUN_006785a0; analysis pseudocode, not buildable source.
 * calls 00677fe0 FUN_00677fe0
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 0045a5d0 FUN_0045a5d0
 * calls 006269b0 FUN_006269b0
 * calls 0066b850 FUN_0066b850
 * calls 00403c30 FUN_00403c30
 * calls 00672d30 FUN_00672d30
 * calls 00452bd0 FUN_00452bd0
 * calls 00452b30 FUN_00452b30
 * calls 00452d40 FUN_00452d40
 * calls 00454810 FUN_00454810
 * calls 00454760 FUN_00454760
 */

uint FUN_006785a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_30 [32];
  byte local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087abb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (uint *)FUN_00454810(0xcdc136e8,0);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_006269b0(4);
  }
  if ((*puVar2 & 1 << ((byte)param_2 & 0x1f)) != 0) {
    uVar3 = FUN_00677fe0(param_1,param_2);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return uVar3;
    }
  }
  iVar4 = FUN_00672d30(param_1,param_2);
  iVar5 = FUN_00672e80(param_1,param_2);
  if ((iVar4 == 0) && (iVar5 != 0)) {
    iVar6 = FUN_0066b850(param_2);
    uVar3 = 0;
    if (iVar6 != 0) {
      FUN_00403c30(param_1);
      local_4 = iVar4;
      if ((local_10 & 1) != 0) {
        FUN_0045a5d0();
      }
      FUN_00452b30();
      local_4._0_1_ = 1;
      cVar1 = FUN_00454760(*(undefined4 *)(iVar6 + 8),local_30);
      if (cVar1 == '\0') {
        local_4 = (uint)local_4._1_3_ << 8;
      }
      else {
        uVar3 = FUN_00452d40();
        local_4 = (uint)local_4._1_3_ << 8;
        if (1 < uVar3) {
          FUN_00452bd0();
          local_4 = 0xffffffff;
          FUN_0045a430();
          goto LAB_006786de;
        }
      }
      FUN_00452bd0();
      local_4 = 0xffffffff;
      uVar3 = FUN_0045a430();
    }
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
LAB_006786de:
  ExceptionList = local_c;
  return (uint)(iVar4 <= iVar5);
}

