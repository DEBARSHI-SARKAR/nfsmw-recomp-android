/* speed.exe 007398d0 FUN_007398d0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 FUN_007398d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = iVar3 + DAT_009b09d8;
    iVar2 = FUN_00460bf0(iVar1 + 0x10);
    if (iVar2 == param_1) {
      return *(undefined4 *)(iVar1 + 0x90);
    }
    iVar3 = iVar3 + 0xd0;
  } while (iVar3 < 0x4440);
  return 0x54;
}

