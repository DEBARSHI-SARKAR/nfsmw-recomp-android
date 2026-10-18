/* speed.exe 004a94f0 FUN_004a94f0; analysis pseudocode, not buildable source.
 * calls 00494380 FUN_00494380
 * calls 00492790 FUN_00492790
 * calls 00492ab0 FUN_00492ab0
 */

void __thiscall FUN_004a94f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_90 [16];
  undefined1 local_50 [76];
  
  FUN_00492ab0(param_2,local_90);
  FUN_00492790(local_90,param_3);
  FUN_00494380(local_50,param_1,local_90);
  puVar2 = local_90;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

