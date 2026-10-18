/* speed.exe 004a5d90 FUN_004a5d90; analysis pseudocode, not buildable source.
 * calls 00493ff0 FUN_00493ff0
 * calls 0049a1a0 FUN_0049a1a0
 */

void __thiscall
FUN_004a5d90(int param_1,int *param_2,float param_3,int *param_4,float param_5,int param_6,
            float param_7,float param_8,float param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_68 [100];
  
  local_a8 = param_8 - param_3;
  uStack_a4 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 0xc))(param_7 - param_3);
  (**(code **)(*param_4 + 0xc))(param_7 - param_5,param_8 - param_5,*(undefined4 *)(param_1 + 0x14))
  ;
  iVar1 = param_6 * 0x30;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar1);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar1);
  FUN_00493ff0(*puVar2,puVar2[1],puVar2[2],puVar2[4],puVar2[5],puVar2[6],puVar2[7],puVar2[8],
               *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24 + iVar1),puVar2[10]);
  FUN_00493ff0(*puVar3,puVar3[1],puVar3[2],puVar3[4],puVar3[5],puVar3[6],puVar3[7],puVar3[8],
               puVar3[9],puVar3[10]);
  FUN_0049a1a0(auStack_68,&local_a8,param_1 + 0x30);
  *(float *)(param_1 + 0x78) = param_8 + param_9;
  *(int *)(param_1 + 0x28) = param_6;
  *(int **)(param_1 + 0x1c) = param_4;
  *(float *)(param_1 + 0x20) = param_3;
  *(int **)(param_1 + 0x18) = param_2;
  *(float *)(param_1 + 0x24) = param_5;
  *(float *)(param_1 + 0x70) = param_8;
  *(float *)(param_1 + 0x74) = param_9;
  return;
}

