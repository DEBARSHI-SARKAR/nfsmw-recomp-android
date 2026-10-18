/* speed.exe 0058aab0 FUN_0058aab0; analysis pseudocode, not buildable source.
 * calls 00452bd0 FUN_00452bd0
 * calls 00454810 FUN_00454810
 * calls 00452d40 FUN_00452d40
 * calls 00454640 FUN_00454640
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 00452380 FUN_00452380
 * calls 0051e1a0 FUN_0051e1a0
 * calls 006269b0 FUN_006269b0
 * calls 00455bc0 FUN_00455bc0
 * calls 004546c0 FUN_004546c0
 * calls 004546a0 FUN_004546a0
 * calls 00456b00 FUN_00456b00
 * calls 00456b20 FUN_00456b20
 */

int FUN_0058aab0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_44 [24];
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00455bc0(0x85885722);
  iVar1 = FUN_00456b00();
  uVar9 = 0;
  uVar8 = 0;
  uVar2 = FUN_00454640("carparts",0,0);
  FUN_0051e1a0(uVar2,uVar8,uVar9);
  local_4 = 0;
  do {
    if (iVar1 == 0) {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 0;
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar2 = FUN_00455fd0(0x85885722,iVar1,0,0);
    FUN_00452380(uVar2,uVar8,uVar9);
    local_4._0_1_ = 1;
    if (local_2c == 0) {
      local_2c = FUN_006269b0(0x5c);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar3 = FUN_00454640("carparts");
    iVar4 = FUN_004546a0();
    if (iVar4 == iVar3) {
      piVar5 = (int *)FUN_00454810(0x3b874697,0);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)FUN_006269b0(4);
      }
      if (param_1 == *piVar5) {
        uVar7 = 0;
        FUN_004546c0(local_44,0x1002ea65);
        local_4._0_1_ = 3;
        iVar3 = FUN_00452d40();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00452bd0();
        if (iVar3 != 0) {
          do {
            piVar5 = (int *)FUN_00454810(0x1002ea65,uVar7);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)FUN_006269b0(0xc);
            }
            if (*piVar5 == param_2) {
              iVar1 = FUN_00454810(0x1002ea65,uVar7);
              if (iVar1 == 0) {
                iVar1 = FUN_006269b0(0xc);
              }
              local_4 = local_4 & 0xffffff00;
              FUN_0045a430();
              local_4 = 0xffffffff;
              FUN_0045a430();
              ExceptionList = local_c;
              return iVar1;
            }
            uVar7 = uVar7 + 1;
            FUN_004546c0(local_44,0x1002ea65);
            local_4._0_1_ = 3;
            uVar6 = FUN_00452d40();
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_00452bd0();
          } while (uVar7 < uVar6);
        }
      }
    }
    iVar1 = FUN_00456b20(iVar1);
    local_4 = local_4 & 0xffffff00;
    FUN_0045a430();
  } while( true );
}

