/* speed.exe 0061c180 FUN_0061c180; analysis pseudocode, not buildable source.
 * calls 00618970 FUN_00618970
 * calls 00613eb0 FUN_00613eb0
 * calls 0060bf90 FUN_0060bf90
 * calls 00615230 FUN_00615230
 */

void FUN_0061c180(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00618970(param_1,"GRuntimeInstance");
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,"__index",7);
  puVar3[1] = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(undefined1 **)(iVar2 + 0xc) = &LAB_0061bb60;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)(iVar2 + -0x10);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,"__newindex",10);
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(undefined1 **)(iVar2 + 0xc) = &LAB_0061bd60;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)(iVar2 + -0x10);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,&DAT_008a4430,4);
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(code **)(iVar2 + 0xc) = FUN_0061be80;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x18;
  FUN_00618970(param_1,"LuaAttribArrayInfo");
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,"__index",7);
  puVar3[1] = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(undefined1 **)(iVar2 + 0xc) = &LAB_0061bf00;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)(iVar2 + -0x10);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,"__newindex",10);
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(undefined1 **)(iVar2 + 0xc) = &LAB_00604150;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)(iVar2 + -0x10);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *puVar3 = 4;
  uVar1 = FUN_00613eb0(param_1,&DAT_008a4430,4);
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  iVar2 = FUN_00615230(param_1,0);
  *(undefined1 **)(iVar2 + 0xc) = &LAB_0061c0f0;
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar2;
  *puVar3 = 6;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 8;
  FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x18;
  return;
}

