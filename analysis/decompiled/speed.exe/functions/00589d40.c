/* speed.exe 00589d40 FUN_00589d40; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_00589d40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    FUN_00589870(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),iVar1,iVar1);
  }
  return;
}

