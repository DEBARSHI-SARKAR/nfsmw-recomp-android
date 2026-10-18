/* speed.exe 00559400 FUN_00559400; analysis pseudocode, not buildable source.
 * calls 00633d90 FUN_00633d90
 * calls 00633dc0 FUN_00633dc0
 * calls 007c4b80 FUN_007c4b80
 * calls 00626dd0 FUN_00626dd0
 * calls 00626d70 FUN_00626d70
 * calls 006e8df0 FUN_006e8df0
 * calls 00644060 FUN_00644060
 * calls 00559280 FUN_00559280
 * calls 00633d80 FUN_00633d80
 * calls 00517070 FUN_00517070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00559400(int param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_c;
  int *local_4;
  
  local_c = 0;
  do {
    if (*(int *)(param_1 + local_c * 4) != 0) {
      cVar3 = FUN_00633d80();
      while (cVar3 == '\0') {
        FUN_00633dc0(&local_4);
        iVar7 = 0;
        if ((local_4 == (int *)0x0) || (*local_4 != 0x87)) {
          FUN_00626dd0();
          piVar6 = &DAT_008f3428;
          puVar5 = &DAT_008f3434 + local_c;
          do {
            cVar3 = FUN_00626d70();
            piVar2 = local_4;
            if (cVar3 == '\0') {
              *puVar5 = 0;
            }
            else {
              if (local_4 == (int *)0x0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *local_4;
              }
              if (*piVar6 == iVar8) {
                uVar4 = FUN_007c4b80();
                (&DAT_008f3434)[iVar7 * 7 + local_c] = uVar4;
                if (((DAT_0091d8c0 == '\0') || (DAT_0091d8c4 == 0)) && (piVar2 != (int *)0x0)) {
                  if (*piVar2 == 0x27) {
                    if ((float)piVar2[2] == _DAT_0089096c) {
                      FUN_00517070();
                    }
                  }
                  else if (*piVar2 == 0x28) {
                    if ((float)piVar2[2] == _DAT_0089096c) {
                      *(undefined1 *)(DAT_0091cae0 + 0x2c) = 1;
                    }
                    else {
                      *(undefined1 *)(DAT_0091cae0 + 0x2c) = 0;
                    }
                  }
                }
                break;
              }
            }
            piVar6 = piVar6 + 7;
            iVar7 = iVar7 + 1;
            puVar5 = puVar5 + 7;
          } while ((int)piVar6 < 0x8f35e8);
          FUN_00633d90();
        }
        else {
          if (((DAT_0091cf90[300] & 4U) == 0) || (bVar1 = true, *DAT_0091cf90 != '\x02')) {
            bVar1 = false;
          }
          iVar7 = FUN_006e8df0();
          bVar9 = iVar7 == 1;
          iVar8 = (int)DAT_0091cf90[0xc];
          iVar7 = -1;
          if (bVar9 || bVar1) {
            iVar7 = (int)DAT_0091cf90[0xd];
          }
          if (local_c == iVar8) {
            if ((bVar9 || bVar1) && (iVar7 != -1)) {
              if (iVar7 == 4) {
LAB_005594d2:
                cVar3 = FUN_00626dd0();
              }
              else {
                cVar3 = FUN_00626dd0();
              }
joined_r0x005594eb:
              if (cVar3 == '\0') {
                FUN_00644060(1);
              }
            }
          }
          else if (((local_c == iVar7) && (bVar9 || bVar1)) && (iVar8 != -1)) {
            if (iVar8 == 4) goto LAB_005594d2;
            cVar3 = FUN_00626dd0();
            goto joined_r0x005594eb;
          }
          if (local_c == 4) {
            cVar3 = FUN_00626dd0();
            if (cVar3 == '\0') {
              FUN_00644060(1);
              FUN_00633d90();
              goto LAB_00559616;
            }
          }
          else if ((local_c != -1) && (cVar3 = FUN_00626dd0(), cVar3 == '\0')) {
            FUN_00644060(1);
          }
          FUN_00633d90();
        }
LAB_00559616:
        cVar3 = FUN_00633d80();
      }
    }
    local_c = local_c + 1;
    if (0 < local_c) {
      FUN_00559280();
      return;
    }
  } while( true );
}

