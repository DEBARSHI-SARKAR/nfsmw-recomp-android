/* speed.exe 004f3200 FUN_004f3200; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 004eabd0 FUN_004eabd0
 * calls 004eadf0 FUN_004eadf0
 * calls 004eac70 FUN_004eac70
 */

void FUN_004f3200(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x228) == 1) || (*(int *)(param_1 + 0x228) == 2)) {
    iVar3 = FUN_00452430();
    bVar1 = false;
    piVar6 = DAT_0091495c;
    piVar4 = DAT_0091495c;
    bVar2 = false;
    if (DAT_0091495c != DAT_0091495c + DAT_00914964 * 2) {
      do {
        bVar1 = bVar2;
        if (piVar4[1] == param_1) {
          FUN_004eadf0(piVar4,piVar4 + 2);
          piVar6 = DAT_0091495c;
        }
        else {
          if (*piVar4 == iVar3) {
            bVar1 = true;
          }
          piVar4 = piVar4 + 2;
        }
        bVar2 = bVar1;
      } while (piVar4 != piVar6 + DAT_00914964 * 2);
    }
    if ((((DAT_008efa38 == '\0') || (DAT_00914620 == 0)) || (*DAT_00914618 != iVar3)) && (!bVar1)) {
      piVar6 = DAT_009147a8 + DAT_009147b0;
      piVar4 = DAT_009147a8;
      if (DAT_009147a8 != piVar6) {
        do {
          if (*piVar4 == iVar3) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar6);
        if (piVar4 != piVar6) {
          FUN_004eac70(piVar4,piVar4 + 1);
        }
      }
      for (piVar6 = DAT_00914618; (piVar6 != DAT_00914618 + DAT_00914620 && (*piVar6 != iVar3));
          piVar6 = piVar6 + 1) {
      }
      if (piVar6 != DAT_00914618 + DAT_00914620) {
        FUN_004eac70(piVar6,piVar6 + 1);
      }
      iVar5 = DAT_00914664;
      iVar7 = DAT_00914664;
      if (DAT_00914664 != DAT_00914664 + DAT_0091466c * 8) {
        do {
          if (*(int *)(iVar7 + 4) == iVar3) {
            FUN_004eabd0(iVar7,iVar7 + 8);
            iVar5 = DAT_00914664;
          }
          else {
            iVar7 = iVar7 + 8;
          }
        } while (iVar7 != iVar5 + DAT_0091466c * 8);
      }
    }
  }
  return;
}

