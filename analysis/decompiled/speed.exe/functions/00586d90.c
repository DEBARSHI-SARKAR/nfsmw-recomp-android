/* speed.exe 00586d90 FUN_00586d90; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00586d90(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) != param_1 + 0x10) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    if (iVar1 != 0) {
      return iVar1 + 8;
    }
    return 0xc;
  }
  return 0;
}

