/* speed.exe 004d5a90 FUN_004d5a90; analysis pseudocode, not buildable source.
 * calls 004d5a10 FUN_004d5a10
 * calls 00452430 FUN_00452430
 * calls 006269b0 FUN_006269b0
 * calls 004d23f0 FUN_004d23f0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 00403c30 FUN_00403c30
 * calls 004d21f0 FUN_004d21f0
 */

undefined4 FUN_004d5a90(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c990;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1 + 0x200);
  iVar2 = *(int *)(local_2c + 0x28);
  local_4 = 0;
  puVar1 = (uint *)FUN_00454810(0xb12ccb69,0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_006269b0(4);
  }
  uVar4 = *puVar1;
  if (*(int *)(param_1 + 0x228) == 1) {
    iVar2 = 4 - iVar2;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else if (4 < iVar2) {
      iVar2 = 4;
    }
    uVar4 = (param_2 - iVar2 < 0) - 1 & param_2 - iVar2;
  }
  uVar3 = FUN_004d21f0();
  uVar3 = FUN_004d5a10(uVar4,*(undefined4 *)(local_2c + 0x28),uVar3);
  iVar2 = FUN_00454810(0x50eab0e6,uVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  FUN_004d23f0(iVar2,0,0);
  local_4._0_1_ = 1;
  uVar3 = FUN_00452430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar3;
}

