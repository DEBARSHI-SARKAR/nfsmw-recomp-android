/* speed.exe 004a84b0 FUN_004a84b0; analysis pseudocode, not buildable source.
 * calls 00494380 FUN_00494380
 */

void __thiscall FUN_004a84b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [19];
  
  puVar3 = (undefined4 *)(param_2 * 0x70 + 0x40 + param_1);
  FUN_00494380(puVar3,param_3,local_50);
  puVar2 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

