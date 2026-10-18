/* speed.exe 0083cf00 FUN_0083cf00; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall FUN_0083cf00(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  byte local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar2 = FUN_0083a670(param_1,&DAT_008c67fc,local_14,0x10,&DAT_00890978);
  FUN_0083b210(uVar2);
  iVar6 = 0;
  do {
    pbVar5 = (&PTR_DAT_0090d318)[iVar6];
    pbVar3 = local_14;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0083cf78:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0083cf7d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0083cf78;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0083cf7d:
    if (iVar4 == 0) {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    if (5 < iVar6) {
      return -1;
    }
  } while( true );
}

