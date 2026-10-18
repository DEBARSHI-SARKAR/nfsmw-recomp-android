/* speed.exe 00457fb5 FUN_00457fb5; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 004542c0 FUN_004542c0
 * calls 00626c50 FUN_00626c50
 * calls 004569d0 FUN_004569d0
 * calls 00456390 FUN_00456390
 * calls 00454030 FUN_00454030
 * calls 004532c0 FUN_004532c0
 * calls 00453b00 FUN_00453b00
 * calls 00454db0 FUN_00454db0
 * calls 00457db0 FUN_00457db0
 * calls 00456220 FUN_00456220
 * calls 00456f40 FUN_00456f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __thiscall
FUN_00457fb5(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,void *param_9)

{
  undefined4 in_EAX;
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *unaff_EBX;
  uint *unaff_EBP;
  byte *pbVar7;
  bool in_CF;
  bool in_ZF;
  uint *in_stack_00000030;
  uint *in_stack_00000034;
  
  uVar1 = unaff_EBP[4];
  *param_1 = (uint)unaff_EBX;
  param_1[1] = (uint)unaff_EBX;
  param_1[2] = (uint)unaff_EBX;
  *(short *)(param_1 + 3) = (short)unaff_EBX;
  *(short *)((int)param_1 + 0xe) = (short)uVar1;
  param_3 = param_1;
  if (!in_CF && !in_ZF) {
    FUN_004569d0(in_EAX);
  }
  param_1[4] = (uint)unaff_EBX;
  iVar3 = *(int *)(DAT_0090dcbc + 4);
  if ((uint *)unaff_EBP[1] == unaff_EBX) {
LAB_0045801f:
    uVar6 = 0;
  }
  else {
    uVar1 = FUN_00454db0(unaff_EBP[1]);
    if (*(uint *)(iVar3 + 0xc) <= uVar1) goto LAB_0045801f;
    iVar3 = *(int *)(iVar3 + 8);
    uVar6 = *(uint *)(iVar3 + 4 + uVar1 * 0xc);
    uVar1 = iVar3 + uVar1 * 0xc;
    if (uVar6 == uVar1) goto LAB_0045801f;
    uVar6 = (uVar6 == uVar1) - 1 & uVar6;
  }
  param_1[5] = uVar6;
  param_1[6] = unaff_EBP[7];
  param_1[7] = 1;
  param_1[8] = *unaff_EBP;
  param_1[9] = (uint)in_stack_00000034;
  param_1[10] = (uint)unaff_EBX;
  *in_stack_00000034 = *in_stack_00000034 + 1;
  iVar3 = *(int *)(param_1[5] + 8);
  FUN_00456220(param_1[8],param_1);
  if (0x50 < (*(uint *)(iVar3 + 0x28) & 0xfffffffe)) {
    FUN_00456390(((*(int *)(iVar3 + 0x20) * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  *(int *)(param_1[5] + 4) = *(int *)(param_1[5] + 4) + 1;
  if ((uint *)unaff_EBP[2] == unaff_EBX) goto LAB_004580c6;
  iVar3 = *(int *)(param_1[5] + 8);
  uVar1 = FUN_00454cc0(unaff_EBP[2]);
  if (uVar1 < *(uint *)(iVar3 + 0x20)) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    uVar6 = *(uint *)(iVar3 + 4 + uVar1 * 0xc);
    uVar1 = iVar3 + uVar1 * 0xc;
    if (uVar6 == uVar1) goto LAB_004580be;
    uVar6 = (uVar6 == uVar1) - 1 & uVar6;
  }
  else {
LAB_004580be:
    uVar6 = 0;
  }
  param_1[4] = uVar6;
  *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
LAB_004580c6:
  in_stack_00000030 = unaff_EBX;
  if (unaff_EBX < unaff_EBP[5]) {
    pbVar7 = (byte *)((int)unaff_EBP + unaff_EBP[6] * 4 + 0x2a);
    do {
      iVar3 = DAT_0090dcbc;
      if ((*pbVar7 & 0x20) != 0) {
        param_4 = unaff_EBP[*(ushort *)(pbVar7 + -2) + 8];
        param_5 = 0;
        param_6 = 0;
        param_7 = 0;
        param_8 = FUN_00626c50(param_4);
        iVar3 = *(int *)(iVar3 + 4);
        FUN_00456f40(&stack0x00000034,&param_4);
        if (in_stack_00000034 == (uint *)*(int **)(iVar3 + 0x30)) {
          piVar2 = (int *)**(undefined4 **)(iVar3 + 0x20);
        }
        else {
          piVar2 = (int *)(in_stack_00000034 + 3);
        }
        if ((uint)piVar2[2] < 5) {
          _DAT_0090dcb0 = _DAT_0090dcb0 + piVar2[2];
        }
      }
      unaff_EBX = (uint *)0x0;
      FUN_00457db0(*(undefined4 *)(pbVar7 + -10),unaff_EBP[*(ushort *)(pbVar7 + -2) + 8],
                   *(undefined4 *)(pbVar7 + -6),0,*pbVar7,1,param_1[6]);
      iVar3 = FUN_00453b00(*(undefined4 *)(pbVar7 + -10),7);
      DAT_0090dca8 = DAT_0090dca8 + iVar3;
      DAT_0090dcac = DAT_0090dcac + 1;
      in_stack_00000030 = (uint *)((int)in_stack_00000030 + 1);
      pbVar7 = pbVar7 + 0xc;
    } while (in_stack_00000030 < (uint *)unaff_EBP[5]);
  }
  puVar4 = (uint *)FUN_004532c0(param_1,0xffffffff);
  if (puVar4 == unaff_EBX) {
    puVar4 = (uint *)FUN_004532c0(*(int *)(param_1[5] + 8) + 0xc,0xffffffff);
    in_stack_00000030 = (uint *)CONCAT31(in_stack_00000030._1_3_,1);
  }
  else {
    in_stack_00000030 = (uint *)((uint)in_stack_00000030 & 0xffffff00);
  }
  if (puVar4 != unaff_EBX) {
    do {
      in_stack_00000034 = unaff_EBX;
      puVar5 = (uint *)FUN_00454030(puVar4,&stack0x00000034);
      if (((param_1 == in_stack_00000034) && (puVar5 != unaff_EBX)) &&
         ((*(byte *)((int)puVar5 + 0xb) & 2) != 0)) {
        uVar1 = puVar5[1];
        if ((*(byte *)((int)puVar5 + 0xb) & 0x10) != 0) {
          uVar1 = uVar1 + param_1[6];
        }
        *(ushort *)(uVar1 + 6) =
             *(ushort *)(uVar1 + 6) & 0x8000 |
             *(ushort *)
              (*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                       (-(uint)((uint)(ushort)puVar5[2] <
                               *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                       (uint)(ushort)puVar5[2]) * 4) + 0xc);
      }
      puVar4 = (uint *)FUN_004542c0(puVar4,&stack0x00000030);
      unaff_EBX = (uint *)0x0;
    } while (puVar4 != (uint *)0x0);
  }
  ExceptionList = param_9;
  return param_1;
}

