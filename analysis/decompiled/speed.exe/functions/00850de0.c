/* speed.exe 00850de0 FUN_00850de0; analysis pseudocode, not buildable source.
 * calls 00850d90 FUN_00850d90
 * calls 0084fda0 FUN_0084fda0
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 */

void FUN_00850de0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00850d90();
  if (*(int *)(param_1 + 0x94) == 4) {
    FUN_0084fda0();
  }
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = DAT_009c3cfc;
  if (iVar1 != 0) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x7c)) {
      if (*(int *)(iVar2 + 0x80) == iVar1) goto LAB_00850e39;
    }
    FUN_0084af40(iVar1);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_00850e39:
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xac));
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xd4));
  thunk_FUN_004655f0(param_1);
  return;
}

