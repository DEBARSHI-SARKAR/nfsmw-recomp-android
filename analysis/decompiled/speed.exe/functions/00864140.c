/* speed.exe 00864140 FUN_00864140; analysis pseudocode, not buildable source.
 * calls 0083faf0 FUN_0083faf0
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b110 FUN_0084b110
 * calls 007c6100 _sprintf
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00864140(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *unaff_ESI;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 uStack_91;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  char local_84 [128];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar2 = param_1[2];
  local_90 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                               (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
  _local_92 = CONCAT11(*(undefined1 *)(param_1 + 3),(char)((uint)param_1[3] >> 8));
  local_94 = 2;
  local_8c = 0;
  local_88 = 0;
  uVar2 = FUN_0083faf0(unaff_ESI[2],param_2,param_1 + 6,*param_1);
  _sprintf(local_84,"sourceIP=%s\r\nsourcePort=%d\r\ntag=%s\r\nsendCount=%d\r\n",uVar2);
  pcVar3 = local_84;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0084b110(*unaff_ESI,local_84,pcVar3 + (1 - (int)(local_84 + 1)),0,&local_94,0x10);
  return;
}

