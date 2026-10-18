/* speed.exe 00866670 FUN_00866670; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00866670(undefined4 param_1,int *param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  undefined4 local_4;
  
  piVar4 = param_2;
  local_4 = DAT_00906980;
  local_c = *param_3;
  iVar3 = (int)(param_4 * 8 + -0x20) / 3;
  pbVar8 = (byte *)(param_3 + 1);
  iVar7 = local_c >> 0x10;
  param_4 = 0;
  param_3 = (int *)(int)(short)local_c;
  if (0 < iVar3) {
    do {
      if ((param_4 & 7) == 0) {
        bVar1 = *pbVar8;
        bVar2 = pbVar8[1];
        local_c = CONCAT13(bVar2 >> 1,CONCAT12(bVar2 << 2 | bVar1 >> 6,CONCAT11(bVar1 >> 3,bVar1)));
        bVar1 = pbVar8[2];
        local_8 = bVar2 >> 4;
        local_7 = bVar1 << 1 | bVar2 >> 7;
        local_6 = bVar1 >> 2;
        local_5 = bVar1 >> 5;
        pbVar8 = pbVar8 + 3;
      }
      iVar5 = (int)(short)(&DAT_009c4f80)[iVar7];
      bVar1 = *(byte *)((int)&local_c + (param_4 & 7));
      iVar6 = 0;
      if ((bVar1 & 2) != 0) {
        iVar6 = iVar5;
      }
      if ((bVar1 & 1) != 0) {
        iVar6 = iVar6 + (iVar5 >> 1);
      }
      iVar6 = iVar6 + (iVar5 >> 2);
      if ((bVar1 & 4) != 0) {
        iVar6 = -iVar6;
      }
      param_3 = (int *)((int)param_3 + iVar6);
      if ((int)param_3 < -0x1fff) {
        param_3 = (int *)0xffffe001;
      }
      else if (0x1fff < (int)param_3) {
        param_3 = (int *)0x1fff;
      }
      iVar7 = iVar7 + *(short *)(&DAT_0090d508 + (bVar1 & 3) * 2);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (DAT_009c5000 + -1 < iVar7) {
        iVar7 = DAT_009c5000 + -1;
      }
      *param_2 = *param_2 + (int)param_3 * 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while ((int)param_4 < iVar3);
  }
  return (int)param_2 - (int)piVar4 >> 2;
}

