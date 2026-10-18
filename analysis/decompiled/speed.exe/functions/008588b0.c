/* speed.exe 008588b0 FUN_008588b0; analysis pseudocode, not buildable source.
 * calls 00856dc0 FUN_00856dc0
 * calls 0085aeb0 FUN_0085aeb0
 * calls 00856d90 FUN_00856d90
 * calls 007d6cb0 __security_check_cookie
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008588b0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  int local_68;
  int local_64;
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  piVar1 = *(int **)(param_1 + 0x120);
  if ((0 < (int)param_3) && ((int)param_3 < 0x3e81)) {
    local_68 = 4;
    if (0 < piVar1[0x204b]) {
      local_68 = 0x14;
    }
    local_64 = local_68 + (int)piVar1;
    puVar6 = (undefined4 *)(local_64 + 8);
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar4 = piVar1[0x206c];
    iVar5 = local_68 + param_3;
    if (iVar4 < 1) {
      param_3 = 0;
    }
    else {
      param_3 = (iVar4 - (int)param_3 % iVar4) % iVar4;
    }
    puVar6 = (undefined4 *)(iVar5 + 8 + (int)piVar1);
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar5 = iVar5 + param_3;
    if (0 < piVar1[0x204b]) {
      local_6c = *(undefined1 *)((int)piVar1 + 0x400b);
      local_6b = *(undefined1 *)((int)piVar1 + 0x400a);
      local_6a = *(undefined1 *)((int)piVar1 + 0x4009);
      local_69 = (undefined1)piVar1[0x1002];
      FUN_00856d90(local_60);
      FUN_00856dc0(local_60,piVar1 + 0x204c,piVar1[0x204b]);
      FUN_00856dc0(local_60,local_64 + 8,iVar5 - local_68);
      FUN_00856dc0(local_60,&local_6c,4);
      FUN_00856e70(local_60,piVar1 + 3,0x10);
    }
    if (0 < piVar1[0x204b]) {
      FUN_0085aeb0((int)piVar1 + 0x87be,piVar1 + 3,iVar5 + -4);
    }
    iVar4 = 4;
    if (0 < (int)param_3) {
      iVar4 = 3;
      *(char *)((int)piVar1 + 0xb) = (char)param_3;
    }
    *(char *)(iVar4 + 7 + (int)piVar1) = (char)(iVar5 + -4);
    bVar2 = (byte)((uint)(iVar5 + -4) >> 8);
    *(byte *)(iVar4 + 6 + (int)piVar1) = bVar2;
    if (param_3 == 0) {
      *(byte *)(iVar4 + 6 + (int)piVar1) = bVar2 | 0x80;
    }
    piVar1[1] = iVar5;
    piVar1[0x1002] = piVar1[0x1002] + 1;
    *piVar1 = iVar4 + -2;
    return 0;
  }
  return 0xffffffff;
}

