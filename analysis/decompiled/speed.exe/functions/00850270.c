/* speed.exe 00850270 FUN_00850270; analysis pseudocode, not buildable source.
 * calls 0084fef0 FUN_0084fef0
 */

void __fastcall FUN_00850270(int param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(in_EAX + 8) == 4;
  uVar2 = *(uint *)(in_EAX + 0xc);
  if (bVar3) {
    uVar2 = uVar2 - 1;
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_1 + 200)) {
    do {
      iVar1 = *(int *)(param_1 + 0xcc);
      if (uVar2 < *(uint *)(*(int *)(param_1 + 0xd4) + 8 + iVar1)) break;
      if (*(int *)(param_1 + 0xd0) == iVar1) {
        *(int *)(param_1 + 0xd0) =
             (*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xd0)) % *(int *)(param_1 + 0xc4);
      }
      iVar1 = (*(int *)(param_1 + 0xc0) + iVar1) % *(int *)(param_1 + 0xc4);
      *(int *)(param_1 + 0xcc) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 200));
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xcc);
    FUN_0084fef0();
  }
  return;
}

