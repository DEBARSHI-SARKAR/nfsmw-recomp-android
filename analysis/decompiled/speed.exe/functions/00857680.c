/* speed.exe 00857680 FUN_00857680; analysis pseudocode, not buildable source.
 * calls 008575b0 FUN_008575b0
 */

int __fastcall FUN_00857680(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(int *)(in_EAX + 8) == 4;
  uVar3 = *(uint *)(in_EAX + 0xc);
  if (bVar4) {
    uVar3 = uVar3 - 1;
  }
  iVar2 = *(int *)(param_1 + 0xfc);
  if (iVar2 != *(int *)(param_1 + 0xf8)) {
    do {
      iVar1 = *(int *)(param_1 + 0xfc);
      if (uVar3 < *(uint *)(*(int *)(param_1 + 0x104) + 8 + iVar1)) break;
      if (*(int *)(param_1 + 0x100) == iVar1) {
        *(int *)(param_1 + 0x100) =
             (*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0x100)) % *(int *)(param_1 + 0xf4);
      }
      iVar1 = *(int *)(param_1 + 0xf0) + iVar1;
      iVar2 = iVar1 / *(int *)(param_1 + 0xf4);
      iVar1 = iVar1 % *(int *)(param_1 + 0xf4);
      *(int *)(param_1 + 0xfc) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0xf8));
  }
  if (!bVar4) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xfc);
  iVar2 = FUN_008575b0();
  return iVar2;
}

