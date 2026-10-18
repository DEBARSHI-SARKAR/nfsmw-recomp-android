/* speed.exe 0067bc20 FUN_0067bc20; analysis pseudocode, not buildable source.
 * calls 006722c0 FUN_006722c0
 * calls 00723c90 FUN_00723c90
 * calls 005d7930 FUN_005d7930
 * calls 0066b730 FUN_0066b730
 * calls 00723d80 FUN_00723d80
 * calls 006778f0 FUN_006778f0
 * calls 00728920 FUN_00728920
 */

undefined4 * __thiscall
FUN_0067bc20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087adb6;
  local_c = ExceptionList;
  puStack_20 = *(undefined4 **)(param_2 + 0x2c);
  puStack_24 = (undefined1 *)0x67bc4c;
  ExceptionList = &local_c;
  psVar2 = (short *)FUN_00723c90();
  if (psVar2 != (short *)0x0) {
    puStack_20 = (undefined4 *)(int)*psVar2;
    puStack_24 = (undefined1 *)0x67bc5e;
    iVar3 = FUN_00723d80();
    if (((iVar3 != 0) && (iVar4 = psVar2[1] * 0x40 + *(int *)(iVar3 + 0x20), iVar4 != 0)) &&
       (iVar3 = *(int *)(iVar3 + 0x18) + *(short *)(iVar4 + 0x3e) * 0x48, iVar3 != 0)) {
      uStack_28 = *(undefined4 *)(iVar3 + 0x44);
      goto LAB_0067bc8b;
    }
  }
  uStack_28 = 0;
LAB_0067bc8b:
  puStack_20 = (undefined4 *)0x0;
  puStack_24 = (undefined1 *)0x0;
  uStack_2c = param_4;
  uStack_30 = 0;
  uStack_38 = param_3;
  uStack_3c = param_4;
  local_34 = 0x9756df79;
  FUN_0066b730(&uStack_3c);
  FUN_006722c0();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar1 = param_1 + 0x39;
  puStack_24 = &LAB_00620fe0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x3a] = puVar5;
  uStack_28 = 0x67bcec;
  puStack_20 = puVar1;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a93a0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *param_1 = &PTR_FUN_008a9e7c;
  param_1[2] = &PTR_LAB_008a9e74;
  param_1[0xb] = &PTR_LAB_008a9e58;
  param_1[0xd] = &PTR_LAB_008a9dd8;
  param_1[0x10] = &PTR_LAB_008a9dcc;
  param_1[0x25] = &PTR_LAB_008a9db0;
  param_1[0x27] = &PTR_LAB_008a9da8;
  *puVar1 = &PTR_LAB_008a9d90;
  param_1[0x3c] = param_2;
  if (param_5 == '\0') {
    puStack_20 = (undefined4 *)0x67bd4f;
    FUN_006778f0();
  }
  else {
    puStack_20 = *(undefined4 **)(param_2 + 0x2c);
    puStack_24 = (undefined1 *)0x67bd5a;
    iVar3 = FUN_00723c90();
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 0x10;
      puStack_20 = (undefined4 *)0x67bd6c;
      FUN_00728920();
    }
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  DAT_0092617c = DAT_0092617c + 1;
  ExceptionList = local_c;
  return param_1;
}

