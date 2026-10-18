/* speed.exe 0083adc0 FUN_0083adc0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a330 FUN_0083a330
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083adc0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  char local_14 [16];
  undefined4 local_4;
  
  bVar8 = (byte)param_4;
  bVar9 = (byte)(param_4 >> 8);
  uVar10 = param_4 >> 0x10;
  bVar7 = (byte)(param_4 >> 0x10);
  local_4 = DAT_00906980;
  uVar4 = param_4 >> 0x18;
  bVar3 = (byte)(param_4 >> 0x18);
  pcVar5 = local_14;
  if (9 < bVar3) {
    if (99 < bVar3) {
      uVar2 = (ulonglong)uVar4;
      uVar4 = uVar4 % 100;
      pcVar5 = local_14 + 1;
      local_14[0] = (char)(uVar2 / 100) + '0';
    }
    *pcVar5 = (char)((ulonglong)uVar4 / 10) + '0';
    pcVar5 = pcVar5 + 1;
    bVar3 = (byte)(uVar4 % 10);
  }
  *pcVar5 = bVar3 + 0x30;
  pcVar5[1] = '.';
  pcVar6 = pcVar5 + 2;
  if (9 < bVar7) {
    if (99 < bVar7) {
      *pcVar6 = (char)((ulonglong)(uVar10 & 0xff) / 100) + '0';
      pcVar6 = pcVar5 + 3;
      uVar10 = (uint)(byte)((ulonglong)(uVar10 & 0xff) % 100);
    }
    *pcVar6 = (char)((ulonglong)(uVar10 & 0xff) / 10) + '0';
    bVar7 = (byte)((ulonglong)(uVar10 & 0xff) % 10);
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = bVar7 + 0x30;
  pcVar6[1] = '.';
  pcVar5 = pcVar6 + 2;
  uVar4 = (uint)bVar9;
  if (9 < bVar9) {
    if (99 < bVar9) {
      uVar4 = (uint)bVar9 % 100;
      *pcVar5 = (char)((ulonglong)(uint)bVar9 / 100) + '0';
      pcVar5 = pcVar6 + 3;
    }
    *pcVar5 = (char)((ulonglong)uVar4 / 10) + '0';
    pcVar5 = pcVar5 + 1;
    bVar9 = (byte)(uVar4 % 10);
  }
  *pcVar5 = bVar9 + 0x30;
  pcVar5[1] = '.';
  pcVar6 = pcVar5 + 2;
  if (9 < bVar8) {
    if (99 < bVar8) {
      bVar3 = bVar8 / 100;
      bVar8 = bVar8 % 100;
      *pcVar6 = bVar3 + 0x30;
      pcVar6 = pcVar5 + 3;
    }
    bVar3 = bVar8 / 10;
    bVar8 = bVar8 % 10;
    *pcVar6 = bVar3 + 0x30;
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = bVar8 + 0x30;
  pcVar6[1] = '\0';
  pcVar5 = (char *)FUN_0083a330(param_1,param_2,param_3,(int)(pcVar6 + 1) - (int)local_14);
  if (pcVar5 == (char *)0x0) {
    return -1;
  }
  pcVar6 = local_14;
  while (local_14[0] != '\0') {
    *pcVar5 = local_14[0];
    pcVar1 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
    local_14[0] = *pcVar1;
  }
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pcVar5 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar5 = pcVar5 + 1;
  }
  *pcVar5 = '\0';
  return (int)pcVar5 - param_1;
}

