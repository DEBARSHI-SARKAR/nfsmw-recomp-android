/* speed.exe 00571eb0 FUN_00571eb0; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00571e00 FUN_00571e00
 */

void FUN_00571eb0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_005af1c0(param_1);
  iVar2 = FUN_00571e00();
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = param_2;
    return;
  }
  iVar2 = 0;
  piVar3 = &DAT_0091cfc0;
  do {
    if (*piVar3 == 0) {
      if (&DAT_0091cfc0 + iVar2 * 3 != (undefined4 *)0x0) {
        uVar4 = FUN_005af1c0(param_1);
        (&DAT_0091cfc0)[iVar2 * 3] = uVar4;
        iVar1 = DAT_0091cf90;
        *(undefined1 *)(iVar2 * 0xc + 0x91cfc4) = param_2;
        (&DAT_0091cfc8)[iVar2 * 3] = *(undefined4 *)(iVar1 + 300);
      }
      return;
    }
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)piVar3 < 0x91d218);
  return;
}

