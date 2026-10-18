/* speed.exe 00585680 FUN_00585680; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00460dd0 FUN_00460dd0
 */

int __fastcall FUN_00585680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) goto LAB_00585694;
  iVar3 = *(int *)(param_1 + 4) + -4;
  while( true ) {
    iVar1 = param_1;
    if (param_1 == -4) {
      iVar1 = 0;
    }
    if (iVar3 == iVar1) break;
    if ((*(int *)(iVar3 + 0x20) != 0) &&
       (iVar1 = FUN_00460dd0(*(undefined4 *)(*(int *)(iVar3 + 0x20) + 0xc),"EA_TRAX.fng"),
       iVar1 != 0)) {
      iVar1 = FUN_00460bf0(*(undefined4 *)(*(int *)(iVar3 + 0x20) + 0xc));
      iVar2 = iVar2 + iVar1;
    }
    if (*(int *)(iVar3 + 4) == 0) {
LAB_00585694:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
  }
  return iVar2;
}

