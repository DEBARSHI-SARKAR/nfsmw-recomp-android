/* speed.exe 0064bc80 FUN_0064bc80; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0064bc80(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = param_1[1];
  iVar2 = 0;
  if (3 < iVar1) {
    pfVar3 = (float *)(*param_1 + 0x10);
    do {
      if (param_2 < pfVar3[-4]) goto LAB_0064bd02;
      if (param_2 < pfVar3[-2]) {
        iVar2 = iVar2 + 1;
        goto LAB_0064bd02;
      }
      if (param_2 < *pfVar3) {
        iVar2 = iVar2 + 2;
        goto LAB_0064bd02;
      }
      if (param_2 < pfVar3[2]) {
        iVar2 = iVar2 + 3;
        goto LAB_0064bd02;
      }
      iVar2 = iVar2 + 4;
      pfVar3 = pfVar3 + 8;
    } while (iVar2 < iVar1 + -3);
  }
  if (iVar2 < iVar1) {
    pfVar3 = (float *)(*param_1 + iVar2 * 8);
    do {
      if (param_2 < *pfVar3) break;
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 2;
    } while (iVar2 < iVar1);
  }
LAB_0064bd02:
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

