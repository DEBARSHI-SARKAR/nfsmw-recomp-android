/* speed.exe 008412e0 FUN_008412e0; analysis pseudocode, not buildable source.
 * calls 00840650 FUN_00840650
 * calls 008443d0 FUN_008443d0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083c9b0 FUN_0083c9b0
 * calls 00840050 FUN_00840050
 * calls 008449b0 FUN_008449b0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008412e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*(int *)(param_1 + 0xc) != 1) {
    FUN_0083c9b0(local_104,0x100,
                 "INGAME=%d MESGS=%d MESGTYPES=%f USERS=%d GAMES=%d MYGAME=%d ROOMS=%d ASYNC=%d USERSETS=%d STATS=%d"
                 ,1,1,0x2010080,0,0,0,0,0,0,0);
    iVar2 = 0;
    do {
      FUN_0083c9b0(local_104,0x100,"~USERSET%d=",iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = *(int *)(param_1 + 8);
    if ((((iVar2 == 0x69646c65) || (iVar2 == 0x61757468)) || (iVar2 == 0x61636374)) ||
       (iVar2 == 0x736b6579)) {
      puVar1 = (undefined4 *)FUN_00840050(0x73656c65,0,0);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00840650(param_1,0x73656c65,local_104,*puVar1);
      }
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_008443d0(*(int *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)(param_1 + 0x1834) != 0) {
      FUN_008449b0(param_1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

