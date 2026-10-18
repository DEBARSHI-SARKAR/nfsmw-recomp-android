/* speed.exe 00708a50 FUN_00708a50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00708a50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar2, iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + -4 + iVar2 * 4);
    iVar2 = iVar2 + -1;
    if (iVar1 != 0) {
      FUN_005d0370(iVar1,0x10,&PTR_LAB_004c5452_1_00890f10);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),*(int *)(param_1 + 8) << 2,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

