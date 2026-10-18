/* speed.exe 005642c0 FUN_005642c0; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00573020 FUN_00573020
 * calls 00559400 FUN_00559400
 * calls 007b4250 FUN_007b4250
 * calls 006e8d10 FUN_006e8d10
 * calls 005a8c20 FUN_005a8c20
 * calls 00591d90 FUN_00591d90
 * calls 00516fb0 FUN_00516fb0
 * calls 00563d10 FUN_00563d10
 * calls 007c4b80 FUN_007c4b80
 * calls 00634370 FUN_00634370
 * calls 00572070 FUN_00572070
 * calls 00542530 FUN_00542530
 * calls 006e8d20 FUN_006e8d20
 * calls 00542c50 FUN_00542c50
 * calls 00595ed0 FUN_00595ed0
 * calls 005a8c10 FUN_005a8c10
 * calls 005c53c0 FUN_005c53c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005642c0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  
  if (DAT_0091cb20 != 0) {
    uVar2 = FUN_007c4b80();
    FUN_00563d10(uVar2);
  }
  cVar1 = FUN_006e8d10();
  if ((cVar1 == '\0') ||
     (((cVar1 = FUN_006e8d10(), cVar1 != '\0' && (iVar3 = FUN_006e8d20(), iVar3 != 3)) ||
      (DAT_009885c8 != 0)))) {
    FUN_00516fb0();
  }
  if (DAT_0091cad0 != 0) {
    FUN_00559400();
  }
  iVar3 = 0;
  do {
    if (param_1[iVar3 + 2] != '\0') {
      if ((((DAT_009885c8 == 0) && (DAT_0091cb10 == 0)) || (param_1[1] != '\0')) &&
         (*param_1 == '\0')) {
        iVar4 = FUN_00634370();
        iVar4 = *(int *)(iVar4 + 4);
        if (0 < iVar4) {
          iVar7 = 8;
          do {
            iVar5 = FUN_00634370();
            if (*(int **)(iVar7 + iVar5) != (int *)0x0) {
              (**(code **)(**(int **)(iVar7 + iVar5) + 0x1c))();
            }
            iVar7 = iVar7 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        pcVar8 = "ControllerUnplugged.fng";
        if (DAT_0091d218 < 1) {
          iVar4 = FUN_005b5b70("ControllerUnplugged.fng");
        }
        else {
          FUN_00572070();
          iVar4 = FUN_00591d90(pcVar8);
        }
        if (iVar4 == 0) {
          uVar2 = FUN_00573020(iVar3);
          FUN_00542530("ControllerUnplugged.fng",iVar3,uVar2);
        }
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if ((DAT_00925e90 != 6) || (DAT_00925970 <= _DAT_00890968)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  uVar6 = FUN_007c4b80(uVar2);
  FUN_005c53c0(uVar6,uVar2);
  if ((*DAT_0091cadc != 0) && (*(char *)(*DAT_0091cadc + 0x524c) != '\0')) {
    FUN_00572070();
    FUN_005a8c10();
    return;
  }
  FUN_00572070();
  FUN_005a8c20();
  if (DAT_00925e90 == 3) {
    FUN_007b4250();
  }
  if (((DAT_00926140 != 0) && (DAT_008ee348 < 1)) && (*DAT_0091cadc != -0xd8)) {
    for (iVar3 = *(int *)(*DAT_0091cadc + 0xe4); (iVar3 != 0 && (*(int *)(iVar3 + 0x20) == 0));
        iVar3 = *(int *)(iVar3 + 8)) {
    }
  }
  if (DAT_0091cb10 != 0) {
    FUN_00542c50();
  }
  if (DAT_0091cb08 != 0) {
    FUN_00595ed0(0,0,0);
    DAT_0091cb08 = 0;
    return;
  }
  if ((-1 < *(int *)(param_1 + 0x28)) &&
     (iVar3 = *(int *)(param_1 + 0x28) + -1, *(int *)(param_1 + 0x28) = iVar3, iVar3 == 0)) {
    FUN_00595ed0(0,0,0);
  }
  return;
}

