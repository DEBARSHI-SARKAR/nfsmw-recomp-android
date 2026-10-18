/* speed.exe 00432b40 FUN_00432b40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00432b40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 5) << 5,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

