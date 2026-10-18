/* speed.exe 0057c660 FUN_0057c660; analysis pseudocode, not buildable source.
 * calls 00648160 FUN_00648160
 * calls 00735620 FUN_00735620
 * calls 00631420 FUN_00631420
 * calls 005fbe70 FUN_005fbe70
 * calls 00648140 FUN_00648140
 * calls 00633dc0 FUN_00633dc0
 * calls 00625ad0 FUN_00625ad0
 * calls 00624360 FUN_00624360
 * calls 00623a90 FUN_00623a90
 * calls 00633d80 FUN_00633d80
 * calls 00579100 FUN_00579100
 * calls 00633d90 FUN_00633d90
 * calls 00627400 FUN_00627400
 * calls 0040e020 FUN_0040e020
 * calls 00642140 FUN_00642140
 */

void __thiscall FUN_0057c660(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piStack_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00871dda;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_2 == (int *)0x0) ||
     (ExceptionList = &pvStack_c, iVar4 = (**(code **)(*param_2 + 0x14))(), iVar4 == 0)) {
    FUN_00648140(0xffffffff);
    FUN_00648160(0,"FEngHud");
    ExceptionList = pvStack_c;
    return;
  }
  iVar4 = (**(code **)(*param_2 + 0x3c))();
  if (iVar4 == 0) {
LAB_0057c6ba:
    bVar1 = false;
  }
  else {
    piVar5 = (int *)(**(code **)(*param_2 + 0x3c))();
    cVar3 = (**(code **)(*piVar5 + 0xc))();
    if (cVar3 == '\0') goto LAB_0057c6ba;
    bVar1 = true;
  }
  uVar6 = (**(code **)(*param_2 + 0x34))();
  FUN_00648140(uVar6);
  iVar4 = (**(code **)(*param_2 + 0x14))();
  uVar7 = (uint)(*(char *)(iVar4 + 7) != '\0');
  iVar4 = *(int *)(iVar4 + 8);
  if (bVar1) {
    iVar4 = 0;
    uVar7 = 1;
  }
  FUN_00648160(*(undefined4 *)(&DAT_0089f6d4 + (uVar7 + iVar4 * 2) * 4),"FEngHud");
  cVar3 = FUN_00633d80();
  if ((((cVar3 == '\0') && (*(char *)(DAT_0091cb20 + 0x1e) == '\0')) &&
      (*(char *)(DAT_0091cb20 + 0x1f) == '\0')) &&
     (FUN_00633dc0(&puStack_10), *(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0)) {
    if (puStack_10 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puStack_10;
    }
    switch(uVar6) {
    case 0x2d:
      piStack_14 = (int *)FUN_00627400(0x14);
      uStack_4 = 0;
      if (piStack_14 != (int *)0x0) {
        uVar9 = 0;
        uVar8 = 0;
        uVar6 = (**(code **)(*param_2 + 0x1c))(0,0);
        FUN_00623a90(uVar6,uVar8,uVar9);
      }
      break;
    case 0x2e:
      cVar3 = FUN_00735620();
      if (((cVar3 != '\0') || ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) ||
         ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0)) goto switchD_0057c768_default;
      (**(code **)(*param_2 + 4))();
      cVar3 = FUN_0040e020(&piStack_14);
      if (((((cVar3 != '\0') &&
            (piVar5 = (int *)(**(code **)(*piStack_14 + 0xa0))(), piVar5 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*piVar5 + 0x114))(), iVar4 == 2)) &&
          ((cVar3 = FUN_00579100(&piStack_14), piVar2 = piStack_14, cVar3 != '\0' &&
           (cVar3 = (**(code **)(*piStack_14 + 8))(), cVar3 != '\0')))) &&
         (cVar3 = (**(code **)(*piVar2 + 0xc))("safehouse"), cVar3 != '\0')) {
        (**(code **)(*piVar5 + 0x130))();
        goto switchD_0057c768_default;
      }
      if ((*(int *)(DAT_0091e000 + 0x1960) == 1) && (cVar3 = FUN_005fbe70(), cVar3 == '\0')) {
        iVar4 = FUN_00627400(0x10);
        uStack_4 = 1;
        if (iVar4 != 0) {
          FUN_00642140(0,1);
        }
      }
      else {
        if (*(char *)(param_1 + 700) == '\0') {
          cVar3 = FUN_00579100(&piStack_14);
          piVar5 = piStack_14;
          if ((cVar3 != '\0') && (cVar3 = (**(code **)(*piStack_14 + 8))(), cVar3 != '\0')) {
            (**(code **)(*piVar5 + 0x20))(*(undefined4 *)(param_1 + 0x298));
            (**(code **)(*piVar5 + 0x24))(*(undefined4 *)(param_1 + 0x298));
          }
          goto switchD_0057c768_default;
        }
        iVar4 = FUN_00627400(0x10);
        uStack_4 = 2;
        if (iVar4 != 0) {
          FUN_00642140(1,1);
        }
      }
      break;
    case 0x2f:
      if (*(int *)(DAT_0091e000 + 0x1960) != 0) goto switchD_0057c768_default;
      iVar4 = FUN_00627400(8);
      uStack_4 = 3;
      if (iVar4 != 0) {
        FUN_00625ad0();
      }
      break;
    case 0x30:
      if ((*(int *)(DAT_0091e000 + 0x1960) != 0) ||
         (0xf < *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0))) goto switchD_0057c768_default;
      iVar4 = FUN_00627400(0xc);
      uStack_4 = 4;
      if (iVar4 != 0) {
        FUN_00624360(0);
      }
      break;
    case 0x31:
      if (*(int *)(DAT_0091e000 + 0x1960) != 0) goto switchD_0057c768_default;
      iVar4 = FUN_00627400(0xc);
      uStack_4 = 5;
      if (iVar4 != 0) {
        FUN_00631420(0xffffffff);
      }
      break;
    default:
      goto switchD_0057c768_default;
    }
    uStack_4 = 0xffffffff;
  }
switchD_0057c768_default:
  cVar3 = FUN_00633d80();
  while (cVar3 == '\0') {
    FUN_00633d90();
    cVar3 = FUN_00633d80();
  }
  ExceptionList = pvStack_c;
  return;
}

