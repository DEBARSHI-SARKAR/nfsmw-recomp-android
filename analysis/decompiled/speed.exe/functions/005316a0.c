/* speed.exe 005316a0 FUN_005316a0; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8550 FUN_005b8550
 * calls 00514c70 FUN_00514c70
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_005316a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  piVar1 = &DAT_008f3abc;
  do {
    if (*piVar1 == *(int *)(*(int *)(param_1 + 0x15c) + 0x2c)) {
      puVar3 = &DAT_008f3ab8 + iVar2 * 0x14;
      goto LAB_005316c8;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x8f3c10);
  puVar3 = &DAT_008f3ab8;
LAB_005316c8:
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9331fd4f,*(undefined4 *)(puVar3 + 0xc));
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(puVar3 + 0xc) == 0) {
    if (iVar2 != 0) {
      iVar2 = FUN_00516af0(iVar2);
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x9331fd4f);
        if (iVar2 != 0) goto LAB_0053174b;
      }
    }
    iVar2 = 0;
LAB_0053174b:
    FUN_00514c70(iVar2);
    return;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_00516af0(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0x9331fd4f);
      if (iVar2 != 0) goto LAB_0053170e;
    }
  }
  iVar2 = 0;
LAB_0053170e:
  FUN_00514cc0(iVar2);
  return;
}

