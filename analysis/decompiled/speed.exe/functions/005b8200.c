/* speed.exe 005b8200 FUN_005b8200; analysis pseudocode, not buildable source.
 * calls 005ad0f0 FUN_005ad0f0
 */

void __thiscall FUN_005b8200(int param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined1 local_10 [16];
  
  if (*(int *)(param_1 + 0x18) < 0x100) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar2 = 0;
      if (*(uint *)(iVar1 + 0x1c) != 0) {
        puVar5 = (uint *)(*(int *)(iVar1 + 0x20) + 4);
        do {
          if ((*puVar5 & 0xff000000) == 0xa000000) {
            iVar3 = uVar2 * 0x38 + *(int *)(iVar1 + 0x20);
            if (iVar3 != 0) {
              if (param_3 == '\0') {
                *(undefined4 *)(iVar3 + 0x18) = *param_2;
                *(undefined4 *)(iVar3 + 0x1c) = param_2[1];
                *(undefined4 *)(iVar3 + 0x20) = param_2[2];
                *(undefined4 *)(iVar3 + 0x24) = param_2[3];
              }
              else {
                puVar4 = (undefined4 *)FUN_005ad0f0(local_10,param_2);
                *(undefined4 *)(iVar3 + 0x18) = *puVar4;
                *(undefined4 *)(iVar3 + 0x1c) = puVar4[1];
                *(undefined4 *)(iVar3 + 0x20) = puVar4[2];
                *(undefined4 *)(iVar3 + 0x24) = puVar4[3];
              }
              *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0x7f;
            }
            break;
          }
          uVar2 = uVar2 + 1;
          puVar5 = puVar5 + 0xe;
        } while (uVar2 < *(uint *)(iVar1 + 0x1c));
      }
    }
    if (param_3 != '\0') {
      iVar1 = *(int *)(param_1 + 0x2c);
      puVar4 = (undefined4 *)FUN_005ad0f0(local_10,param_2);
      *(undefined4 *)(iVar1 + 0x28) = *puVar4;
      *(undefined4 *)(iVar1 + 0x2c) = puVar4[1];
      *(undefined4 *)(iVar1 + 0x30) = puVar4[2];
      *(undefined4 *)(iVar1 + 0x34) = puVar4[3];
      return;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x28) = *param_2;
    *(undefined4 *)(iVar1 + 0x2c) = param_2[1];
    *(undefined4 *)(iVar1 + 0x30) = param_2[2];
    *(undefined4 *)(iVar1 + 0x34) = param_2[3];
  }
  return;
}

