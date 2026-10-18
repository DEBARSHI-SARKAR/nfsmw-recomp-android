/* speed.exe 00591330 FUN_00591330; analysis pseudocode, not buildable source.
 * calls 00581790 FUN_00581790
 * calls 00503400 FUN_00503400
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00460d20 FUN_00460d20
 */

undefined4 FUN_00591330(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  uVar1 = FUN_00581790();
  iVar2 = FUN_00460d20(uVar1,&DAT_00890978);
  if (iVar2 != 0) {
    FUN_00515e20(local_80,0x80,"CARSELECT_MANUFACTURER_%s",uVar1);
    uVar1 = FUN_005af1c0(local_80);
    iVar2 = FUN_00503400(uVar1,0,0);
    if (iVar2 != 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_005af1c0("GENERIC_LOGO_128");
  return uVar1;
}

