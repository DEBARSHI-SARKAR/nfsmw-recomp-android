/* speed.exe 00497860 FUN_00497860; analysis pseudocode, not buildable source.
 * calls 00494bc0 FUN_00494bc0
 * calls 0048d8e0 FUN_0048d8e0
 */

void __fastcall FUN_00497860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [24];
  char cStack_10;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(uint *)(param_1 + 0x14) = (uint)*(byte *)(iVar1 + 6) * 0xe + iVar1 + 0x10;
    *(uint *)(param_1 + 0x18) =
         ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) + 1) * (uint)*(byte *)(iVar1 + 6) + 1 & 0xfffffffe;
    uVar2 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(byte *)(iVar1 + 6) << 4);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(int *)(param_1 + 0x10) = iVar1 + 0x10;
    uVar2 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(byte *)(iVar1 + 6) << 4);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    uVar2 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(byte *)(iVar1 + 6) << 4);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    if (*(char *)(iVar1 + 6) != '\0') {
      iVar4 = 0;
      iVar3 = 0;
      do {
        FUN_00494bc0(auStack_28);
        if (cStack_10 == '\0') {
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 8 + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc + iVar4) = 0x3f800000;
          FUN_0048d8e0(&stack0xffffffcc,*(int *)(param_1 + 0x2c) + iVar4);
        }
        else if (cStack_10 == '\x01') {
          FUN_0048d8e0(&stack0xffffffcc,*(int *)(param_1 + 0x28) + iVar4);
          FUN_0048d8e0(&stack0xffffffcc,*(int *)(param_1 + 0x2c) + iVar4);
        }
        else {
          FUN_0048d8e0(&stack0xffffffcc,*(int *)(param_1 + 0x28) + iVar4);
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4 + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8 + iVar4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc + iVar4) = 0x3f800000;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 6));
    }
  }
  return;
}

