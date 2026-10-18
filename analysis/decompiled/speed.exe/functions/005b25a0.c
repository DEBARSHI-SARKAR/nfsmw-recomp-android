/* speed.exe 005b25a0 FUN_005b25a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b25a0(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  iVar2 = *(int *)(param_1 + 0xc);
  if (uVar1 < 0x614e) {
    if (uVar1 == 0x614d) {
      *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_2 + 2);
      return;
    }
    if (uVar1 == 0x314d) {
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(param_2 + 2);
      return;
    }
    if (uVar1 == 0x324d) {
      *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(param_2 + 2);
      return;
    }
    if (uVar1 == 0x334d) {
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(param_2 + 2);
      return;
    }
  }
  else if (uVar1 == 0x624d) {
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_2 + 2);
  }
  else if (uVar1 == 0x634d) {
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_2 + 2);
    return;
  }
  return;
}

