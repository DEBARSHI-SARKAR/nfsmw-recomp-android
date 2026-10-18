/* speed.exe 0084ba10 FUN_0084ba10; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 008621a6 Ordinal_5
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084a8c0 FUN_0084a8c0
 * calls 008621ac Ordinal_6
 * calls 008621ca Ordinal_7
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0084ba10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_0084bd60(0);
  for (puVar3 = _DAT_009c36fc; (puVar3 != (undefined4 *)0x0 && (puVar3 != param_1));
      puVar3 = (undefined4 *)*puVar3) {
  }
  FUN_0084bdf0(0);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = 4;
    iVar2 = Ordinal_7(param_1,0,0x1008,&local_c,&local_8);
    if (iVar2 != -1) {
      puVar3 = (undefined4 *)FUN_0084a8c0(2,local_c,0);
      puVar1 = puVar3 + 7;
      uStack_10 = 0x10;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
      }
      if (puVar3[6] != -1) {
        Ordinal_6(puVar3[6],puVar1,&uStack_10);
      }
      puVar1 = puVar3 + 0xb;
      uStack_10 = 0x10;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
      }
      if (puVar3[6] != -1) {
        Ordinal_5(puVar3[6],puVar1,&uStack_10);
      }
      *(undefined1 *)((int)puVar3 + 0x15) = 1;
    }
  }
  return puVar3;
}

