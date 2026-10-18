/* speed.exe 006ed070 FUN_006ed070; analysis pseudocode, not buildable source.
 * calls 006ecd90 FUN_006ecd90
 */

void __thiscall FUN_006ed070(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    FUN_006ecd90(uVar1,param_2);
  }
  return;
}

