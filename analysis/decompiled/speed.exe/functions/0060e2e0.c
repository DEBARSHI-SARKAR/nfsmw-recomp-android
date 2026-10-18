/* speed.exe 0060e2e0 FUN_0060e2e0; analysis pseudocode, not buildable source.
 * calls 00613970 FUN_00613970
 */

void FUN_0060e2e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 5;
  iVar2 = FUN_00613970(param_1,0,0,0x20,5);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
  *(undefined1 *)(iVar2 + 6) = 0xff;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 7) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  uVar3 = FUN_00613970(param_1,0,0,0,6);
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  if (*(int *)(iVar2 + 0x1c) < 0) {
    iVar5 = *(int *)(iVar2 + 0x1c) << 3;
    do {
      iVar4 = iVar5 + 8;
      *(undefined4 *)(iVar5 + *(int *)(iVar2 + 0xc)) = 0;
      iVar5 = iVar4;
    } while (iVar4 < 0);
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  iVar5 = *(int *)(param_1 + 0x10) + 0x40;
  *(int *)(iVar2 + 0x10) = iVar5;
  *(undefined1 *)(iVar2 + 7) = 0;
  *(int *)(iVar2 + 0x14) = iVar5;
  puVar1[1] = iVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

