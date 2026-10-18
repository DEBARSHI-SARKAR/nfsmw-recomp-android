/* speed.exe 0049ff90 FUN_0049ff90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049ff90(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if (0 < iVar3) {
        puVar1 = (undefined4 *)(param_1 + 0x18);
        do {
          *param_2 = puVar1[-2];
          param_2[1] = puVar1[-1];
          param_2[2] = *puVar1;
          param_2[3] = 0x3f800000;
          param_2[4] = puVar1[2];
          param_2[5] = puVar1[3];
          param_2[6] = puVar1[4];
          param_2[7] = puVar1[5];
          param_2[8] = puVar1[6];
          param_2[9] = puVar1[7];
          param_2[10] = puVar1[8];
          param_2[0xb] = 0x3f800000;
          param_2 = param_2 + 0xc;
          puVar1 = puVar1 + 0x1c;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar2 = 0;
      if (0 < iVar3) {
        puVar1 = (undefined4 *)(param_1 + 0x18);
        do {
          *param_2 = puVar1[-2];
          param_2[1] = puVar1[-1];
          param_2[2] = *puVar1;
          param_2[3] = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
          param_2[4] = puVar1[2];
          param_2[5] = puVar1[3];
          param_2[6] = puVar1[4];
          param_2[7] = puVar1[5];
          param_2[8] = puVar1[6];
          param_2[9] = puVar1[7];
          param_2[10] = puVar1[8];
          param_2[0xb] = 0x3f800000;
          param_2 = param_2 + 0xc;
          iVar2 = iVar2 + 1;
          puVar1 = puVar1 + 0x1c;
        } while (iVar2 < iVar3);
        return;
      }
    }
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      if (0 < iVar3) {
        puVar1 = (undefined4 *)(param_1 + 0x18);
        do {
          if ((*(uint *)(param_3 + (iVar2 >> 5) * 4) & 1 << ((byte)iVar2 & 0x1f)) != 0) {
            *param_2 = puVar1[-2];
            param_2[1] = puVar1[-1];
            param_2[2] = *puVar1;
            param_2[3] = 0x3f800000;
            param_2[4] = puVar1[2];
            param_2[5] = puVar1[3];
            param_2[6] = puVar1[4];
            param_2[7] = puVar1[5];
            param_2[8] = puVar1[6];
            param_2[9] = puVar1[7];
            param_2[10] = puVar1[8];
            param_2[0xb] = 0x3f800000;
          }
          param_2 = param_2 + 0xc;
          iVar2 = iVar2 + 1;
          puVar1 = puVar1 + 0x1c;
        } while (iVar2 < iVar3);
        return;
      }
    }
    else if (0 < iVar3) {
      puVar1 = (undefined4 *)(param_1 + 0x18);
      do {
        if ((*(uint *)(param_3 + (iVar2 >> 5) * 4) & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          *param_2 = puVar1[-2];
          param_2[1] = puVar1[-1];
          param_2[2] = *puVar1;
          param_2[3] = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
          param_2[4] = puVar1[2];
          param_2[5] = puVar1[3];
          param_2[6] = puVar1[4];
          param_2[7] = puVar1[5];
          param_2[8] = puVar1[6];
          param_2[9] = puVar1[7];
          param_2[10] = puVar1[8];
          param_2[0xb] = 0x3f800000;
        }
        param_2 = param_2 + 0xc;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x1c;
      } while (iVar2 < iVar3);
      return;
    }
  }
  return;
}

