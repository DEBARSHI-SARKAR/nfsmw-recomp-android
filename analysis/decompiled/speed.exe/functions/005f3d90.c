/* speed.exe 005f3d90 FUN_005f3d90; analysis pseudocode, not buildable source.
 * calls 004527b0 FUN_004527b0
 * calls 00452790 FUN_00452790
 * calls 005e5330 FUN_005e5330
 * calls 00452820 FUN_00452820
 * calls 005e2580 FUN_005e2580
 * calls 005e69d0 FUN_005e69d0
 * calls 005f0100 FUN_005f0100
 * calls 0045a430 FUN_0045a430
 * calls 004528d0 FUN_004528d0
 * calls 00454890 FUN_00454890
 * calls 005e5220 FUN_005e5220
 */

uint FUN_005f3d90(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008759a0;
  local_c = ExceptionList;
  uVar5 = 0;
  ExceptionList = &local_c;
  FUN_005e2580(DAT_008f5c50,0,0);
  local_4 = 0;
  local_3c = FUN_00454890("Attrib::CollectionLoadData");
  uVar2 = FUN_00452790();
  iVar6 = 0;
  local_40 = 0;
  param_1 = 0;
  iVar3 = 0;
  local_38 = uVar2;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_004527b0(uVar5);
      if (iVar3 == local_3c) {
        uVar4 = FUN_00452820(uVar5);
        uVar4 = FUN_004528d0(uVar4);
        local_44 = uVar4;
        FUN_005e2580(uVar4,0,0);
        local_4 = CONCAT31(local_4._1_3_,1);
        cVar1 = FUN_005e5220(local_34,local_20);
        if (cVar1 != '\0') {
          if (param_2 != 0) {
            iVar3 = *(int *)(param_2 + 4);
            iVar6 = FUN_005e69d0(iVar3,*(undefined4 *)(iVar3 + 4),&local_44);
            FUN_005f0100(1);
            *(int *)(iVar3 + 4) = iVar6;
            **(int **)(iVar6 + 4) = iVar6;
            uVar4 = local_44;
            iVar6 = local_40;
          }
          iVar3 = FUN_005e5330(uVar4);
          param_1 = param_1 + iVar3;
          iVar6 = iVar6 + 1;
          local_40 = iVar6;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_0045a430();
        uVar2 = local_38;
      }
      uVar5 = uVar5 + 1;
      iVar3 = param_1;
    } while (uVar5 < uVar2);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + iVar6;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + iVar3;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar6 * 0x30 + 0xf + iVar3 * 8 & 0xfffffff0;
}

