/* speed.exe 0083afb0 FUN_0083afb0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a330 FUN_0083a330
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083afb0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_11 [11];
  byte local_6 [2];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_6[1] = 0;
  if (((&DAT_008c62f8)[param_4 & 0xff] & 2) == 0) {
    pbVar5 = local_6;
    uVar3 = param_4;
  }
  else {
    local_11[10] = (&DAT_008c63f8)[(param_4 & 0xff) >> 4];
    pbVar5 = local_11 + 9;
    local_11[9] = 0x25;
    uVar3 = (uint)(byte)(&DAT_008c63f8)[param_4 & 0xf];
  }
  local_6[0] = (byte)uVar3;
  uVar3 = param_4 >> 8 & 0xff;
  pbVar4 = pbVar5 + -1;
  if (((&DAT_008c62f8)[uVar3] & 2) == 0) {
    *pbVar4 = (byte)(param_4 >> 8);
  }
  else {
    *pbVar4 = (&DAT_008c63f8)[param_4 >> 8 & 0xf];
    pbVar5[-2] = (&DAT_008c63f8)[uVar3 >> 4];
    pbVar4 = pbVar5 + -3;
    *pbVar4 = 0x25;
  }
  bVar2 = (byte)(param_4 >> 0x10);
  pbVar5 = pbVar4 + -1;
  if (((&DAT_008c62f8)[bVar2] & 2) == 0) {
    *pbVar5 = bVar2;
  }
  else {
    *pbVar5 = (&DAT_008c63f8)[bVar2 & 0xf];
    pbVar4[-2] = (&DAT_008c63f8)[bVar2 >> 4];
    pbVar5 = pbVar4 + -3;
    *pbVar5 = 0x25;
  }
  pbVar4 = pbVar5 + -1;
  if (((&DAT_008c62f8)[param_4 >> 0x18] & 2) == 0) {
    *pbVar4 = (byte)(param_4 >> 0x18);
  }
  else {
    *pbVar4 = (&DAT_008c63f8)[param_4 >> 0x18 & 0xf];
    pbVar5[-2] = (&DAT_008c63f8)[param_4 >> 0x1c];
    pbVar4 = pbVar5 + -3;
    *pbVar4 = 0x25;
  }
  pbVar5 = (byte *)FUN_0083a330(param_1,param_2,param_3,local_6 + (1 - (int)pbVar4));
  if (pbVar5 != (byte *)0x0) {
    bVar2 = *pbVar4;
    while (bVar2 != 0) {
      *pbVar5 = bVar2;
      pbVar1 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar1;
    }
    if ((DAT_0090d314 != 0) && (param_3 != 0)) {
      *pbVar5 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = 0;
    return (int)pbVar5 - param_1;
  }
  return -1;
}

