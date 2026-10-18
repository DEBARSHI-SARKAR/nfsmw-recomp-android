/* speed.exe 0060b3b0 FUN_0060b3b0; analysis pseudocode, not buildable source.
 */

int FUN_0060b3b0(void)

{
  float *pfVar1;
  int in_EAX;
  float *pfVar2;
  int iVar3;
  float *unaff_ESI;
  int *piVar4;
  
  iVar3 = 1 << (*(byte *)(*(int *)(in_EAX + 0x44) + 7) & 0x1f);
  if (iVar3 != 0) {
    piVar4 = (int *)(*(int *)(*(int *)(in_EAX + 0x44) + 0x10) + iVar3 * 0x14);
    pfVar2 = (float *)(piVar4 + 3);
    do {
      pfVar1 = pfVar2 + -6;
      pfVar2 = pfVar2 + -5;
      iVar3 = iVar3 + -1;
      if (*unaff_ESI == *pfVar1) {
        switch(*unaff_ESI) {
        case 0.0:
          break;
        default:
          if (unaff_ESI[1] != *pfVar2) goto LAB_0060b40e;
          break;
        case 4.2039e-45:
          if (unaff_ESI[1] != *pfVar2) goto LAB_0060b40e;
        }
        if (piVar4[-5] == 4) {
          return piVar4[-4] + 0x10;
        }
      }
LAB_0060b40e:
      piVar4 = piVar4 + -5;
    } while (iVar3 != 0);
  }
  return 0;
}

