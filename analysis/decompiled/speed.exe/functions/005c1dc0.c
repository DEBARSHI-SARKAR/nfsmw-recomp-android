/* speed.exe 005c1dc0 FUN_005c1dc0; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 * calls 005b3cd0 FUN_005b3cd0
 * calls 005bffe0 FUN_005bffe0
 */

/* WARNING: Removing unreachable block (ram,0x005c1e6f) */

void __thiscall FUN_005c1dc0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_005b3cd0();
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) ^
       ((*(int *)(param_2 + 4) << 8) >> 8 ^ *(uint *)(param_1 + 4)) & 0xffffff;
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  if (param_2[0x2c] == '\0') {
    for (iVar4 = *(int *)(param_2 + 0x30); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      puVar3 = (undefined4 *)FUN_005bffe0();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0xabadcafe;
        puVar3[2] = 0xabadcafe;
        *puVar3 = &PTR_FUN_008a2c24;
      }
      puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
      puVar3[4] = *(undefined4 *)(iVar4 + 0x10);
      puVar3[5] = *(undefined4 *)(iVar4 + 0x14);
      puVar3[6] = *(undefined4 *)(iVar4 + 0x18);
      puVar3[7] = *(undefined4 *)(iVar4 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        iVar2 = *(int *)(param_1 + 0x30);
        puVar3[1] = iVar2;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 8) = puVar3;
        }
        puVar3[2] = 0;
        *(undefined4 **)(param_1 + 0x30) = puVar3;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
        puVar3[1] = iVar2;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 8) = puVar3;
        }
        puVar3[2] = iVar1;
        *(undefined4 **)(iVar1 + 4) = puVar3;
      }
      if (*(int *)(param_1 + 0x34) == iVar1) {
        *(undefined4 **)(param_1 + 0x34) = puVar3;
      }
    }
    return;
  }
  if (param_2[0x2c] == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x30);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x2c] = 0;
    return;
  }
  if (param_1[0x2c] == '\0') {
    FUN_005b3cd0();
  }
  *(int *)(param_1 + 0x30) = iVar4;
  param_1[0x2c] = 1;
  return;
}

