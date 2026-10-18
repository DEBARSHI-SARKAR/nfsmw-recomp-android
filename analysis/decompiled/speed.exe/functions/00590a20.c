/* speed.exe 00590a20 FUN_00590a20; analysis pseudocode, not buildable source.
 * calls 004549b0 FUN_004549b0
 * calls 00580600 FUN_00580600
 * calls 0045a430 FUN_0045a430
 * calls 00403c30 FUN_00403c30
 * calls 005af1c0 FUN_005af1c0
 * calls 0066b900 FUN_0066b900
 * calls 005815b0 FUN_005815b0
 * calls 0056f230 FUN_0056f230
 * calls 0067c080 FUN_0067c080
 * calls 004e4ea0 FUN_004e4ea0
 * calls 00581470 FUN_00581470
 * calls 00748130 FUN_00748130
 * calls 00580cd0 FUN_00580cd0
 */

int * __thiscall FUN_00590a20(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_34 [20];
  undefined1 local_20 [4];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005af1c0(param_2);
  iVar3 = FUN_00748130(iVar2);
  iVar6 = 0;
  FUN_004e4ea0(*(undefined4 *)(iVar3 + 0x50),0,0);
  local_4 = 0;
  piVar4 = param_1;
  if (local_44 == 0) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return (int *)0x0;
  }
  do {
    if (*piVar4 == -1) {
      param_1 = param_1 + iVar6 * 5;
      FUN_005815b0();
      *param_1 = iVar6;
      if (param_1 != (int *)0x0) {
        *param_1 = iVar2;
        iVar2 = FUN_00580cd0();
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 4) = *(undefined1 *)(iVar2 + 0x194);
          FUN_00581470(*param_1,iVar3);
          uVar8 = 0;
          uVar7 = 0;
          uVar5 = FUN_004549b0(iVar3 + 0x28,0,0);
          FUN_00580600(uVar5,uVar7,uVar8);
          local_4._0_1_ = 1;
          if (local_1c != 0) {
            FUN_00403c30(local_48);
            local_4 = CONCAT31(local_4._1_3_,2);
            cVar1 = FUN_0067c080(local_34,local_20);
            if (cVar1 != '\0') {
              FUN_0056f230(local_34);
            }
            FUN_0066b900(local_34);
            local_4._0_1_ = 1;
            FUN_0045a430();
          }
          param_1[3] = 0xf0010;
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0045a430();
          local_4 = 0xffffffff;
          FUN_0045a430();
          ExceptionList = local_c;
          return param_1;
        }
        *param_1 = -1;
      }
      break;
    }
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 5;
  } while (iVar6 < 200);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return (int *)0x0;
}

