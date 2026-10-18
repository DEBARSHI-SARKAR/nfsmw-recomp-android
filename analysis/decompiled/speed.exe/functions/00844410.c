/* speed.exe 00844410 FUN_00844410; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0083a670 FUN_0083a670
 * calls 0083a980 FUN_0083a980
 * calls 007d6cb0 __security_check_cookie
 * calls 0083abc0 FUN_0083abc0
 * calls 0084bcb0 GetTickCount
 * calls 008563d0 FUN_008563d0
 * calls 00856430 FUN_00856430
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00844410(int param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  bool bVar12;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  DWORD local_e4;
  uint local_e0;
  int local_dc [17];
  int iStack_98;
  int iStack_8c;
  undefined1 local_84 [128];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  DVar2 = GetTickCount();
  uVar6 = (DVar2 - *(int *)(param_1 + 0xc)) / 1000;
  if (uVar6 != 0) {
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + (char)uVar6;
    *(uint *)(param_1 + 0xc) = uVar6 * 1000 + *(int *)(param_1 + 0xc);
  }
  local_e0 = (DVar2 - *(int *)(param_1 + 0x10)) / 100;
  local_ec = 0;
  local_f0 = 0;
  local_e4 = DVar2;
  if (*(int *)(param_1 + 4) != 0) {
    pcVar7 = (char *)(param_1 + 0x62);
    do {
      if (*pcVar7 == *(char *)(param_1 + 8)) {
        if ((byte)(*(char *)(param_1 + 8) - pcVar7[1]) < 0x3c) {
          pcVar7[-0xffffffff00000002] = '\0';
          pcVar7[-0xffffffff00000001] = -0x80;
          cVar1 = *(char *)(param_1 + 8) + -1;
          pcVar7[1] = cVar1;
          *pcVar7 = cVar1;
        }
        else {
          puVar8 = (undefined4 *)(*(int *)(param_1 + 4) * 0x4c + -0x2c + param_1);
          pcVar10 = pcVar7 + -0x42;
          for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            pcVar10 = pcVar10 + 4;
          }
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
          DVar2 = local_e4;
        }
      }
      if (((pcVar7[-1] & 0x80U) != 0) && (local_f0 < local_e0)) {
        local_84[0] = 0;
        FUN_0083a980(local_84,0x80,&DAT_008c6cf4,local_ec);
        FUN_0083c880(local_84,0x80,&DAT_008c68c0,pcVar7 + -0x42);
        FUN_008563d0(*(undefined4 *)(param_1 + 0x1c),pcVar7 + -0x42,local_84,0xffffffff);
        *(ushort *)(pcVar7 + -2) = *(ushort *)(pcVar7 + -2) & 0xfff | 0x4000;
        cVar1 = *(char *)(param_1 + 8) + -1;
        pcVar7[1] = cVar1;
        *pcVar7 = cVar1;
        local_f0 = local_f0 + 1;
        *(DWORD *)(param_1 + 0x10) = DVar2;
      }
      if (((pcVar7[-1] & 0x40U) != 0) && ((char)(*(char *)(param_1 + 8) - *pcVar7) == '\x05')) {
        pcVar7[-0xffffffff00000002] = '\0';
        pcVar7[-0xffffffff00000001] = ' ';
        if (*(code **)(pcVar7 + 2) != (code *)0x0) {
          (**(code **)(pcVar7 + 2))(pcVar7 + -0x42,0,*(undefined4 *)(pcVar7 + 6));
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7[4] = '\0';
          pcVar7[5] = '\0';
        }
      }
      local_ec = local_ec + 1;
      pcVar7 = pcVar7 + 0x4c;
    } while (local_ec < *(uint *)(param_1 + 4));
  }
  local_e8 = 0x80;
  iVar5 = FUN_00856430(*(undefined4 *)(param_1 + 0x1c),local_84,&local_e8,local_dc);
  do {
    if (iVar5 == 0) {
      return;
    }
    if ((iStack_8c == 1) && (*(code **)(param_1 + 0x14) != (code *)0x0)) {
      (**(code **)(param_1 + 0x14))(local_dc,iStack_98,*(undefined4 *)(param_1 + 0x18));
    }
    else {
      uVar3 = FUN_0083a670(local_84,&DAT_008c6cf4,0);
      iVar5 = FUN_0083abc0(uVar3);
      if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 4))) {
        piVar4 = (int *)(iVar5 * 0x4c + 0x20 + param_1);
        iVar5 = 0x10;
        bVar12 = true;
        piVar9 = piVar4;
        piVar11 = local_dc;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar12 = *piVar9 == *piVar11;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        } while (bVar12);
        if (bVar12) {
LAB_0084468f:
          if (piVar4 != (int *)0x0) {
            if (0xfff < iStack_98) {
              iStack_98 = 0xfff;
            }
            *(short *)(piVar4 + 0x10) = (short)iStack_98;
            if ((code *)piVar4[0x11] != (code *)0x0) {
              (*(code *)piVar4[0x11])(local_dc,iStack_98,piVar4[0x12]);
              piVar4[0x11] = 0;
            }
          }
          goto LAB_008446ce;
        }
      }
      uVar6 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        piVar4 = (int *)(param_1 + 0x20);
        do {
          iVar5 = 0x10;
          bVar12 = true;
          piVar9 = piVar4;
          piVar11 = local_dc;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *piVar9 == *piVar11;
            piVar9 = piVar9 + 1;
            piVar11 = piVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            if (uVar6 != 0xffffffff) {
              piVar4 = (int *)(uVar6 * 0x4c + param_1 + 0x20);
              goto LAB_0084468f;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          piVar4 = piVar4 + 0x13;
        } while (uVar6 < *(uint *)(param_1 + 4));
      }
    }
LAB_008446ce:
    iVar5 = FUN_00856430(*(undefined4 *)(param_1 + 0x1c),local_84,&local_e8,local_dc);
  } while( true );
}

