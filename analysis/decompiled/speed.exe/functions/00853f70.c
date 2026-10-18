/* speed.exe 00853f70 FUN_00853f70; analysis pseudocode, not buildable source.
 * calls 0083b8a0 FUN_0083b8a0
 * calls 007c64e0 _strncpy
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 00844970 FUN_00844970
 * calls 00845bf0 FUN_00845bf0
 * calls 0083ad80 FUN_0083ad80
 * calls 0083abc0 FUN_0083abc0
 * calls 008450a0 FUN_008450a0
 * calls 008405d0 FUN_008405d0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00853f70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_40;
  int local_34;
  char local_28 [36];
  undefined4 local_4;
  
  iVar3 = (int)param_1;
  local_4 = DAT_00906980;
  FUN_00845bf0((int)param_1 + 0x15a0,param_2);
  uVar4 = FUN_0083a670(param_2,&DAT_008a4154,(int)param_1 + 0x1810,0x24,&DAT_0089b350);
  FUN_0083b8a0(uVar4);
  uVar4 = FUN_0083a670(param_2,&DAT_008c74b4,0);
  iVar5 = FUN_0083abc0(uVar4);
  uVar4 = FUN_0083a670(param_2,&DAT_008c74b0,0);
  uVar4 = FUN_0083abc0(uVar4);
  uVar6 = FUN_0083a670(param_2,&DAT_008c74a4,0xffffffff);
  uVar6 = FUN_0083abc0(uVar6);
  param_1 = (undefined4 *)((int)param_1 + 0x1d48);
  local_34 = 4;
  do {
    pbVar11 = (byte *)(iVar3 + 0x16e4);
    bVar2 = false;
    local_40 = 0;
    do {
      if (3 < local_40) {
        if (!bVar2) {
          puVar12 = param_1;
          for (iVar8 = 0x35; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
        }
        break;
      }
      pbVar7 = (byte *)(param_1 + 10);
      pbVar10 = pbVar11;
      do {
        bVar1 = *pbVar7;
        bVar13 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_00854074:
          iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00854079;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar13 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_00854074;
        pbVar7 = pbVar7 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_00854079:
      if (iVar8 == 0) {
        bVar2 = true;
      }
      local_40 = local_40 + 1;
      pbVar11 = pbVar11 + 0x24;
    } while (!bVar2);
    param_1 = param_1 + 0x35;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      FUN_008405d0(iVar3,0,4,0x75736572,param_3,param_2);
      if (iVar5 != *(int *)(iVar3 + 0x17e4)) {
        uVar9 = FUN_0083a670(param_2,&DAT_008c74ac,local_28,0x24,&DAT_00890978);
        FUN_0083b210(uVar9);
        uVar9 = FUN_0083a670(param_2,&DAT_008c74a8,0);
        uVar9 = FUN_0083ad80(uVar9);
        *(int *)(iVar3 + 0x17e4) = iVar5;
        FUN_008450a0(iVar3,iVar5,uVar4,uVar6);
        _strncpy((char *)(iVar3 + 0x17ec),local_28,0x24);
        *(undefined4 *)(iVar3 + 0x17e8) = uVar9;
        FUN_008405d0(iVar3,0,4,0x6d6f7665,0,(char *)(iVar3 + 0x17ec));
        FUN_00844970(iVar3,1);
        FUN_00844970(iVar3,4);
      }
      return;
    }
  } while( true );
}

