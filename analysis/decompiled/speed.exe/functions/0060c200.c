/* speed.exe 0060c200 FUN_0060c200; analysis pseudocode, not buildable source.
 * calls 00612820 FUN_00612820
 * calls 00613880 FUN_00613880
 * calls 00607d40 FUN_00607d40
 * calls 006127a0 FUN_006127a0
 * calls 00607570 FUN_00607570
 * calls 0060b630 FUN_0060b630
 */

void __thiscall FUN_0060c200(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  int *local_4;
  
  piVar3 = in_EAX;
  if (*in_EAX == 3) {
LAB_0060c24e:
    if (*param_2 != 3) {
      if ((*param_2 != 4) || (iVar2 = FUN_00607570(param_2[1] + 0x10,&local_14), iVar2 == 0))
      goto LAB_0060c35f;
      local_8 = 3;
      local_4 = local_14;
      param_2 = &local_8;
    }
    switch(param_3) {
    case 5:
      *param_1 = 3;
      param_1[1] = (float)param_2[1] + (float)piVar3[1];
      return;
    case 6:
      *param_1 = 3;
      param_1[1] = (float)piVar3[1] - (float)param_2[1];
      return;
    case 7:
      *param_1 = 3;
      param_1[1] = (float)param_2[1] * (float)piVar3[1];
      return;
    case 8:
      *param_1 = 3;
      param_1[1] = (float)piVar3[1] / (float)param_2[1];
      return;
    case 9:
      local_14 = (int *)FUN_00607d40(*(undefined4 *)(unaff_EDI + 0x44),
                                     *(undefined4 *)(*(int *)(unaff_EDI + 0x10) + 0x78));
      iVar2 = *(int *)(unaff_EDI + 0x1c);
      if (*local_14 != 6) {
        FUN_00613880();
      }
      FUN_006127a0();
      puVar1 = *(undefined4 **)(unaff_EDI + 8);
      param_1 = (undefined4 *)((int)param_1 + (*(int *)(unaff_EDI + 0x1c) - iVar2));
      *param_1 = *puVar1;
      param_1[1] = puVar1[1];
      return;
    }
  }
  else {
    if ((*in_EAX == 4) && (iVar2 = FUN_00607570(in_EAX[1] + 0x10,&local_14), iVar2 != 0)) {
      local_10 = 3;
      local_c = local_14;
      piVar3 = &local_10;
      goto LAB_0060c24e;
    }
LAB_0060c35f:
    iVar2 = FUN_00612820();
    if (iVar2 == 0) {
      if ((*in_EAX != 3) && (*in_EAX == 4)) {
        FUN_00607570(in_EAX[1] + 0x10,&local_14);
      }
      FUN_0060b630();
    }
  }
  return;
}

