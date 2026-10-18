/* speed.exe 0060b480 FUN_0060b480; analysis pseudocode, not buildable source.
 * calls 006064f0 FUN_006064f0
 * calls 00607360 FUN_00607360
 * calls 006068d0 FUN_006068d0
 */

char * FUN_0060b480(uint param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  
  bVar1 = *(byte *)(unaff_EBX + 2);
  while ((bVar1 & 1) == 0) {
    iVar4 = *(int *)(*(int *)(*unaff_EBX + -4) + 0xc);
    if ((unaff_EBX[2] & 1U) == 0) {
      if ((unaff_EBX[2] & 2U) != 0) {
        unaff_EBX[3] = *(int *)unaff_EBX[4];
      }
      iVar5 = (unaff_EBX[3] - *(int *)(*(int *)(*(int *)(*unaff_EBX + -4) + 0xc) + 0xc) >> 2) + -1;
    }
    else {
      iVar5 = -1;
    }
    iVar2 = FUN_00607360(iVar4,param_1 + 1,iVar5);
    *param_2 = iVar2;
    if (iVar2 != 0) {
      return "local";
    }
    uVar3 = FUN_006064f0(iVar4,iVar5,param_1);
    switch(uVar3 & 0x3f) {
    case 0:
      param_1 = uVar3 >> 0xf & 0x1ff;
      if (uVar3 >> 0x18 <= param_1) {
        return (char *)0x0;
      }
      bVar1 = *(byte *)(unaff_EBX + 2);
      break;
    default:
      goto switchD_0060b4f5_caseD_1;
    case 5:
      *param_2 = *(int *)(*(int *)(iVar4 + 8) + 4 + (uVar3 >> 6 & 0x3ffff) * 8) + 0x10;
      return "global";
    case 6:
      iVar4 = FUN_006068d0();
      *param_2 = iVar4;
      return "field";
    case 0xb:
      iVar4 = FUN_006068d0();
      *param_2 = iVar4;
      return "method";
    }
  }
switchD_0060b4f5_caseD_1:
  return (char *)0x0;
}

