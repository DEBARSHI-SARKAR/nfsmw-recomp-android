/* speed.exe 0072a990 FUN_0072a990; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0072a990(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_4;
  
  local_50[0] = param_4;
  local_40 = param_3;
  local_50[2] = param_6;
  local_50[1] = param_5;
  iVar1 = param_2 * 0x50 + param_1;
  local_4 = 0;
  puVar3 = local_50;
  puVar4 = (undefined4 *)(iVar1 + 0x40);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = param_1 + param_2 * 0xc;
  *(undefined4 *)(param_1 + 0x1d0 + param_2 * 4) = 1;
  *(undefined4 *)(iVar2 + 0xc) = 1;
  if (*(code **)(iVar1 + 0x8c) == (code *)0x0) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    (**(code **)(iVar1 + 0x8c))(param_2,param_1);
  }
  if (*(float *)(iVar1 + 0x50) < _DAT_00890dc4) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  return;
}

