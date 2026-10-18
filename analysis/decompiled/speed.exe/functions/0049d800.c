/* speed.exe 0049d800 FUN_0049d800; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0049d800(int param_1,float param_2,float param_3,int *param_4,float *param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  param_1 = param_1 + 8;
  if (param_2 < *param_5) {
    iVar4 = *param_4;
    if (3 < iVar4 + 1) {
      pfVar5 = (float *)(iVar4 * 0x10 + -0xc + param_1);
      do {
        if (pfVar5[4] < param_2 != (pfVar5[4] == param_2)) goto LAB_0049d8b2;
        if (*pfVar5 < param_2 != (*pfVar5 == param_2)) {
          iVar4 = iVar4 + -1;
          goto LAB_0049d8b2;
        }
        if (pfVar5[-4] < param_2 != (pfVar5[-4] == param_2)) {
          iVar4 = iVar4 + -2;
          goto LAB_0049d8b2;
        }
        if (pfVar5[-8] < param_2 != (pfVar5[-8] == param_2)) {
          iVar4 = iVar4 + -3;
          goto LAB_0049d8b2;
        }
        iVar4 = iVar4 + -4;
        pfVar5 = pfVar5 + -0x10;
      } while (2 < iVar4);
    }
    if (-1 < iVar4) {
      pfVar5 = (float *)(iVar4 * 0x10 + 4 + param_1);
      do {
        if (*pfVar5 < param_2 != (*pfVar5 == param_2)) break;
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + -4;
      } while (-1 < iVar4);
    }
LAB_0049d8b2:
    *param_4 = iVar4 + 1;
  }
  iVar4 = *param_4;
  if (3 < iVar1 - iVar4) {
    pfVar5 = (float *)(iVar4 * 0x10 + 0x14 + param_1);
    do {
      if (param_2 < pfVar5[-4]) goto LAB_0049d943;
      if (param_2 < *pfVar5) {
        iVar4 = iVar4 + 1;
        goto LAB_0049d943;
      }
      if (param_2 < pfVar5[4]) {
        iVar4 = iVar4 + 2;
        goto LAB_0049d943;
      }
      if (param_2 < pfVar5[8]) {
        iVar4 = iVar4 + 3;
        goto LAB_0049d943;
      }
      iVar4 = iVar4 + 4;
      pfVar5 = pfVar5 + 0x10;
    } while (iVar4 < iVar1 + -3);
  }
  if (iVar4 < iVar1) {
    pfVar5 = (float *)(iVar4 * 0x10 + 4 + param_1);
    do {
      if (param_2 < *pfVar5) break;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < iVar1);
  }
LAB_0049d943:
  *param_4 = iVar4;
  if (param_2 == param_3) {
    if (iVar1 <= iVar4) {
      *param_4 = iVar1 + -1;
    }
    iVar4 = *param_4;
    if (3 < iVar4 + 1) {
      pfVar5 = (float *)(iVar4 * 0x10 + -0xc + param_1);
      do {
        if (pfVar5[4] < param_3) goto LAB_0049d9fb;
        if (*pfVar5 < param_3) {
          *param_4 = iVar4;
          goto LAB_0049da4a;
        }
        if (pfVar5[-4] < param_3) {
          *param_4 = iVar4 + -1;
          goto LAB_0049da4a;
        }
        if (pfVar5[-8] < param_3) {
          iVar4 = iVar4 + -3;
          goto LAB_0049d9fb;
        }
        iVar4 = iVar4 + -4;
        pfVar5 = pfVar5 + -0x10;
      } while (2 < iVar4);
    }
    if (iVar4 < 0) {
LAB_0049d9fb:
      *param_4 = iVar4 + 1;
    }
    else {
      pfVar5 = (float *)(iVar4 * 0x10 + 4 + param_1);
      iVar3 = iVar4;
      do {
        iVar4 = iVar3;
        if (*pfVar5 < param_3) goto LAB_0049d9fb;
        pfVar5 = pfVar5 + -4;
        iVar3 = iVar4 + -1;
      } while (-1 < iVar4 + -1);
      *param_4 = iVar4;
    }
  }
  else if (param_3 < param_2) {
    if (iVar4 < iVar1) {
      piVar6 = (int *)(iVar4 * 0x10 + param_1);
      iVar4 = iVar1 - iVar4;
      do {
        puVar2 = *(undefined4 **)(param_6 + *piVar6 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(param_3,piVar6,param_7);
        }
        piVar6 = piVar6 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *param_4 = 0;
  }
LAB_0049da4a:
  iVar4 = *param_4;
  if (iVar4 < iVar1) {
    piVar6 = (int *)(iVar4 * 0x10 + param_1);
    do {
      if ((float)piVar6[1] < param_3 == ((float)piVar6[1] == param_3)) break;
      puVar2 = *(undefined4 **)(param_6 + *piVar6 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(param_3,piVar6,param_7);
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar4 < iVar1);
  }
  *param_4 = iVar4;
  if (iVar4 < iVar1) {
    *param_5 = param_3;
    return;
  }
  *param_4 = iVar1 + -1;
  *param_5 = param_3;
  return;
}

