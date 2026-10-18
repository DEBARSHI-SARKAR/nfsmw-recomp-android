/* speed.exe 00858c80 FUN_00858c80; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0085bb60 FUN_0085bb60
 * calls 0085ba60 FUN_0085ba60
 * calls 0085bb80 FUN_0085bb80
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
FUN_00858c80(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_51c [326];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_0085ba60(local_51c,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
               param_3 + 0x20,4);
  FUN_0085bb60(local_51c,param_4,param_2);
  FUN_0085bb80(local_51c);
  puVar2 = (undefined4 *)((int)local_51c + ((param_2 & 0xfffffffe) - param_1));
  for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_5 = *puVar2;
    puVar2 = puVar2 + 1;
    param_5 = param_5 + 1;
  }
  for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
    *(undefined1 *)param_5 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_5 = (undefined4 *)((int)param_5 + 1);
  }
  return;
}

