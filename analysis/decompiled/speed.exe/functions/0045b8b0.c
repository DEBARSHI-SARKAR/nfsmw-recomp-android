/* speed.exe 0045b8b0 thunk_FUN_0045b8c0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_0045b8c0(int param_1)

{
  int iStack_4;
  
  iStack_4 = param_1;
  FUN_0045b900(&iStack_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x24,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

