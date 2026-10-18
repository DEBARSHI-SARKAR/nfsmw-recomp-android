/* speed.exe 004a2b90 FUN_004a2b90; analysis pseudocode, not buildable source.
 * calls 00494380 FUN_00494380
 * calls 00492800 FUN_00492800
 */

void __thiscall FUN_004a2b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_90 [64];
  undefined4 local_50 [19];
  
  FUN_00492800(param_2,param_3);
  FUN_00494380(param_1,local_90,local_50);
  puVar2 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

