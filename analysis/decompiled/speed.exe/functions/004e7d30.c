/* speed.exe 004e7d30 FUN_004e7d30; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 004d2160 FUN_004d2160
 * calls 006ff2d0 FUN_006ff2d0
 * calls 006ff7b0 FUN_006ff7b0
 * calls 004b9080 FUN_004b9080
 * calls 004d2110 FUN_004d2110
 * calls 004b21b0 FUN_004b21b0
 * calls 004d2070 FUN_004d2070
 */

uint __thiscall FUN_004e7d30(int param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_5 == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_006ff2d0(0);
  DAT_00914343 = param_4;
  if ((param_4 == '\x01') || (cVar1 = FUN_004b21b0(), cVar1 != '\0')) {
    FUN_006ff2d0(0);
    FUN_006ff7b0();
  }
  switch(param_3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
  }
  iVar6 = 0;
  piVar2 = &DAT_00913f30;
  do {
    if (*piVar2 == param_2) {
      if (iVar6 != -1) {
        iVar4 = FUN_004aeaa0(0x40010010);
        if (iVar6 < 0x12) {
          if ((iVar6 == 0x18) || (iVar6 == 0x1a)) {
            param_4 = '\x01';
          }
          DAT_00914344 = param_2;
          DAT_008efd80 = 1;
          if (param_4 == '\x01') {
            FUN_004b9080(0,8,"NIS 321");
            FUN_004d2070();
            goto LAB_004e7f4c;
          }
          FUN_004d2070();
LAB_004e7f9f:
          piVar2 = (int *)FUN_006ff2d0(0);
          uVar3 = (**(code **)(*piVar2 + 0x28))(0,&LAB_004e09b0,0);
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0x7fff;
LAB_004e8009:
          if (iVar4 == 0) goto LAB_004e801f;
          uVar5 = *(uint *)(iVar4 + 0x114) | 0x200;
        }
        else {
          if (0x23 < iVar6) {
            DAT_008efd80 = 0;
            FUN_004d2160();
            piVar2 = (int *)FUN_006ff2d0(0);
            uVar3 = (**(code **)(*piVar2 + 0x28))(2,&LAB_004e09b0,0);
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0x7fff;
            goto LAB_004e8009;
          }
          DAT_00914344 = param_2;
          DAT_008efd80 = 1;
          if (param_4 != '\x01') {
            FUN_004d2110();
            goto LAB_004e7f9f;
          }
          FUN_004b9080(0,8,"NIS 321");
          FUN_004d2110();
LAB_004e7f4c:
          piVar2 = (int *)FUN_006ff2d0(0);
          uVar3 = (**(code **)(*piVar2 + 0x28))(0,&LAB_004e09b0,0);
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
          if (iVar4 == 0) goto LAB_004e801f;
          uVar5 = *(uint *)(iVar4 + 0x114) & 0xfffffdff;
        }
        *(uint *)(iVar4 + 0x114) = uVar5;
LAB_004e801f:
        if ((char)uVar3 == '\0') {
          DAT_00914340 = 1;
        }
        return uVar3;
      }
      break;
    }
    piVar2 = piVar2 + 3;
    iVar6 = iVar6 + 1;
  } while ((int)piVar2 < 0x914260);
  DAT_00914340 = 1;
  FUN_004b9080(0,6,"Clear NIS");
  FUN_004b9080(0,7,"Clear NIS");
  FUN_004b9080(0,8,"Clear NIS");
  FUN_004b9080(0,9,"Clear NIS");
  uVar3 = FUN_004b9080(0,10,"Clear NIS");
  return uVar3 & 0xffffff00;
}

