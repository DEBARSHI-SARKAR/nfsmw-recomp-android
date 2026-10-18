/* speed.exe 00667ff0 FUN_00667ff0; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 */

void __thiscall FUN_00667ff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  local_10 = *(undefined4 *)(iVar1 + 0x14);
  local_c = *(undefined4 *)(iVar1 + 0x18);
  local_8 = *(undefined4 *)(iVar1 + 0x1c);
  local_4 = *(undefined4 *)(iVar1 + 0x20);
  FUN_005ca910(&local_10,param_2);
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  return;
}

