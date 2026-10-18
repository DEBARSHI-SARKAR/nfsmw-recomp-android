/* speed.exe 008079c1 FUN_008079c1; analysis pseudocode, not buildable source.
 * calls 00800a34 FUN_00800a34
 * calls 00808055 FUN_00808055
 * calls 008080d7 FUN_008080d7
 * calls 00807915 FUN_00807915
 */

void FUN_008079c1(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x4524) == 0) {
    bVar1 = FUN_00800a34(param_1,*(int *)(param_1 + 4) + param_4 * 0x80,
                         *(int *)(param_1 + 0x78) != 0,*(undefined4 *)(param_1 + 0xbc),
                         *(undefined4 *)(param_1 + 0xc0));
  }
  else {
    bVar1 = FUN_008080d7(param_1,*(int *)(param_1 + 4) + param_4 * 0x80,
                         *(int *)(param_1 + 0x78) != 0);
  }
  iVar3 = param_4 * 0x80;
  FUN_00808055(param_1,param_4,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xbc),
               *(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = *(undefined4 *)(param_1 + 0xc + param_4 * 4);
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = *(undefined2 *)(iVar3 + *(int *)(param_1 + 4));
  *(undefined2 *)(*(int *)(param_1 + 0xbc) + 10) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) =
       *(undefined2 *)(&DAT_008c4d50 + *(int *)(param_1 + 8) * 4);
  *(undefined2 *)(*(int *)(param_1 + 0xbc) + 8) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8);
  if (bVar1 < 2) {
    (*DAT_009c6844)();
    *(undefined2 *)(iVar3 + *(int *)(param_1 + 4)) = 0;
  }
  else if (bVar1 < 0xb) {
    (*DAT_009c6864)();
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = (undefined4 *)(iVar3 + 0x10 + *(int *)(param_1 + 4));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined4 *)(iVar3 + 0x20 + *(int *)(param_1 + 4));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined4 *)(iVar3 + 0x30 + *(int *)(param_1 + 4));
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined2 *)(iVar3 + 0x40 + *(int *)(param_1 + 4)) = 0;
  }
  else {
    (*DAT_009c693c)(*(int *)(param_1 + 4) + iVar3,
                    *(undefined4 *)
                     (*(int *)(param_1 + 0x13c) + 0x180 + (uint)(byte)(&DAT_008c47b8)[param_4] * 4),
                    *(undefined4 *)(param_1 + 0x274));
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_00807915(param_1,param_4);
  return;
}

