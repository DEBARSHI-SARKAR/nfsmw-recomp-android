/* speed.exe 004640f0 FUN_004640f0; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

int FUN_004640f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &DAT_0090de50;
  while( true ) {
    if (((undefined4 *)(&DAT_0090df10)[iVar2] != (undefined4 *)0x0) &&
       (iVar1 = FUN_00460dd0(*(undefined4 *)(&DAT_0090df10)[iVar2],param_1), iVar1 == 0)) {
      return iVar2;
    }
    if (((undefined4 *)*piVar3 != (undefined4 *)0x0) &&
       (iVar1 = FUN_00460dd0(*(undefined4 *)*piVar3,param_1), iVar1 == 0)) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
    if (0xf < iVar2) {
      return -1;
    }
  }
  return iVar2;
}

