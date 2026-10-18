/* speed.exe 0083104c FUN_0083104c; analysis pseudocode, not buildable source.
 * calls 00830f27 FUN_00830f27
 * calls 0081962e FUN_0081962e
 */

undefined4 FUN_0083104c(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x14) = param_1 + 0x28;
  iVar4 = param_1 + 0x28 + (uint)*(ushort *)(param_1 + 10) * 0xc;
  *(int *)(param_1 + 0x18) = iVar4;
  iVar3 = 0;
  *(uint *)(param_1 + 0x1c) = iVar4 + (uint)*(ushort *)(param_1 + 0xc) * 0xc;
  if (*(ushort *)(param_1 + 10) != 0) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x14) + 4 + iVar4);
      *piVar1 = *piVar1 + param_1;
      uVar2 = FUN_00830f27();
      *(undefined2 *)(*(int *)(param_1 + 0x14) + 10 + iVar4) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    iVar3 = 0;
    do {
      piVar1 = (int *)(iVar3 + 4 + *(int *)(param_1 + 0x18));
      *piVar1 = *piVar1 + param_1;
      uVar2 = FUN_00830f27();
      *(undefined2 *)(iVar3 + 10 + *(int *)(param_1 + 0x18)) = uVar2;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xc));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    iVar3 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8 + iVar3);
      *piVar1 = *piVar1 + param_1;
      uVar2 = FUN_00830f27();
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xe + iVar3) = uVar2;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  FUN_0081962e(param_1 + 0x20);
  return 0;
}

