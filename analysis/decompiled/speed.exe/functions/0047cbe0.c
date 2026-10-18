/* speed.exe 0047cbe0 FUN_0047cbe0; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004797f0 FUN_004797f0
 * calls 004519d0 FUN_004519d0
 */

void __fastcall FUN_0047cbe0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = "CDActionDrive";
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined1 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  uVar2 = FUN_004522f0("CDActionDrive");
  uVar1 = FUN_004519d0("CDActionDrive",pcVar3,uVar2);
  FUN_004797f0(uVar2,uVar1,"CDActionDrive");
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0047cc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    return;
  }
  return;
}

