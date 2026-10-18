/* speed.exe 00669d70 FUN_00669d70; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 00768c00 FUN_00768c00
 * calls 00645a40 FUN_00645a40
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00669d70(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBP;
  uint uVar4;
  
  FUN_006e8de0();
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x74))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x28))(param_2), iVar2 != 0)) {
    iVar2 = FUN_007c4b80();
    uVar4 = 0;
    if (iVar2 != -1) {
      do {
        puVar3 = (undefined4 *)FUN_00768c00(&param_2,uVar4);
        FUN_00645a40(*puVar3,unaff_EBP,param_1 + 200,2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < iVar2 + 1U);
    }
  }
  return;
}

