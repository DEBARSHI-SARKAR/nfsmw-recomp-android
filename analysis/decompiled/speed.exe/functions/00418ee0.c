/* speed.exe 00418ee0 FUN_00418ee0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 __fastcall FUN_00418ee0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x48) + 8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x48) + 8))();
    if (*(int *)(iVar1 + 0x1c) != 0) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004037e0);
      if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00418f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*piVar2 + 0x14))();
        return uVar3;
      }
    }
  }
  return 0;
}

