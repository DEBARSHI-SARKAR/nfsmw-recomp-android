/* speed.exe 00575cc0 FUN_00575cc0; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 00515c00 FUN_00515c00
 * calls 00514d10 FUN_00514d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00575cc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xd8));
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"%2.1f",
               (double)(((*(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xe0)) /
                        (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xe0))) * _DAT_00890bf8))
  ;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x163c76,1);
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = 0x163c76;
  }
  else {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x7ab5521a,1);
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = 0x1744b3;
  }
  FUN_00514d10(uVar1,uVar2,1);
  (**(code **)(*(int *)(param_1 + 0x60) + 0x24))();
                    /* WARNING: Could not recover jumptable at 0x00575d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x9c) + 0x24))();
  return;
}

