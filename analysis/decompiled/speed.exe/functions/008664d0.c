/* speed.exe 008664d0 FUN_008664d0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_008664d0(int param_1,undefined4 *param_2,short *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte local_c [4];
  byte local_8;
  byte local_7;
  byte local_6;
  char local_5;
  
  puVar1 = param_2;
  *param_2 = *(undefined4 *)(param_1 + 8);
  iVar5 = (int)*(short *)(param_1 + 8);
  pbVar6 = (byte *)(param_2 + 1);
  iVar7 = (int)*(short *)(param_1 + 10);
  param_2 = (undefined4 *)0x0;
  if (0 < param_4) {
    do {
      iVar2 = ((int)((int)*param_3 + ((int)*param_3 >> 0x1f & 3U)) >> 2) - iVar5;
      param_3 = param_3 + 1;
      if (iVar2 < -0x1fff) {
        iVar2 = -0x1fff;
      }
      else if (0x1fff < iVar2) {
        iVar2 = 0x1fff;
      }
      iVar4 = (int)(short)(&DAT_009c4f80)[iVar7];
      uVar3 = 0;
      if (iVar2 < 0) {
        uVar3 = 4;
        iVar2 = -iVar2;
      }
      if (iVar4 <= iVar2) {
        uVar3 = uVar3 | 2;
        iVar2 = iVar2 - iVar4;
      }
      if (iVar4 >> 1 <= iVar2) {
        uVar3 = uVar3 | 1;
      }
      iVar2 = 0;
      if ((uVar3 & 2) != 0) {
        iVar2 = iVar4;
      }
      if ((uVar3 & 1) != 0) {
        iVar2 = iVar2 + (iVar4 >> 1);
      }
      iVar2 = iVar2 + (iVar4 >> 2);
      if ((uVar3 & 4) != 0) {
        iVar2 = -iVar2;
      }
      iVar5 = iVar5 + iVar2;
      if (iVar5 < -0x1fff) {
        iVar5 = -0x1fff;
      }
      else if (0x1fff < iVar5) {
        iVar5 = 0x1fff;
      }
      iVar7 = iVar7 + *(short *)(&DAT_0090d508 + (uVar3 & 3) * 2);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (DAT_009c5000 + -1 < iVar7) {
        iVar7 = DAT_009c5000 + -1;
      }
      local_c[(uint)param_2 & 7] = (byte)uVar3;
      if (((uint)param_2 & 7) == 7) {
        *pbVar6 = (local_c[2] << 3 | local_c[1]) << 3 | local_c[0];
        pbVar6[1] = ((local_7 << 3 | local_8) << 3 | local_c[3]) << 1 | local_c[2] >> 2;
        pbVar6[2] = (local_5 << 3 | local_6) << 2 | local_7 >> 1;
        pbVar6 = pbVar6 + 3;
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < param_4);
  }
  *(short *)(param_1 + 10) = (short)iVar7;
  *(short *)(param_1 + 8) = (short)iVar5;
  return (int)pbVar6 - (int)puVar1;
}

