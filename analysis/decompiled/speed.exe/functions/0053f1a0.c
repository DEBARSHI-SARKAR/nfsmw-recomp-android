/* speed.exe 0053f1a0 FUN_0053f1a0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0078b220 FUN_0078b220
 * calls 0056bc10 FUN_0056bc10
 * calls 0056e560 FUN_0056e560
 * calls 004647c0 FUN_004647c0
 * calls 00837200 FUN_00837200
 * calls 005252d0 FUN_005252d0
 * calls 0078c730 FUN_0078c730
 * calls 005fb710 FUN_005fb710
 * calls 0078cf80 FUN_0078cf80
 */

void __thiscall FUN_0053f1a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_stack_0000001c;
  int in_stack_00000030;
  int in_stack_00000038;
  undefined4 in_stack_0000005c;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 local_1e0 [8];
  undefined4 local_1c0;
  int local_1bc;
  char local_1b8;
  int local_174;
  undefined1 local_170 [128];
  undefined1 local_f0 [128];
  undefined1 local_70 [112];
  
  iVar1 = FUN_00837200(in_stack_0000005c);
  if (in_stack_00000030 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(0x221e85b4);
    FUN_005252d0(uVar3,0xa0ed7306,uVar2);
    return;
  }
  puVar4 = local_1e0;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar3 = FUN_0078b220();
  FUN_00460c70(local_1e0,uVar3);
  puVar8 = &stack0x00000004;
  puVar7 = local_70;
  FUN_0078c730(puVar7,puVar8);
  puVar4 = (undefined4 *)FUN_0078cf80(puVar7,puVar8);
  puVar6 = local_1e0;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (((in_stack_0000001c != 0) && (local_1b8 != '\0')) && (local_174 == 0)) {
    if (local_1bc == 0) {
      uVar3 = FUN_0056bc10(0x56a46b33);
      FUN_004647c0(local_170,uVar3);
      goto LAB_0053f2ed;
    }
    iVar5 = FUN_005fb710(local_1c0);
    if (iVar5 != 0) {
      uVar3 = FUN_0056e560("TRACKNAME_",iVar5);
      uVar3 = FUN_0056bc10(uVar3);
      uVar3 = FUN_0056bc10(0x36915b3e,uVar3);
      FUN_004647c0(local_170,uVar3);
      goto LAB_0053f2ed;
    }
  }
  FUN_004647c0(local_170,&DAT_0089dfa0);
LAB_0053f2ed:
  if (in_stack_00000038 == 0) {
    if (iVar1 == 0) {
      uVar3 = FUN_0056bc10(0x2d32a79);
    }
    else {
      uVar3 = FUN_0056bc10(0x8d3ee1af,iVar1);
    }
  }
  else {
    uVar3 = FUN_0056bc10(0x679fd4e9,iVar1);
  }
  FUN_004647c0(local_f0,uVar3);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xa0ed7306,"%s %s",local_f0,local_170);
  return;
}

