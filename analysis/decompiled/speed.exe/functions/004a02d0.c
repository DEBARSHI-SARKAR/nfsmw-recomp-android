/* speed.exe 004a02d0 FUN_004a02d0; analysis pseudocode, not buildable source.
 * calls 00493ff0 FUN_00493ff0
 * calls 004a05a0 FUN_004a05a0
 */

void __thiscall FUN_004a02d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int aiStack_a4 [21];
  undefined1 local_50 [76];
  
  iVar3 = 0;
  for (; -1 < param_2; param_2 = *(int *)(param_2 * 0x70 + 0x1c + param_1)) {
    aiStack_a4[iVar3 + 1] = param_2;
    iVar3 = iVar3 + 1;
  }
  iVar1 = aiStack_a4[iVar3] * 0x30;
  puVar2 = (undefined4 *)(iVar1 + param_3);
  FUN_00493ff0(*puVar2,puVar2[1],puVar2[2],puVar2[4],puVar2[5],puVar2[6],puVar2[7],puVar2[8],
               *(undefined4 *)(iVar1 + 0x24 + param_3),*(undefined4 *)(iVar1 + 0x28 + param_3));
  for (iVar3 = iVar3 + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
    iVar1 = aiStack_a4[iVar3 + 1] * 0x30;
    puVar2 = (undefined4 *)(iVar1 + param_3);
    FUN_00493ff0(*puVar2,puVar2[1],puVar2[2],puVar2[4],puVar2[5],puVar2[6],puVar2[7],puVar2[8],
                 *(undefined4 *)(iVar1 + 0x24 + param_3),*(undefined4 *)(iVar1 + 0x28 + param_3));
    (*(code *)PTR_FUN_008ee51c)(param_4,param_4,local_50);
  }
  return;
}

