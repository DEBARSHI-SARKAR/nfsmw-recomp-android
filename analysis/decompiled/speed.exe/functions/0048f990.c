/* speed.exe 0048f990 FUN_0048f990; analysis pseudocode, not buildable source.
 * calls 0048f830 FUN_0048f830
 */

void __thiscall
FUN_0048f990(int param_1,float param_2,float param_3,int *param_4,float *param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < *param_5) {
    iVar2 = *param_4;
    if (3 < iVar2 + 1) {
      pfVar3 = (float *)(param_1 + 0x10 + iVar2 * 8);
      do {
        if (pfVar3[2] < param_2 != (pfVar3[2] == param_2)) goto LAB_0048fa32;
        if (*pfVar3 < param_2 != (*pfVar3 == param_2)) {
          iVar2 = iVar2 + -1;
          goto LAB_0048fa32;
        }
        if (pfVar3[-2] < param_2 != (pfVar3[-2] == param_2)) {
          iVar2 = iVar2 + -2;
          goto LAB_0048fa32;
        }
        if (pfVar3[-4] < param_2 != (pfVar3[-4] == param_2)) {
          iVar2 = iVar2 + -3;
          goto LAB_0048fa32;
        }
        iVar2 = iVar2 + -4;
        pfVar3 = pfVar3 + -8;
      } while (2 < iVar2);
    }
    if (-1 < iVar2) {
      pfVar3 = (float *)(param_1 + 0x18 + iVar2 * 8);
      do {
        if (*pfVar3 < param_2 != (*pfVar3 == param_2)) break;
        iVar2 = iVar2 + -1;
        pfVar3 = pfVar3 + -2;
      } while (-1 < iVar2);
    }
LAB_0048fa32:
    *param_4 = iVar2 + 1;
  }
  iVar2 = *param_4;
  if (3 < iVar1 - iVar2) {
    pfVar3 = (float *)(param_1 + 0x20 + iVar2 * 8);
    do {
      if (param_2 < pfVar3[-2]) goto LAB_0048fab2;
      if (param_2 < *pfVar3) {
        iVar2 = iVar2 + 1;
        goto LAB_0048fab2;
      }
      if (param_2 < pfVar3[2]) {
        iVar2 = iVar2 + 2;
        goto LAB_0048fab2;
      }
      if (param_2 < pfVar3[4]) {
        iVar2 = iVar2 + 3;
        goto LAB_0048fab2;
      }
      iVar2 = iVar2 + 4;
      pfVar3 = pfVar3 + 8;
    } while (iVar2 < iVar1 + -3);
  }
  if (iVar2 < iVar1) {
    pfVar3 = (float *)(param_1 + 0x18 + iVar2 * 8);
    do {
      if (param_2 < *pfVar3) break;
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 2;
    } while (iVar2 < iVar1);
  }
LAB_0048fab2:
  fVar5 = (float10)param_3;
  *param_4 = iVar2;
  if ((float10)param_2 == fVar5) {
    if (iVar1 <= iVar2) {
      *param_4 = iVar1 + -1;
    }
    iVar2 = *param_4;
    if (3 < iVar2 + 1) {
      pfVar3 = (float *)(param_1 + 0x10 + iVar2 * 8);
      do {
        if ((float10)pfVar3[2] < fVar5) goto LAB_0048fb47;
        if ((float10)*pfVar3 < fVar5) {
          *param_4 = iVar2;
          goto LAB_0048fb8a;
        }
        if ((float10)pfVar3[-2] < fVar5) {
          *param_4 = iVar2 + -1;
          goto LAB_0048fb8a;
        }
        if ((float10)pfVar3[-4] < fVar5) {
          iVar2 = iVar2 + -3;
          goto LAB_0048fb47;
        }
        iVar2 = iVar2 + -4;
        pfVar3 = pfVar3 + -8;
      } while (2 < iVar2);
    }
    if (iVar2 < 0) {
LAB_0048fb47:
      *param_4 = iVar2 + 1;
    }
    else {
      pfVar3 = (float *)(param_1 + 0x18 + iVar2 * 8);
      iVar4 = iVar2;
      do {
        iVar2 = iVar4;
        if ((float10)*pfVar3 < fVar5) goto LAB_0048fb47;
        pfVar3 = pfVar3 + -2;
        iVar4 = iVar2 + -1;
      } while (-1 < iVar2 + -1);
      *param_4 = iVar2;
    }
  }
  else if (fVar5 < (float10)param_2) {
    if (iVar2 < iVar1) {
      iVar4 = param_1 + 0x14 + iVar2 * 8;
      iVar2 = iVar1 - iVar2;
      do {
        fVar5 = (float10)FUN_0048f830(param_3,param_6,param_7,iVar4);
        iVar4 = iVar4 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *param_4 = 0;
  }
LAB_0048fb8a:
  iVar2 = *param_4;
  if (iVar2 < iVar1) {
    iVar4 = param_1 + 0x14 + iVar2 * 8;
    do {
      if (fVar5 < (float10)*(float *)(iVar4 + 4)) break;
      fVar5 = (float10)FUN_0048f830(param_3,param_6,param_7,iVar4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar2 < iVar1);
  }
  *param_4 = iVar2;
  if (iVar2 < iVar1) {
    *param_5 = (float)fVar5;
    return;
  }
  *param_4 = iVar1 + -1;
  *param_5 = (float)fVar5;
  return;
}

