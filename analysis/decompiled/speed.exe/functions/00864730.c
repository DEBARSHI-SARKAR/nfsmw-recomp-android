/* speed.exe 00864730 FUN_00864730; analysis pseudocode, not buildable source.
 * calls 0083faf0 FUN_0083faf0
 * calls 00863aa0 FUN_00863aa0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00864730(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_a4 [31];
  char cStack_85;
  char local_84 [128];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_2 < 2) {
    uVar2 = FUN_0083faf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),
                         (&PTR_s_connected_0090d4f0)[param_2],param_1 + 0x58);
    _sprintf(local_84,"myIP=%s&myPort=%d&version=1.0&status=%s&gameFeatureID=%s\n",uVar2);
    if (-1 < param_3) {
      _sprintf(local_a4,"&latency=%d",param_3);
      pcVar3 = local_a4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar3 - (int)local_a4;
      pcVar3 = &cStack_85;
      do {
        pcVar6 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar6 != '\0');
      pcVar6 = local_a4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    FUN_00863aa0(param_1 + 0xe0,*(undefined4 *)(param_1 + 0xd8),"/connectionStatus",param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x238) = 4;
    return 0;
  }
  return 0xffffffff;
}

