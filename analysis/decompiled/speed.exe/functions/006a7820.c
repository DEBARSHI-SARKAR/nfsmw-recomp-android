/* speed.exe 006a7820 FUN_006a7820; analysis pseudocode, not buildable source.
 * calls 0069b8a0 FUN_0069b8a0
 * calls 0045a430 FUN_0045a430
 * calls 0045a760 FUN_0045a760
 * calls 00452430 FUN_00452430
 * calls 00467c30 FUN_00467c30
 * calls 0045beb0 FUN_0045beb0
 * calls 004546c0 FUN_004546c0
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00452c50 FUN_00452c50
 * calls 00452bd0 FUN_00452bd0
 * calls 006e9700 FUN_006e9700
 */

void __thiscall FUN_006a7820(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44 [20];
  int local_30;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087cd60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00452430();
  if (((iVar2 != *(int *)(param_1 + 0xc)) || (*(int *)(param_1 + 0x10) != param_4)) ||
     (iVar2 = FUN_00452430(), iVar2 != *(int *)(param_1 + 0x14))) {
    uVar3 = FUN_00452430();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_00452430();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(int *)(param_1 + 0x10) = param_4;
    FUN_0045a8a0();
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_4 = 0;
    FUN_0045beb0(&local_50);
    local_4 = 0xffffffff;
    if (local_48 != 0) {
      FUN_0045a8a0();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_004546c0(local_44,param_4);
    local_4 = 1;
    cVar1 = FUN_00452c50();
    if (cVar1 != '\0') {
      FUN_00467c30(*(undefined4 *)(param_2 + 4),0,0);
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar2 = FUN_0069b8a0(0xeec2271a,local_44);
      if (iVar2 != 0) {
        FUN_0045beb0(iVar2 + 0xc);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      }
      if (local_30 != DAT_00988e84) {
        do {
          puVar4 = local_44;
          uVar3 = FUN_00452430(puVar4);
          iVar2 = FUN_0069b8a0(uVar3,puVar4);
          if (iVar2 != 0) {
            FUN_0045beb0(iVar2 + 0xc);
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
            break;
          }
          iVar2 = FUN_006e9700(local_20);
          local_4._0_1_ = 3;
          FUN_0045a760(*(undefined4 *)(iVar2 + 4));
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0045a430();
        } while (local_30 != DAT_00988e84);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045a430();
    }
    local_4 = 0xffffffff;
    FUN_00452bd0();
  }
  ExceptionList = local_c;
  return;
}

