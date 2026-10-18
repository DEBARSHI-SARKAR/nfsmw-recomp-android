/* speed.exe 00530df0 FUN_00530df0; analysis pseudocode, not buildable source.
 * calls 00573d10 FUN_00573d10
 * calls 00652ad0 _malloc
 * calls 0056d540 FUN_0056d540
 * calls 00573140 FUN_00573140
 * calls 0051f940 FUN_0051f940
 * calls 005b8550 FUN_005b8550
 * calls 00573d80 FUN_00573d80
 * calls 00588350 FUN_00588350
 * calls 0051a180 FUN_0051a180
 * calls 005890f0 FUN_005890f0
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00530df0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = (int)param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f5a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = FUN_0056d540(param_3);
    FUN_005890f0(1);
    *puVar2 = &PTR_FUN_0089c360;
    puVar2[0xe] = param_3;
    puVar2[0xf] = param_2;
    puVar2[0x10] = 0;
    *(undefined1 *)(puVar2 + 0x12) = uVar1;
    *(undefined1 *)((int)puVar2 + 0x49) = 0;
    param_3 = puVar2;
  }
  local_4 = 0xffffffff;
  iVar7 = 0;
  piVar3 = &DAT_008f3abc;
  do {
    if (*piVar3 == iVar6) {
      puVar4 = &DAT_008f3ab8 + iVar7 * 0x14;
      goto LAB_00530e9b;
    }
    piVar3 = piVar3 + 5;
    iVar7 = iVar7 + 1;
  } while ((int)piVar3 < 0x8f3c10);
  puVar4 = &DAT_008f3ab8;
LAB_00530e9b:
  iVar6 = *(int *)(param_1 + 0x10);
  uVar9 = 0;
  uVar8 = 0xffffffff;
  uVar5 = FUN_00573140(*(undefined4 *)(puVar4 + 8),0);
  if (iVar6 != 0) {
    iVar6 = FUN_00516af0(iVar6);
    if (iVar6 != 0) {
      iVar6 = FUN_005b8550(uVar5);
      if (iVar6 != 0) {
        uVar8 = FUN_0051a180(iVar6);
        uVar9 = *(undefined4 *)(iVar6 + 0x24);
      }
    }
  }
  uVar5 = FUN_00573d10("OPTION_ICON_");
  FUN_0051f940(uVar5,uVar9,uVar8);
  uVar9 = FUN_00573d80("ICON_VIS_GROUP_");
  param_3[0x11] = uVar9;
  FUN_00588350(param_3);
  ExceptionList = local_c;
  return;
}

