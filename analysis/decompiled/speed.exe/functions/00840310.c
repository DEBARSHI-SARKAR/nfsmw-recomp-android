/* speed.exe 00840310 FUN_00840310; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 00844a10 FUN_00844a10
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00844710 FUN_00844710
 * calls 0083e460 FUN_0083e460
 * calls 00844a30 FUN_00844a30
 * calls 00844410 FUN_00844410
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00840310(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int unaff_EDI;
  bool bVar7;
  byte local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*(int *)(unaff_EDI + 4) != 0) {
    FUN_00844410(*(int *)(unaff_EDI + 4));
    iVar2 = FUN_00844a30();
    if (iVar2 != 0) {
      uVar3 = FUN_00844a10();
      iVar2 = FUN_0083e3b0(uVar3,*(undefined4 *)(unaff_EDI + 0x28));
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EDI + 0x28) = 0;
        iVar2 = FUN_0083e3b0(uVar3,0);
        if (iVar2 == 0) {
          return;
        }
      }
      iVar4 = FUN_00844710(*(undefined4 *)(unaff_EDI + 4),iVar2 + 0x1e0,0,0);
      if (0 < iVar4) {
        _sprintf((char *)local_24,"%d",iVar4);
        pbVar6 = local_24;
        pbVar5 = (byte *)(iVar2 + 0x18);
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_008403d4:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_008403d9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_008403d4;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_008403d9:
        if (iVar4 != 0) {
          pbVar6 = local_24;
          iVar2 = (iVar2 + 0x18) - (int)pbVar6;
          do {
            bVar1 = *pbVar6;
            pbVar6[iVar2] = bVar1;
            pbVar6 = pbVar6 + 1;
          } while (bVar1 != 0);
          FUN_0083e460(uVar3,1);
        }
      }
      *(int *)(unaff_EDI + 0x28) = *(int *)(unaff_EDI + 0x28) + 1;
    }
  }
  return;
}

