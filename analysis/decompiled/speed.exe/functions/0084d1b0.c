/* speed.exe 0084d1b0 FUN_0084d1b0; analysis pseudocode, not buildable source.
 * calls 0084c5c0 FUN_0084c5c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084ae70 FUN_0084ae70
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084afb0 FUN_0084afb0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084b560 FUN_0084b560
 * calls 0078af30 FUN_0078af30
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0084d1b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (DAT_009c3878 != (undefined4 *)0x0) {
    DAT_009c3874 = DAT_009c3874 + 1;
    return DAT_009c3878;
  }
  puVar1 = (undefined4 *)FUN_0078af30(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_1 < 4) {
      param_1 = 4;
    }
    puVar2 = (undefined4 *)FUN_0078af30(param_1 * 0x1a4);
    puVar1[10] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar1[0xb] = puVar2 + param_1 * 0x69;
      uVar4 = (int)(puVar2 + param_1 * 0x69) - (int)puVar2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar1[0x13] = 1;
      iVar3 = FUN_0084ae70(2,2,0);
      if (iVar3 != 0) {
        DAT_009c3874 = 1;
        DAT_009c3878 = puVar1;
        FUN_0084bcc0(puVar1);
        FUN_0084bd60(puVar1);
        local_14 = 2;
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
        local_12 = 0xf27;
        FUN_0084afb0(iVar3,&local_14,0x10);
        puVar1[0xf] = 0xf270002;
        puVar1[0x10] = 0xffffffff;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0xc] = 1;
        puVar1[0xe] = iVar3;
        FUN_0084b560(iVar3,2,100,puVar1,FUN_0084c630);
        FUN_0084bdf0(puVar1);
        FUN_0084c5c0();
        return puVar1;
      }
    }
    thunk_FUN_004655f0(puVar1);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

