/* speed.exe 00831109 FUN_00831109; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 */

undefined4 FUN_00831109(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 10) != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 8 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0xc));
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  FUN_00819648(param_1 + 0x20);
  return 0;
}

