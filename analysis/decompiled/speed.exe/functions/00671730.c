/* speed.exe 00671730 FUN_00671730; analysis pseudocode, not buildable source.
 * calls 00671530 FUN_00671530
 */

void FUN_00671730(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 auStack_48 [2];
  undefined1 local_40 [44];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x40))(local_40);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x20))();
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_c = puVar1[2];
  auStack_48[0] = 0x3f800000;
  uStack_8 = 0x3f800000;
  iVar2 = (**(code **)(*param_1 + 0x48))(&stack0xffffffac);
  fVar9 = *(float *)(iVar2 + 4) + *(float *)(iVar2 + 4);
  uVar3 = (**(code **)(*param_1 + 0x54))(fVar9);
  uVar8 = 0;
  uVar7 = 0;
  puVar6 = &DAT_008a2fb4;
  puVar1 = auStack_48;
  uVar4 = (**(code **)(*param_1 + 0x24))(puVar1,&DAT_008a2fb4,0,unaff_retaddr,0,uVar3);
  uVar5 = (**(code **)(*param_1 + 0x28))(uVar4);
  FUN_00671530(uVar5,uVar4,puVar1,puVar6,uVar7,unaff_retaddr,uVar8,uVar3,fVar9);
  return;
}

