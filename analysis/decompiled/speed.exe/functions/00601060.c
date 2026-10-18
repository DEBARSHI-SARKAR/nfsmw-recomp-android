/* speed.exe 00601060 FUN_00601060; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005fab40 FUN_005fab40
 * calls 006269b0 FUN_006269b0
 * calls 00600a20 FUN_00600a20
 */

undefined4 FUN_00601060(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00454810(0xa7ef40ef,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  iVar2 = FUN_00600a20(*puVar1);
  if (iVar2 != 0) {
    uVar3 = FUN_005fab40();
    return uVar3;
  }
  return 0;
}

