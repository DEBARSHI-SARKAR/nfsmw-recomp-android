/* speed.exe 00586830 FUN_00586830; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_00586830(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != param_1 + 0xc) {
    if (iVar2 == 0) goto LAB_00586848;
    iVar2 = iVar2 + -4;
    while( true ) {
      if (param_1 == -0xc) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 8;
      }
      if (iVar2 == iVar1) break;
      FUN_00514c70(*(undefined4 *)(iVar2 + 0xc));
      if (*(int *)(iVar2 + 4) == 0) {
LAB_00586848:
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
    }
    FUN_00514c70(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

