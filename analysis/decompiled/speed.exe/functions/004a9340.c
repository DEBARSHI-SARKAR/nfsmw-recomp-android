/* speed.exe 004a9340 FUN_004a9340; analysis pseudocode, not buildable source.
 * calls 00494380 FUN_00494380
 * calls 00494210 FUN_00494210
 */

void __thiscall
FUN_004a9340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_90 [64];
  undefined4 local_50 [19];
  
  FUN_00494210(param_2,param_3,param_4,param_5);
  FUN_00494380(local_90,param_1,local_50);
  puVar2 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

