/* speed.exe 004d98c0 FUN_004d98c0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00403c30 FUN_00403c30
 */

void __fastcall FUN_004d98c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x34);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x204) != 0)) {
      FUN_00403c30(iVar2 + 0x200);
      FUN_0045a430();
    }
  }
  return;
}

