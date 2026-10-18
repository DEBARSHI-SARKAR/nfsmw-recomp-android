/* speed.exe 005cf2e0 FUN_005cf2e0; analysis pseudocode, not buildable source.
 * calls 005c7b30 FUN_005c7b30
 * calls 005c8010 FUN_005c8010
 */

undefined4 FUN_005cf2e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874881;
  local_c = ExceptionList;
  uVar1 = param_1[1];
  uVar7 = param_1[3];
  if ((uVar1 & 2) != 0) {
    uVar7 = uVar7 + (int)param_1;
  }
  uVar2 = param_1[2];
  uVar3 = *param_1;
  if ((uVar1 & 1) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = uVar3 & 0xffff;
    uVar3 = uVar3 & 0xffff2020 | 0x2020;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_005c8010();
  local_4 = 0;
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar5 = FUN_005c7b30(uVar7,uVar1 >> 8,uVar2,uVar3,uVar6,uVar1 >> 3 & 0x1f);
  ExceptionList = local_c;
  return uVar5;
}

