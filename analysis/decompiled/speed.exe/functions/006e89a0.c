/* speed.exe 006e89a0 FUN_006e89a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e89a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_009885d0 == 0) {
    DAT_009885d0 = param_1;
    return;
  }
  iVar2 = DAT_009885d0;
  do {
    if (*(uint *)(param_1 + 0xc) < *(uint *)(iVar2 + 0xc)) {
      *(int *)(param_1 + 0x14) = iVar2;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      if (iVar2 == DAT_009885d0) {
        DAT_009885d0 = param_1;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        *(int *)(*(int *)(param_1 + 0x10) + 0x14) = param_1;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        return;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 0x10) = param_1;
      return;
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(iVar2 + 0x14) = param_1;
      return;
    }
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}

