/* speed.exe 0048f6d0 FUN_0048f6d0; analysis pseudocode, not buildable source.
 */

void FUN_0048f6d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 8);
  if (-1 < (int)(uVar1 - 1)) {
    puVar2 = (undefined4 *)(param_1 + 0xc + (uVar1 - 1) * 4);
    do {
      (**(code **)(*DAT_009117f4 + 0x30))(*puVar2);
      puVar2 = puVar2 + -1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

