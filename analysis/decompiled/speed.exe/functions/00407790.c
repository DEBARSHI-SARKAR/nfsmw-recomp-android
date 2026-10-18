/* speed.exe 00407790 FUN_00407790; analysis pseudocode, not buildable source.
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00407790(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_006e9c90(*(int *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}

