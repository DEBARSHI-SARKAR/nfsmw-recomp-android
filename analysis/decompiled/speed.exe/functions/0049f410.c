/* speed.exe 0049f410 FUN_0049f410; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0049f410(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (param_4 == param_5) {
    if (3 < (param_3 - param_2) + 1) {
      piVar4 = (int *)(param_2 * 0x70 + 0xac + param_1);
      iVar7 = param_2 + 2;
      puVar3 = (undefined4 *)(param_2 * 0x30 + 0x4c + param_5);
      do {
        iVar5 = piVar4[-0x1c];
        if (param_2 < iVar5) {
          fVar1 = *(float *)(iVar5 * 0x30 + 0x10 + param_5);
          iVar5 = iVar5 * 0x30 + param_5;
          *(float *)(iVar5 + 0x10) = -(float)puVar3[-0xf];
          puVar3[-0xf] = -fVar1;
          fVar1 = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 0x14) = -(float)puVar3[-0xe];
          puVar3[-0xe] = -fVar1;
          uVar2 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = puVar3[-0xd];
          puVar3[-0xd] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1c) = puVar3[-0xc];
          puVar3[-0xc] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar5 + 0x20) = puVar3[-0xb];
          puVar3[-0xb] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          *(undefined4 *)(iVar5 + 0x24) = puVar3[-10];
          puVar3[-10] = uVar2;
          fVar1 = *(float *)(iVar5 + 0x28);
          *(float *)(iVar5 + 0x28) = -(float)puVar3[-9];
LAB_0049f4e2:
          puVar3[-9] = -fVar1;
        }
        else if (iVar5 == param_2) {
          puVar3[-0xf] = -(float)puVar3[-0xf];
          puVar3[-0xe] = -(float)puVar3[-0xe];
          fVar1 = (float)puVar3[-9];
          goto LAB_0049f4e2;
        }
        iVar5 = *piVar4;
        if (iVar7 + -1 < iVar5) {
          fVar1 = *(float *)(iVar5 * 0x30 + 0x10 + param_5);
          iVar5 = iVar5 * 0x30 + param_5;
          *(float *)(iVar5 + 0x10) = -(float)puVar3[-3];
          puVar3[-3] = -fVar1;
          fVar1 = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 0x14) = -(float)puVar3[-2];
          puVar3[-2] = -fVar1;
          uVar2 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = puVar3[-1];
          puVar3[-1] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1c) = *puVar3;
          *puVar3 = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar5 + 0x20) = puVar3[1];
          puVar3[1] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          *(undefined4 *)(iVar5 + 0x24) = puVar3[2];
          puVar3[2] = uVar2;
          fVar1 = *(float *)(iVar5 + 0x28);
          *(float *)(iVar5 + 0x28) = -(float)puVar3[3];
LAB_0049f569:
          puVar3[3] = -fVar1;
        }
        else if (iVar5 == iVar7 + -1) {
          puVar3[-3] = -(float)puVar3[-3];
          puVar3[-2] = -(float)puVar3[-2];
          fVar1 = (float)puVar3[3];
          goto LAB_0049f569;
        }
        iVar5 = piVar4[0x1c];
        if (iVar7 < iVar5) {
          fVar1 = *(float *)(iVar5 * 0x30 + 0x10 + param_5);
          iVar5 = iVar5 * 0x30 + param_5;
          *(float *)(iVar5 + 0x10) = -(float)puVar3[9];
          puVar3[9] = -fVar1;
          fVar1 = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 0x14) = -(float)puVar3[10];
          puVar3[10] = -fVar1;
          uVar2 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = puVar3[0xb];
          puVar3[0xb] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1c) = puVar3[0xc];
          puVar3[0xc] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar5 + 0x20) = puVar3[0xd];
          puVar3[0xd] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          *(undefined4 *)(iVar5 + 0x24) = puVar3[0xe];
          puVar3[0xe] = uVar2;
          fVar1 = *(float *)(iVar5 + 0x28);
          *(float *)(iVar5 + 0x28) = -(float)puVar3[0xf];
LAB_0049f5f0:
          puVar3[0xf] = -fVar1;
        }
        else if (iVar5 == iVar7) {
          puVar3[9] = -(float)puVar3[9];
          puVar3[10] = -(float)puVar3[10];
          fVar1 = (float)puVar3[0xf];
          goto LAB_0049f5f0;
        }
        iVar5 = piVar4[0x38];
        if (iVar7 + 1 < iVar5) {
          fVar1 = *(float *)(iVar5 * 0x30 + 0x10 + param_5);
          iVar5 = iVar5 * 0x30 + param_5;
          *(float *)(iVar5 + 0x10) = -(float)puVar3[0x15];
          puVar3[0x15] = -fVar1;
          fVar1 = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 0x14) = -(float)puVar3[0x16];
          puVar3[0x16] = -fVar1;
          uVar2 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = puVar3[0x17];
          puVar3[0x17] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1c) = puVar3[0x18];
          puVar3[0x18] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar5 + 0x20) = puVar3[0x19];
          puVar3[0x19] = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          *(undefined4 *)(iVar5 + 0x24) = puVar3[0x1a];
          puVar3[0x1a] = uVar2;
          fVar1 = *(float *)(iVar5 + 0x28);
          *(float *)(iVar5 + 0x28) = -(float)puVar3[0x1b];
LAB_0049f67d:
          puVar3[0x1b] = -fVar1;
        }
        else if (iVar5 == iVar7 + 1) {
          puVar3[0x15] = -(float)puVar3[0x15];
          puVar3[0x16] = -(float)puVar3[0x16];
          fVar1 = (float)puVar3[0x1b];
          goto LAB_0049f67d;
        }
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 0x30;
        iVar7 = iVar7 + 4;
        piVar4 = piVar4 + 0x70;
      } while (param_2 <= param_3 + -3);
    }
    if (param_2 <= param_3) {
      puVar3 = (undefined4 *)(param_2 * 0x30 + 0x1c + param_5);
      piVar4 = (int *)(param_2 * 0x70 + 0x3c + param_1);
      do {
        iVar7 = *piVar4;
        if (param_2 < iVar7) {
          fVar1 = *(float *)(iVar7 * 0x30 + 0x10 + param_5);
          iVar7 = iVar7 * 0x30 + param_5;
          *(float *)(iVar7 + 0x10) = -(float)puVar3[-3];
          puVar3[-3] = -fVar1;
          fVar1 = *(float *)(iVar7 + 0x14);
          *(float *)(iVar7 + 0x14) = -(float)puVar3[-2];
          puVar3[-2] = -fVar1;
          uVar2 = *(undefined4 *)(iVar7 + 0x18);
          *(undefined4 *)(iVar7 + 0x18) = puVar3[-1];
          puVar3[-1] = uVar2;
          uVar2 = *(undefined4 *)(iVar7 + 0x1c);
          *(undefined4 *)(iVar7 + 0x1c) = *puVar3;
          *puVar3 = uVar2;
          uVar2 = *(undefined4 *)(iVar7 + 0x20);
          *(undefined4 *)(iVar7 + 0x20) = puVar3[1];
          puVar3[1] = uVar2;
          uVar2 = *(undefined4 *)(iVar7 + 0x24);
          *(undefined4 *)(iVar7 + 0x24) = puVar3[2];
          puVar3[2] = uVar2;
          fVar1 = *(float *)(iVar7 + 0x28);
          *(float *)(iVar7 + 0x28) = -(float)puVar3[3];
LAB_0049f740:
          puVar3[3] = -fVar1;
        }
        else if (iVar7 == param_2) {
          puVar3[-3] = -(float)puVar3[-3];
          puVar3[-2] = -(float)puVar3[-2];
          fVar1 = (float)puVar3[3];
          goto LAB_0049f740;
        }
        param_2 = param_2 + 1;
        piVar4 = piVar4 + 0x1c;
        puVar3 = puVar3 + 0xc;
      } while (param_2 <= param_3);
    }
  }
  else {
    if (3 < (param_3 - param_2) + 1) {
      piVar4 = (int *)(param_2 * 0x70 + 0xac + param_1);
      iVar7 = param_2 * 0x30;
      iVar5 = ((param_3 - param_2) - 3U >> 2) + 1;
      param_2 = param_2 + iVar5 * 4;
      puVar3 = (undefined4 *)(iVar7 + 0x38 + param_4);
      do {
        iVar7 = piVar4[-0x1c] * 0x30;
        *(undefined4 *)(iVar7 + param_5) = puVar3[-0xe];
        *(undefined4 *)(iVar7 + 4 + param_5) = puVar3[-0xd];
        *(undefined4 *)(iVar7 + 8 + param_5) = puVar3[-0xc];
        iVar7 = iVar7 + param_5;
        *(float *)(iVar7 + 0x10) = -(float)puVar3[-10];
        *(float *)(iVar7 + 0x14) = -(float)puVar3[-9];
        *(undefined4 *)(iVar7 + 0x18) = puVar3[-8];
        *(undefined4 *)(iVar7 + 0x1c) = puVar3[-7];
        *(undefined4 *)(iVar7 + 0x20) = puVar3[-6];
        *(undefined4 *)(iVar7 + 0x24) = puVar3[-5];
        *(float *)(iVar7 + 0x28) = -(float)puVar3[-4];
        iVar7 = *piVar4 * 0x30;
        *(undefined4 *)(iVar7 + param_5) = puVar3[-2];
        *(undefined4 *)(iVar7 + 4 + param_5) = puVar3[-1];
        iVar7 = iVar7 + param_5;
        *(undefined4 *)(iVar7 + 8) = *puVar3;
        *(float *)(iVar7 + 0x10) = -(float)puVar3[2];
        *(float *)(iVar7 + 0x14) = -(float)puVar3[3];
        *(undefined4 *)(iVar7 + 0x18) = puVar3[4];
        *(undefined4 *)(iVar7 + 0x1c) = puVar3[5];
        *(undefined4 *)(iVar7 + 0x20) = puVar3[6];
        *(undefined4 *)(iVar7 + 0x24) = puVar3[7];
        *(float *)(iVar7 + 0x28) = -(float)puVar3[8];
        puVar6 = (undefined4 *)(piVar4[0x1c] * 0x30 + param_5);
        *puVar6 = puVar3[10];
        puVar6[1] = puVar3[0xb];
        puVar6[2] = puVar3[0xc];
        puVar6[4] = -(float)puVar3[0xe];
        puVar6[5] = -(float)puVar3[0xf];
        puVar6[6] = puVar3[0x10];
        puVar6[7] = puVar3[0x11];
        puVar6[8] = puVar3[0x12];
        puVar6[9] = puVar3[0x13];
        puVar6[10] = -(float)puVar3[0x14];
        puVar6 = (undefined4 *)(piVar4[0x38] * 0x30 + param_5);
        *puVar6 = puVar3[0x16];
        puVar6[1] = puVar3[0x17];
        puVar6[2] = puVar3[0x18];
        puVar6[4] = -(float)puVar3[0x1a];
        piVar4 = piVar4 + 0x70;
        iVar5 = iVar5 + -1;
        puVar6[5] = -(float)puVar3[0x1b];
        puVar6[6] = puVar3[0x1c];
        puVar6[7] = puVar3[0x1d];
        puVar6[8] = puVar3[0x1e];
        puVar6[9] = puVar3[0x1f];
        puVar6[10] = -(float)puVar3[0x20];
        puVar3 = puVar3 + 0x30;
      } while (iVar5 != 0);
    }
    if (param_2 <= param_3) {
      piVar4 = (int *)(param_2 * 0x70 + 0x3c + param_1);
      iVar7 = (param_3 - param_2) + 1;
      puVar3 = (undefined4 *)(param_2 * 0x30 + 8 + param_4);
      do {
        puVar6 = (undefined4 *)(*piVar4 * 0x30 + param_5);
        *puVar6 = puVar3[-2];
        puVar6[1] = puVar3[-1];
        puVar6[2] = *puVar3;
        puVar6[4] = -(float)puVar3[2];
        piVar4 = piVar4 + 0x1c;
        iVar7 = iVar7 + -1;
        puVar6[5] = -(float)puVar3[3];
        puVar6[6] = puVar3[4];
        puVar6[7] = puVar3[5];
        puVar6[8] = puVar3[6];
        puVar6[9] = puVar3[7];
        puVar6[10] = -(float)puVar3[8];
        puVar3 = puVar3 + 0xc;
      } while (iVar7 != 0);
    }
  }
  if (param_6 == '\0') {
    fVar1 = *(float *)(param_5 + 0x18);
    uVar2 = *(undefined4 *)(param_5 + 0x1c);
    *(float *)(param_5 + 0x18) = -*(float *)(param_5 + 0x10);
    *(float *)(param_5 + 0x1c) = -*(float *)(param_5 + 0x14);
    *(float *)(param_5 + 0x10) = fVar1;
    *(undefined4 *)(param_5 + 0x14) = uVar2;
    *(float *)(param_5 + 0x20) = -*(float *)(param_5 + 0x20);
    *(float *)(param_5 + 0x28) = -*(float *)(param_5 + 0x28);
  }
  return;
}

