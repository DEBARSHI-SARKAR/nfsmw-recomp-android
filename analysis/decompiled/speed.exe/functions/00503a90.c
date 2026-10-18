/* speed.exe 00503a90 FUN_00503a90; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00503a90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x1c) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
        puVar1 = (undefined4 *)*puVar1) {
      iVar2 = iVar2 + (uint)*(ushort *)(puVar1 + 7);
    }
  }
  return iVar2;
}

