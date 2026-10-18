/* speed.exe 006448e0 FUN_006448e0; analysis pseudocode, not buildable source.
 * calls 00642c90 FUN_00642c90
 * calls 00634370 FUN_00634370
 * calls 006440b0 FUN_006440b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006448e0(int param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  if (((*(int *)(param_1 + 0x270) != 0) && (*(int *)(param_1 + 0x26c) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x268), -1 < iVar1)) {
    iVar5 = FUN_00634370();
    iVar1 = *(int *)(iVar5 + 8 + iVar1 * 4);
    if (iVar1 != 0) {
      local_c = 0;
      local_4 = 0;
      local_8 = 0;
      FUN_00642c90(iVar1);
      iVar5 = *(int *)(param_1 + 0x270);
      piVar6 = *(int **)(iVar5 + 4);
      piVar7 = (int *)*piVar6;
      piVar8 = piVar7;
      if (piVar7 != piVar6) {
        do {
          if (piVar8[5] != piVar7[5]) {
            piVar7 = piVar8;
          }
          if (_DAT_00890968 <= (float)piVar8[8]) {
            fVar3 = (float)piVar8[8] - (float)piVar8[7];
            if (fVar3 < _DAT_00890968) {
              fVar3 = -fVar3;
            }
            if (_DAT_008a53bc < fVar3) {
              piVar4 = piVar7;
              if (piVar8[2] == 0) {
                for (; piVar4 != piVar6; piVar4 = (int *)*piVar4) {
                  if (piVar4 != piVar8) {
                    if (piVar4[5] != piVar8[5]) break;
                    if ((piVar4[2] == 0) && ((float)piVar8[8] < (float)piVar4[8]))
                    goto switchD_006449dd_default;
                  }
                }
              }
              switch(piVar8[2]) {
              case 0:
switchD_006449dd_caseD_0:
                local_c = piVar8[5];
                local_4 = piVar8[8];
                local_8 = *(undefined4 *)(iVar1 + 0x24);
                if (local_c != 0) {
                  FUN_006440b0(&local_c);
                }
                break;
              case 1:
              case 3:
                if ((_DAT_008933d4 <= (float)piVar8[8]) && ((float)piVar8[7] < _DAT_008933d4)) {
                  bVar2 = (float)piVar8[7] < _DAT_00890968;
LAB_00644a28:
                  if (!bVar2) goto switchD_006449dd_caseD_0;
                }
                break;
              case 2:
              case 4:
                if ((float)piVar8[8] < _DAT_008933d4) {
                  bVar2 = (float)piVar8[7] < _DAT_008933d4;
                  goto LAB_00644a28;
                }
              }
switchD_006449dd_default:
              piVar8[7] = piVar8[8];
            }
          }
          piVar8 = (int *)*piVar8;
          piVar6 = *(int **)(iVar5 + 4);
        } while (piVar8 != piVar6);
      }
    }
  }
  return;
}

