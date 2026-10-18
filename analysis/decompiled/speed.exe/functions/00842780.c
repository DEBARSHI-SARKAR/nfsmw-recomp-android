/* speed.exe 00842780 FUN_00842780; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0083a670 FUN_0083a670
 * calls 0083c880 FUN_0083c880
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00842780(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_114;
  char local_110 [128];
  undefined1 local_90 [132];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  pcVar2 = (char *)FUN_007c97c0(param_1,0x24);
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      return;
    }
    local_114 = (char *)FUN_007c97c0(pcVar2 + 1,0x24);
    if (local_114 == (char *)0x0) {
      return;
    }
    pcVar3 = local_114 + (-1 - (int)pcVar2);
    if (0x7f < (int)pcVar3) {
      return;
    }
    pcVar7 = pcVar2 + 1;
    pcVar8 = local_110;
    for (uVar5 = (uint)pcVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = (uint)pcVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(char *)((int)&local_114 + (int)(pcVar3 + 4)) = '\0';
    uVar4 = FUN_0083a670(param_3,local_110,local_90,0x80,&DAT_00890978);
    FUN_0083b210(uVar4);
    FUN_0083c880(local_110,0x80,0,local_90);
    pcVar3 = local_110;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    for (uVar5 = (int)pcVar3 - (int)(local_110 + 1);
        (0 < (int)uVar5 && (*(char *)((int)&local_114 + uVar5 + 3) < '!')); uVar5 = uVar5 - 1) {
      *(undefined1 *)((int)&local_114 + uVar5 + 3) = 0;
    }
    cVar1 = *local_114;
    pcVar3 = local_114;
    while (cVar1 != '\0') {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar7;
    }
    if (param_2 <= (int)(pcVar3 + (uVar5 - param_1))) break;
    FID_conflict__memcpy(pcVar2 + uVar5,local_114 + 1,(int)pcVar3 - (int)local_114);
    pcVar3 = local_110;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    pcVar2 = (char *)FUN_007c97c0(param_1,0x24);
  }
  return;
}

