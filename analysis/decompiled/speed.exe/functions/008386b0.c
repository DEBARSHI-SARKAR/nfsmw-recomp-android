/* speed.exe 008386b0 FUN_008386b0; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 008477a0 FUN_008477a0
 * calls 0083a980 FUN_0083a980
 * calls 007d6cb0 __security_check_cookie
 * calls 007c97c0 FUN_007c97c0
 * calls 007c6100 _sprintf
 * calls 007c64e0 _strncpy
 * calls 00837cc0 FUN_00837cc0
 * calls 00848750 FUN_00848750
 * calls 00848720 FUN_00848720
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_008386b0(int param_1,undefined4 param_2,char *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char local_4f0 [100];
  char local_48c [204];
  undefined1 local_3c0 [956];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if ((((iVar2 != 0) && (iVar2 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2), iVar2 != 0)) &&
      (*(int **)(iVar2 + 0x100) != (int *)0x0)) &&
     ((*(uint *)(**(int **)(iVar2 + 0x100) + 0xf8) & 0x2000000) != 0)) {
    return -2;
  }
  if (*(int *)(param_1 + 0x38) != 2) {
    return -4;
  }
  local_3c0[0] = 0;
  FUN_0083c880(local_3c0,0x3bc,&DAT_008b6f04,&DAT_008a4154);
  iVar2 = FUN_007c97c0(param_2,0x2f);
  if (iVar2 == 0) {
    pcVar3 = (char *)FUN_008477a0(*(undefined4 *)(param_1 + 8));
    if (*pcVar3 == '/') {
      iVar2 = FUN_008477a0(*(undefined4 *)(param_1 + 8));
      pcVar3 = (char *)(iVar2 + 1);
      iVar2 = -(int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(local_4f0 + iVar2)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar4 = (char *)FUN_008477a0(*(undefined4 *)(param_1 + 8));
      pcVar3 = local_4f0;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    puVar5 = (undefined1 *)FUN_007c97c0(local_4f0,0x2f);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
    }
    _sprintf(local_48c,"%s/%s",param_2,local_4f0);
    FUN_0083c880(local_3c0,0x3bc,&DAT_008b68c4,local_48c);
  }
  else {
    FUN_0083c880(local_3c0,0x3bc,&DAT_008b68c4,param_2);
  }
  _strncpy(local_48c,param_3,*(size_t *)(param_1 + 0xa8));
  local_48c[*(int *)(param_1 + 0xa8)] = '\0';
  FUN_0083c880(local_3c0,0x3bc,&DAT_0089e2c4,local_48c);
  FUN_0083a980(local_3c0,0x3bc,&DAT_008c628c,0x3f480);
  FUN_00837cc0(param_1,param_2,param_4,param_5);
  iVar2 = FUN_007c97c0(param_2,0x2c);
  if (iVar2 == 0) {
    iVar2 = FUN_00848720();
  }
  else {
    iVar2 = FUN_00848750(*(undefined4 *)(param_1 + 8),local_3c0,FUN_00836a90,param_1,
                         *(undefined4 *)(param_1 + 0xb0));
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return 0;
    }
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return iVar2;
}

