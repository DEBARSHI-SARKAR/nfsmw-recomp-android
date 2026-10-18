/* speed.exe 00526a20 FUN_00526a20; analysis pseudocode, not buildable source.
 * calls 00524a10 FUN_00524a10
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

undefined1 __fastcall FUN_00526a20(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    iVar2 = FUN_005af1c0("LEAVE");
    uVar3 = FUN_005af1c0("AUTOSAVE_ICON_GROUP");
    iVar4 = FUN_00516af0("Autosave_Overlay.fng");
    if ((((iVar4 != 0) && (iVar4 = FUN_005b8550(uVar3), iVar4 != 0)) &&
        (*(int *)(iVar4 + 0x54) != 0)) && (*(int *)(*(int *)(iVar4 + 0x54) + 0x30) == iVar2)) {
      return 1;
    }
    uVar3 = FUN_005af1c0("APPEAR");
    uVar3 = FUN_005af1c0("AUTOSAVE_ICON_GROUP",uVar3);
    cVar1 = FUN_00524a10("Autosave_Overlay.fng",uVar3);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

