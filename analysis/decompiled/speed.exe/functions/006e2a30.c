/* speed.exe 006e2a30 FUN_006e2a30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e2a30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,((*(int *)(param_1 + 0xc) - iVar1) / 0xc) * 0xc,&PTR_LAB_004c5452_1_00890f10)
    ;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

