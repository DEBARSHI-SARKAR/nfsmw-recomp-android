/* speed.exe 00841400 FUN_00841400; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00840650 FUN_00840650
 * calls 007d6cb0 __security_check_cookie
 * calls 00844340 FUN_00844340
 * calls 00840050 FUN_00840050
 * calls 00844940 FUN_00844940
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00841400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00844940(param_1);
    uVar2 = FUN_00844340(0x80);
    *(undefined4 *)(param_1 + 4) = uVar2;
    local_24[0] = 0;
    FUN_0083a980(local_24,0x20,"INGAME",0);
    iVar1 = *(int *)(param_1 + 8);
    if ((((iVar1 == 0x69646c65) || (iVar1 == 0x61757468)) || (iVar1 == 0x61636374)) ||
       (iVar1 == 0x736b6579)) {
      puVar3 = (undefined4 *)FUN_00840050(0x73656c65,0,0);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00840650(param_1,0x73656c65,local_24,*puVar3);
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

