/* speed.exe 00479de0 FUN_00479de0; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 00516e10 FUN_00516e10
 * calls 0064b680 FUN_0064b680
 * calls 00525b20 FUN_00525b20
 * calls 004519d0 FUN_004519d0
 * calls 00479900 FUN_00479900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00479de0(int param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0064b680();
  if ((cVar1 == '\0') && (_DAT_00890968 < *(float *)(param_1 + 0x2b8))) {
    *(float *)(param_1 + 0x2b8) = *(float *)(param_1 + 0x2b8) - param_2;
  }
  FUN_00516e10();
  cVar1 = FUN_00525b20(1);
  if ((cVar1 == '\0') && (_DAT_00890968 < *(float *)(param_1 + 0x2b4))) {
    *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 0x2b4) - param_2;
  }
  FUN_00479900();
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_004522f0("CDActionDrive");
    FUN_004519d0("CDActionDrive");
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    if ((*piVar2 == (int)uVar3) && (piVar2[1] == (int)((ulonglong)uVar3 >> 0x20))) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))(*(undefined4 *)(param_1 + 0x2c0));
    }
  }
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00479ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  return;
}

