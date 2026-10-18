/* speed.exe 00641840 FUN_00641840; analysis pseudocode, not buildable source.
 * calls 004b8c80 FUN_004b8c80
 * calls 00460bf0 FUN_00460bf0
 * calls 006e8df0 FUN_006e8df0
 * calls 005faa20 FUN_005faa20
 */

void __fastcall FUN_00641840(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a72dc;
  local_4 = 0;
  piVar7 = DAT_0092d87c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar1 = (int *)*piVar7;
      iVar4 = FUN_006e8df0();
      if (iVar4 == 1) {
        bVar2 = false;
        bVar3 = false;
        if (DAT_0091e000 != 0) {
          if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar4 = FUN_005faa20(), iVar4 != 2)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
            iVar4 = FUN_005faa20();
            bVar3 = true;
            if (iVar4 == 8) goto LAB_006418f2;
          }
          bVar3 = false;
        }
LAB_006418f2:
        if (DAT_0092d884 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)*DAT_0092d87c;
        }
        if (piVar1 == piVar5) {
          if (bVar2) {
            (**(code **)(*piVar1 + 0x24))(5);
          }
          else {
            uVar6 = 3;
LAB_0064192c:
            (**(code **)(*piVar1 + 0x24))(uVar6);
          }
        }
        else {
          if (!bVar2) {
            uVar6 = 4;
            goto LAB_0064192c;
          }
          (**(code **)(*piVar1 + 0x24))(6);
        }
        if (!bVar3) {
          uVar8 = 0;
          uVar6 = FUN_00460bf0("IntroNisDDEnd",0);
          FUN_004b8c80(uVar6,uVar8);
        }
      }
      else if (DAT_0091e000 == 0) {
        (**(code **)(*piVar1 + 0x24))(1);
      }
      else {
        if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar4 = FUN_005faa20(), iVar4 != 8)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = FUN_005faa20();
        }
        if (iVar4 == 2) {
          (**(code **)(*piVar1 + 0x24))(2);
        }
        else {
          (**(code **)(*piVar1 + 0x24))(1);
        }
        if (((!bVar2) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) &&
           (iVar4 = FUN_005faa20(), iVar4 != -1)) {
          uVar8 = 0xffffffff;
          uVar6 = FUN_00460bf0("RESTART_FAKE",0xffffffff);
          FUN_004b8c80(uVar6,uVar8);
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != DAT_0092d87c + DAT_0092d884);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

