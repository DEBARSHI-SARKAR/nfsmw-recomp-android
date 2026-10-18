/* speed.exe 0084b350 FUN_0084b350; analysis pseudocode, not buildable source.
 * calls 00862116 Ordinal_111
 * calls 007d6cb0 __security_check_cookie
 * calls 008621a6 Ordinal_5
 * calls 008621ac Ordinal_6
 * calls 008621a0 Ordinal_18
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_0084b350(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_224;
  undefined4 local_220;
  int local_21c;
  int local_218;
  int local_118;
  int local_114;
  undefined1 local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_3 != (undefined4 *)0x0) {
    puVar4 = param_3;
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == -1) {
    return 0xfffffff9;
  }
  if (param_2 != 0x636f6e6e) {
    if (param_2 == 0x62696e64) {
      Ordinal_6(iVar1,param_3,&param_4);
      return 0;
    }
    if (param_2 != 0x70656572) {
      if (param_2 != 0x73746174) {
        return 0xffffffff;
      }
      if (*(char *)(param_1 + 0x14) == '\0') {
        local_21c = 1;
        local_118 = 1;
        local_220 = 0;
        local_224 = 0;
        local_218 = iVar1;
        local_114 = iVar1;
        iVar1 = Ordinal_18(1,0,&local_21c,&local_118,&local_224);
        if (iVar1 != 0) {
          if (local_118 != 0) {
            *(undefined1 *)(param_1 + 0x14) = 0xff;
          }
          if (local_21c != 0) {
            *(undefined1 *)(param_1 + 0x14) = 1;
          }
        }
      }
      if ('\0' < *(char *)(param_1 + 0x14)) {
        param_4 = 0x10;
        iVar1 = Ordinal_5(*(undefined4 *)(param_1 + 0x18),local_14,&param_4);
        iVar2 = Ordinal_111();
        if (iVar1 < 0) {
          if ((((iVar2 == 0x2733) || (iVar2 == 0x2746)) || (iVar2 == 0x3e5)) ||
             ((iVar2 == 0x2743 || (iVar2 == 0x2751)))) goto LAB_0084b523;
          if (iVar2 != 0x2749) {
            return (uint)('\0' < *(char *)(param_1 + 0x14));
          }
        }
        else if (iVar1 != -2) goto LAB_0084b523;
        *(undefined1 *)(param_1 + 0x14) = 0xff;
      }
LAB_0084b523:
      return (uint)('\0' < *(char *)(param_1 + 0x14));
    }
  }
  Ordinal_5(iVar1,param_3,&param_4);
  return 0;
}

