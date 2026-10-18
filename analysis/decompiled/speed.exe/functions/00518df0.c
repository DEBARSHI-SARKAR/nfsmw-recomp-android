/* speed.exe 00518df0 FUN_00518df0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005b7780 FUN_005b7780
 * calls 005af1c0 FUN_005af1c0
 */

void __fastcall FUN_00518df0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    uVar3 = FUN_005af1c0("SAVE_DONE");
    FUN_00516be0(uVar3,"Autosave_Overlay.fng",0xfffffffc,0xff);
    piVar2 = DAT_0091cadc;
    uVar3 = FUN_005af1c0("SHOW_INCOMING");
    if (*piVar2 != -0xd8) {
      for (iVar1 = *(int *)(*piVar2 + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        FUN_005b7780(uVar3,0,iVar1,0xfffffffc,0);
      }
    }
  }
  return;
}

