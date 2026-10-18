/* speed.exe 005e5330 FUN_005e5330; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 004543c0 FUN_004543c0
 * calls 004546a0 FUN_004546a0
 * calls 00452c50 FUN_00452c50
 * calls 005d9ab0 FUN_005d9ab0
 * calls 004546c0 FUN_004546c0
 * calls 00457380 FUN_00457380
 * calls 0045a430 FUN_0045a430
 * calls 00458660 FUN_00458660
 * calls 006269b0 FUN_006269b0
 * calls 00460d20 FUN_00460d20
 * calls 00452bd0 FUN_00452bd0
 * calls 00452d40 FUN_00452d40
 * calls 004574f0 FUN_004574f0
 * calls 00452d00 FUN_00452d00
 * calls 005e2580 FUN_005e2580
 * calls 00452380 FUN_00452380
 * calls 00455bc0 FUN_00455bc0
 * calls 004547f0 FUN_004547f0
 */

int FUN_005e5330(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_50 [3];
  undefined1 local_44 [24];
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008751e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00455bc0(0x5cea9d46);
  FUN_005e2580(param_1,0,0);
  local_4 = 0;
  iVar2 = FUN_005d9ab0();
  while (param_1 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = FUN_00455fd0(0x5cea9d46,param_1,0,0);
    FUN_00452380(uVar3,uVar5,uVar6);
    local_4._0_1_ = 1;
    if (local_2c == 0) {
      local_2c = FUN_006269b0(8);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004547f0(local_50);
    while (iVar4 = local_50[0], local_50[0] != 0) {
      FUN_004546c0(local_44,local_50[0]);
      local_4._0_1_ = 3;
      if ((iVar4 != -0x6e91f188) && (cVar1 = FUN_00452c50(), cVar1 != '\0')) {
        uVar3 = FUN_00458660();
        iVar4 = FUN_004574f0(uVar3);
        iVar4 = FUN_00460d20(*(undefined4 *)(iVar4 + 4),"GCollectionKey");
        if (iVar4 == 0) {
          uVar3 = FUN_00452d00();
          iVar4 = FUN_00457380(uVar3);
          if ((*(byte *)(iVar4 + 0xe) & 1) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_00452d40();
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00452bd0();
      FUN_004543c0();
    }
    param_1 = FUN_004546a0();
    local_4 = local_4 & 0xffffff00;
    FUN_0045a430();
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar2;
}

