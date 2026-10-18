/* speed.exe 0049e7a0 FUN_0049e7a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049e7a0(int param_1,int *param_2,int param_3,char param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar8 = param_3;
  iVar7 = *(int *)(param_1 + 8);
  if (param_5 == 0) {
    if (param_2 == (int *)param_3) {
      iVar9 = 0;
      if (3 < iVar7) {
        param_3 = 2;
        piVar10 = (int *)(param_1 + 0xac);
        puVar3 = (undefined4 *)(iVar8 + 0x4c);
        do {
          iVar4 = piVar10[-0x1c];
          if (iVar9 < iVar4) {
            fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + iVar8);
            iVar4 = iVar4 * 0x30 + iVar8;
            *(float *)(iVar4 + 0x10) = -(float)puVar3[-0xf];
            puVar3[-0xf] = -fVar1;
            fVar1 = *(float *)(iVar4 + 0x14);
            *(float *)(iVar4 + 0x14) = -(float)puVar3[-0xe];
            puVar3[-0xe] = -fVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x18);
            *(undefined4 *)(iVar4 + 0x18) = puVar3[-0xd];
            puVar3[-0xd] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)(iVar4 + 0x1c) = puVar3[-0xc];
            puVar3[-0xc] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 *)(iVar4 + 0x20) = puVar3[-0xb];
            puVar3[-0xb] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x24);
            *(undefined4 *)(iVar4 + 0x24) = puVar3[-10];
            puVar3[-10] = uVar2;
            fVar1 = *(float *)(iVar4 + 0x28);
            *(float *)(iVar4 + 0x28) = -(float)puVar3[-9];
LAB_0049ef44:
            puVar3[-9] = -fVar1;
          }
          else if (iVar4 == iVar9) {
            puVar3[-0xf] = -(float)puVar3[-0xf];
            puVar3[-0xe] = -(float)puVar3[-0xe];
            fVar1 = (float)puVar3[-9];
            goto LAB_0049ef44;
          }
          iVar4 = *piVar10;
          if (param_3 + -1 < iVar4) {
            fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + iVar8);
            iVar4 = iVar4 * 0x30 + iVar8;
            *(float *)(iVar4 + 0x10) = -(float)puVar3[-3];
            puVar3[-3] = -fVar1;
            fVar1 = *(float *)(iVar4 + 0x14);
            *(float *)(iVar4 + 0x14) = -(float)puVar3[-2];
            puVar3[-2] = -fVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x18);
            *(undefined4 *)(iVar4 + 0x18) = puVar3[-1];
            puVar3[-1] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)(iVar4 + 0x1c) = *puVar3;
            *puVar3 = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 *)(iVar4 + 0x20) = puVar3[1];
            puVar3[1] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x24);
            *(undefined4 *)(iVar4 + 0x24) = puVar3[2];
            puVar3[2] = uVar2;
            fVar1 = *(float *)(iVar4 + 0x28);
            *(float *)(iVar4 + 0x28) = -(float)puVar3[3];
LAB_0049efcd:
            puVar3[3] = -fVar1;
          }
          else if (iVar4 == param_3 + -1) {
            puVar3[-3] = -(float)puVar3[-3];
            puVar3[-2] = -(float)puVar3[-2];
            fVar1 = (float)puVar3[3];
            goto LAB_0049efcd;
          }
          iVar4 = piVar10[0x1c];
          if (param_3 < iVar4) {
            fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + iVar8);
            iVar4 = iVar4 * 0x30 + iVar8;
            *(float *)(iVar4 + 0x10) = -(float)puVar3[9];
            puVar3[9] = -fVar1;
            fVar1 = *(float *)(iVar4 + 0x14);
            *(float *)(iVar4 + 0x14) = -(float)puVar3[10];
            puVar3[10] = -fVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x18);
            *(undefined4 *)(iVar4 + 0x18) = puVar3[0xb];
            puVar3[0xb] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)(iVar4 + 0x1c) = puVar3[0xc];
            puVar3[0xc] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 *)(iVar4 + 0x20) = puVar3[0xd];
            puVar3[0xd] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x24);
            *(undefined4 *)(iVar4 + 0x24) = puVar3[0xe];
            puVar3[0xe] = uVar2;
            fVar1 = *(float *)(iVar4 + 0x28);
            *(float *)(iVar4 + 0x28) = -(float)puVar3[0xf];
LAB_0049f05c:
            puVar3[0xf] = -fVar1;
          }
          else if (iVar4 == param_3) {
            puVar3[9] = -(float)puVar3[9];
            puVar3[10] = -(float)puVar3[10];
            fVar1 = (float)puVar3[0xf];
            goto LAB_0049f05c;
          }
          iVar4 = piVar10[0x38];
          if (param_3 + 1 < iVar4) {
            fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + iVar8);
            iVar4 = iVar4 * 0x30 + iVar8;
            *(float *)(iVar4 + 0x10) = -(float)puVar3[0x15];
            puVar3[0x15] = -fVar1;
            fVar1 = *(float *)(iVar4 + 0x14);
            *(float *)(iVar4 + 0x14) = -(float)puVar3[0x16];
            puVar3[0x16] = -fVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x18);
            *(undefined4 *)(iVar4 + 0x18) = puVar3[0x17];
            puVar3[0x17] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)(iVar4 + 0x1c) = puVar3[0x18];
            puVar3[0x18] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 *)(iVar4 + 0x20) = puVar3[0x19];
            puVar3[0x19] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x24);
            *(undefined4 *)(iVar4 + 0x24) = puVar3[0x1a];
            puVar3[0x1a] = uVar2;
            fVar1 = *(float *)(iVar4 + 0x28);
            *(float *)(iVar4 + 0x28) = -(float)puVar3[0x1b];
LAB_0049f0e7:
            puVar3[0x1b] = -fVar1;
          }
          else if (iVar4 == param_3 + 1) {
            puVar3[0x15] = -(float)puVar3[0x15];
            puVar3[0x16] = -(float)puVar3[0x16];
            fVar1 = (float)puVar3[0x1b];
            goto LAB_0049f0e7;
          }
          iVar9 = iVar9 + 4;
          param_3 = param_3 + 4;
          puVar3 = puVar3 + 0x30;
          piVar10 = piVar10 + 0x70;
        } while (iVar9 < iVar7 + -3);
      }
      if (iVar9 < iVar7) {
        puVar3 = (undefined4 *)(iVar9 * 0x30 + 0x1c + iVar8);
        piVar10 = (int *)(iVar9 * 0x70 + 0x3c + param_1);
        do {
          iVar4 = *piVar10;
          if (iVar9 < iVar4) {
            fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + iVar8);
            iVar4 = iVar4 * 0x30 + iVar8;
            *(float *)(iVar4 + 0x10) = -(float)puVar3[-3];
            puVar3[-3] = -fVar1;
            fVar1 = *(float *)(iVar4 + 0x14);
            *(float *)(iVar4 + 0x14) = -(float)puVar3[-2];
            puVar3[-2] = -fVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x18);
            *(undefined4 *)(iVar4 + 0x18) = puVar3[-1];
            puVar3[-1] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)(iVar4 + 0x1c) = *puVar3;
            *puVar3 = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 *)(iVar4 + 0x20) = puVar3[1];
            puVar3[1] = uVar2;
            uVar2 = *(undefined4 *)(iVar4 + 0x24);
            *(undefined4 *)(iVar4 + 0x24) = puVar3[2];
            puVar3[2] = uVar2;
            fVar1 = *(float *)(iVar4 + 0x28);
            *(float *)(iVar4 + 0x28) = -(float)puVar3[3];
LAB_0049f1af:
            puVar3[3] = -fVar1;
          }
          else if (iVar4 == iVar9) {
            puVar3[-3] = -(float)puVar3[-3];
            puVar3[-2] = -(float)puVar3[-2];
            fVar1 = (float)puVar3[3];
            goto LAB_0049f1af;
          }
          iVar9 = iVar9 + 1;
          piVar10 = piVar10 + 0x1c;
          puVar3 = puVar3 + 0xc;
        } while (iVar9 < iVar7);
      }
    }
    else {
      iVar9 = 0;
      if (3 < iVar7) {
        piVar10 = (int *)(param_1 + 0xac);
        iVar4 = (iVar7 - 4U >> 2) + 1;
        iVar9 = iVar4 * 4;
        puVar3 = (undefined4 *)((int)param_2 + 0x38);
        do {
          iVar6 = piVar10[-0x1c] * 0x30;
          *(undefined4 *)(iVar6 + param_3) = puVar3[-0xe];
          *(undefined4 *)(iVar6 + 4 + param_3) = puVar3[-0xd];
          *(undefined4 *)(iVar6 + 8 + param_3) = puVar3[-0xc];
          iVar6 = iVar6 + param_3;
          *(float *)(iVar6 + 0x10) = -(float)puVar3[-10];
          *(float *)(iVar6 + 0x14) = -(float)puVar3[-9];
          *(undefined4 *)(iVar6 + 0x18) = puVar3[-8];
          *(undefined4 *)(iVar6 + 0x1c) = puVar3[-7];
          *(undefined4 *)(iVar6 + 0x20) = puVar3[-6];
          *(undefined4 *)(iVar6 + 0x24) = puVar3[-5];
          *(float *)(iVar6 + 0x28) = -(float)puVar3[-4];
          iVar6 = *piVar10 * 0x30;
          *(undefined4 *)(iVar6 + param_3) = puVar3[-2];
          *(undefined4 *)(iVar6 + 4 + param_3) = puVar3[-1];
          iVar6 = iVar6 + param_3;
          *(undefined4 *)(iVar6 + 8) = *puVar3;
          *(float *)(iVar6 + 0x10) = -(float)puVar3[2];
          *(float *)(iVar6 + 0x14) = -(float)puVar3[3];
          *(undefined4 *)(iVar6 + 0x18) = puVar3[4];
          *(undefined4 *)(iVar6 + 0x1c) = puVar3[5];
          *(undefined4 *)(iVar6 + 0x20) = puVar3[6];
          *(undefined4 *)(iVar6 + 0x24) = puVar3[7];
          *(float *)(iVar6 + 0x28) = -(float)puVar3[8];
          puVar5 = (undefined4 *)(piVar10[0x1c] * 0x30 + param_3);
          *puVar5 = puVar3[10];
          puVar5[1] = puVar3[0xb];
          puVar5[2] = puVar3[0xc];
          puVar5[4] = -(float)puVar3[0xe];
          puVar5[5] = -(float)puVar3[0xf];
          puVar5[6] = puVar3[0x10];
          puVar5[7] = puVar3[0x11];
          puVar5[8] = puVar3[0x12];
          puVar5[9] = puVar3[0x13];
          puVar5[10] = -(float)puVar3[0x14];
          puVar5 = (undefined4 *)(piVar10[0x38] * 0x30 + param_3);
          *puVar5 = puVar3[0x16];
          puVar5[1] = puVar3[0x17];
          puVar5[2] = puVar3[0x18];
          puVar5[4] = -(float)puVar3[0x1a];
          piVar10 = piVar10 + 0x70;
          iVar4 = iVar4 + -1;
          puVar5[5] = -(float)puVar3[0x1b];
          puVar5[6] = puVar3[0x1c];
          puVar5[7] = puVar3[0x1d];
          puVar5[8] = puVar3[0x1e];
          puVar5[9] = puVar3[0x1f];
          puVar5[10] = -(float)puVar3[0x20];
          puVar3 = puVar3 + 0x30;
        } while (iVar4 != 0);
      }
      if (iVar9 < iVar7) {
        piVar10 = (int *)(iVar9 * 0x70 + 0x3c + param_1);
        iVar7 = iVar7 - iVar9;
        puVar3 = (undefined4 *)(iVar9 * 0x30 + 8 + (int)param_2);
        do {
          puVar5 = (undefined4 *)(*piVar10 * 0x30 + param_3);
          *puVar5 = puVar3[-2];
          puVar5[1] = puVar3[-1];
          puVar5[2] = *puVar3;
          puVar5[4] = -(float)puVar3[2];
          piVar10 = piVar10 + 0x1c;
          iVar7 = iVar7 + -1;
          puVar5[5] = -(float)puVar3[3];
          puVar5[6] = puVar3[4];
          puVar5[7] = puVar3[5];
          puVar5[8] = puVar3[6];
          puVar5[9] = puVar3[7];
          puVar5[10] = -(float)puVar3[8];
          puVar3 = puVar3 + 0xc;
        } while (iVar7 != 0);
      }
    }
    if (param_4 == '\0') {
      fVar1 = *(float *)(iVar8 + 0x18);
      uVar2 = *(undefined4 *)(iVar8 + 0x1c);
      *(float *)(iVar8 + 0x18) = -*(float *)(iVar8 + 0x10);
      *(float *)(iVar8 + 0x10) = fVar1;
      *(float *)(iVar8 + 0x1c) = -*(float *)(iVar8 + 0x14);
      *(undefined4 *)(iVar8 + 0x14) = uVar2;
      *(float *)(iVar8 + 0x20) = -*(float *)(iVar8 + 0x20);
      *(float *)(iVar8 + 0x28) = -*(float *)(iVar8 + 0x28);
    }
  }
  else {
    iVar8 = 0;
    if (param_2 == (int *)param_3) {
      if (3 < iVar7) {
        param_2 = (int *)(param_1 + 0xac);
        iVar9 = 2;
        puVar3 = (undefined4 *)(param_3 + 0x4c);
        do {
          if ((*(uint *)(param_5 + (iVar8 >> 5) * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0) {
            iVar4 = param_2[-0x1c];
            if (iVar8 < iVar4) {
              fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + param_3);
              iVar4 = iVar4 * 0x30 + param_3;
              *(float *)(iVar4 + 0x10) = -(float)puVar3[-0xf];
              puVar3[-0xf] = -fVar1;
              fVar1 = *(float *)(iVar4 + 0x14);
              *(float *)(iVar4 + 0x14) = -(float)puVar3[-0xe];
              puVar3[-0xe] = -fVar1;
              uVar2 = *(undefined4 *)(iVar4 + 0x18);
              *(undefined4 *)(iVar4 + 0x18) = puVar3[-0xd];
              puVar3[-0xd] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x1c);
              *(undefined4 *)(iVar4 + 0x1c) = puVar3[-0xc];
              puVar3[-0xc] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x20);
              *(undefined4 *)(iVar4 + 0x20) = puVar3[-0xb];
              puVar3[-0xb] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x24);
              *(undefined4 *)(iVar4 + 0x24) = puVar3[-10];
              puVar3[-10] = uVar2;
              fVar1 = *(float *)(iVar4 + 0x28);
              *(float *)(iVar4 + 0x28) = -(float)puVar3[-9];
            }
            else {
              if (iVar4 != iVar8) goto LAB_0049e89d;
              puVar3[-0xf] = -(float)puVar3[-0xf];
              puVar3[-0xe] = -(float)puVar3[-0xe];
              fVar1 = (float)puVar3[-9];
            }
            puVar3[-9] = -fVar1;
          }
LAB_0049e89d:
          iVar4 = iVar9 + -1;
          if ((*(uint *)(param_5 + (iVar4 >> 5) * 4) & 1 << ((byte)iVar4 & 0x1f)) != 0) {
            iVar6 = *param_2;
            if (iVar4 < iVar6) {
              fVar1 = *(float *)(iVar6 * 0x30 + 0x10 + param_3);
              iVar4 = iVar6 * 0x30 + param_3;
              *(float *)(iVar4 + 0x10) = -(float)puVar3[-3];
              puVar3[-3] = -fVar1;
              fVar1 = *(float *)(iVar4 + 0x14);
              *(float *)(iVar4 + 0x14) = -(float)puVar3[-2];
              puVar3[-2] = -fVar1;
              uVar2 = *(undefined4 *)(iVar4 + 0x18);
              *(undefined4 *)(iVar4 + 0x18) = puVar3[-1];
              puVar3[-1] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x1c);
              *(undefined4 *)(iVar4 + 0x1c) = *puVar3;
              *puVar3 = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x20);
              *(undefined4 *)(iVar4 + 0x20) = puVar3[1];
              puVar3[1] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x24);
              *(undefined4 *)(iVar4 + 0x24) = puVar3[2];
              puVar3[2] = uVar2;
              fVar1 = *(float *)(iVar4 + 0x28);
              *(float *)(iVar4 + 0x28) = -(float)puVar3[3];
            }
            else {
              if (iVar6 != iVar4) goto LAB_0049e946;
              puVar3[-3] = -(float)puVar3[-3];
              puVar3[-2] = -(float)puVar3[-2];
              fVar1 = (float)puVar3[3];
            }
            puVar3[3] = -fVar1;
          }
LAB_0049e946:
          if ((*(uint *)(param_5 + (iVar9 >> 5) * 4) & 1 << ((byte)iVar9 & 0x1f)) != 0) {
            iVar4 = param_2[0x1c];
            if (iVar9 < iVar4) {
              fVar1 = *(float *)(iVar4 * 0x30 + 0x10 + param_3);
              iVar4 = iVar4 * 0x30 + param_3;
              *(float *)(iVar4 + 0x10) = -(float)puVar3[9];
              puVar3[9] = -fVar1;
              fVar1 = *(float *)(iVar4 + 0x14);
              *(float *)(iVar4 + 0x14) = -(float)puVar3[10];
              puVar3[10] = -fVar1;
              uVar2 = *(undefined4 *)(iVar4 + 0x18);
              *(undefined4 *)(iVar4 + 0x18) = puVar3[0xb];
              puVar3[0xb] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x1c);
              *(undefined4 *)(iVar4 + 0x1c) = puVar3[0xc];
              puVar3[0xc] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x20);
              *(undefined4 *)(iVar4 + 0x20) = puVar3[0xd];
              puVar3[0xd] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x24);
              *(undefined4 *)(iVar4 + 0x24) = puVar3[0xe];
              puVar3[0xe] = uVar2;
              fVar1 = *(float *)(iVar4 + 0x28);
              *(float *)(iVar4 + 0x28) = -(float)puVar3[0xf];
            }
            else {
              if (iVar4 != iVar9) goto LAB_0049e9ef;
              puVar3[9] = -(float)puVar3[9];
              puVar3[10] = -(float)puVar3[10];
              fVar1 = (float)puVar3[0xf];
            }
            puVar3[0xf] = -fVar1;
          }
LAB_0049e9ef:
          iVar4 = iVar9 + 1;
          if ((*(uint *)(param_5 + (iVar4 >> 5) * 4) & 1 << ((byte)iVar4 & 0x1f)) != 0) {
            iVar6 = param_2[0x38];
            if (iVar4 < iVar6) {
              fVar1 = *(float *)(iVar6 * 0x30 + 0x10 + param_3);
              iVar4 = iVar6 * 0x30 + param_3;
              *(float *)(iVar4 + 0x10) = -(float)puVar3[0x15];
              puVar3[0x15] = -fVar1;
              fVar1 = *(float *)(iVar4 + 0x14);
              *(float *)(iVar4 + 0x14) = -(float)puVar3[0x16];
              puVar3[0x16] = -fVar1;
              uVar2 = *(undefined4 *)(iVar4 + 0x18);
              *(undefined4 *)(iVar4 + 0x18) = puVar3[0x17];
              puVar3[0x17] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x1c);
              *(undefined4 *)(iVar4 + 0x1c) = puVar3[0x18];
              puVar3[0x18] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x20);
              *(undefined4 *)(iVar4 + 0x20) = puVar3[0x19];
              puVar3[0x19] = uVar2;
              uVar2 = *(undefined4 *)(iVar4 + 0x24);
              *(undefined4 *)(iVar4 + 0x24) = puVar3[0x1a];
              puVar3[0x1a] = uVar2;
              fVar1 = *(float *)(iVar4 + 0x28);
              *(float *)(iVar4 + 0x28) = -(float)puVar3[0x1b];
            }
            else {
              if (iVar6 != iVar4) goto LAB_0049ea9e;
              puVar3[0x15] = -(float)puVar3[0x15];
              puVar3[0x16] = -(float)puVar3[0x16];
              fVar1 = (float)puVar3[0x1b];
            }
            puVar3[0x1b] = -fVar1;
          }
LAB_0049ea9e:
          param_2 = param_2 + 0x70;
          iVar8 = iVar8 + 4;
          puVar3 = puVar3 + 0x30;
          iVar9 = iVar9 + 4;
        } while (iVar8 < iVar7 + -3);
      }
      if (iVar8 < iVar7) {
        puVar3 = (undefined4 *)(iVar8 * 0x30 + 0x1c + param_3);
        piVar10 = (int *)(iVar8 * 0x70 + 0x3c + param_1);
        do {
          if ((*(uint *)(param_5 + (iVar8 >> 5) * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0) {
            iVar9 = *piVar10;
            if (iVar8 < iVar9) {
              fVar1 = *(float *)(iVar9 * 0x30 + 0x10 + param_3);
              iVar9 = iVar9 * 0x30 + param_3;
              *(float *)(iVar9 + 0x10) = -(float)puVar3[-3];
              puVar3[-3] = -fVar1;
              fVar1 = *(float *)(iVar9 + 0x14);
              *(float *)(iVar9 + 0x14) = -(float)puVar3[-2];
              puVar3[-2] = -fVar1;
              uVar2 = *(undefined4 *)(iVar9 + 0x18);
              *(undefined4 *)(iVar9 + 0x18) = puVar3[-1];
              puVar3[-1] = uVar2;
              uVar2 = *(undefined4 *)(iVar9 + 0x1c);
              *(undefined4 *)(iVar9 + 0x1c) = *puVar3;
              *puVar3 = uVar2;
              uVar2 = *(undefined4 *)(iVar9 + 0x20);
              *(undefined4 *)(iVar9 + 0x20) = puVar3[1];
              puVar3[1] = uVar2;
              uVar2 = *(undefined4 *)(iVar9 + 0x24);
              *(undefined4 *)(iVar9 + 0x24) = puVar3[2];
              puVar3[2] = uVar2;
              fVar1 = *(float *)(iVar9 + 0x28);
              *(float *)(iVar9 + 0x28) = -(float)puVar3[3];
            }
            else {
              if (iVar9 != iVar8) goto LAB_0049eb92;
              puVar3[-3] = -(float)puVar3[-3];
              puVar3[-2] = -(float)puVar3[-2];
              fVar1 = (float)puVar3[3];
            }
            puVar3[3] = -fVar1;
          }
LAB_0049eb92:
          iVar8 = iVar8 + 1;
          piVar10 = piVar10 + 0x1c;
          puVar3 = puVar3 + 0xc;
        } while (iVar8 < iVar7);
      }
    }
    else {
      if (3 < iVar7) {
        piVar10 = (int *)(param_1 + 0xac);
        iVar9 = 2;
        puVar3 = (undefined4 *)((int)param_2 + 0x38);
        do {
          if ((*(uint *)(param_5 + (iVar8 >> 5) * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0) {
            puVar5 = (undefined4 *)(piVar10[-0x1c] * 0x30 + param_3);
            *puVar5 = puVar3[-0xe];
            puVar5[1] = puVar3[-0xd];
            puVar5[2] = puVar3[-0xc];
            puVar5[4] = -(float)puVar3[-10];
            puVar5[5] = -(float)puVar3[-9];
            puVar5[6] = puVar3[-8];
            puVar5[7] = puVar3[-7];
            puVar5[8] = puVar3[-6];
            puVar5[9] = puVar3[-5];
            puVar5[10] = -(float)puVar3[-4];
          }
          if ((*(uint *)(param_5 + (iVar9 + -1 >> 5) * 4) & 1 << ((byte)(iVar9 + -1) & 0x1f)) != 0)
          {
            puVar5 = (undefined4 *)(*piVar10 * 0x30 + param_3);
            *puVar5 = puVar3[-2];
            puVar5[1] = puVar3[-1];
            puVar5[2] = *puVar3;
            puVar5[4] = -(float)puVar3[2];
            puVar5[5] = -(float)puVar3[3];
            puVar5[6] = puVar3[4];
            puVar5[7] = puVar3[5];
            puVar5[8] = puVar3[6];
            puVar5[9] = puVar3[7];
            puVar5[10] = -(float)puVar3[8];
          }
          if ((*(uint *)(param_5 + (iVar9 >> 5) * 4) & 1 << ((byte)iVar9 & 0x1f)) != 0) {
            puVar5 = (undefined4 *)(piVar10[0x1c] * 0x30 + param_3);
            *puVar5 = puVar3[10];
            puVar5[1] = puVar3[0xb];
            puVar5[2] = puVar3[0xc];
            puVar5[4] = -(float)puVar3[0xe];
            puVar5[5] = -(float)puVar3[0xf];
            puVar5[6] = puVar3[0x10];
            puVar5[7] = puVar3[0x11];
            puVar5[8] = puVar3[0x12];
            puVar5[9] = puVar3[0x13];
            puVar5[10] = -(float)puVar3[0x14];
          }
          if ((*(uint *)(param_5 + (iVar9 + 1 >> 5) * 4) & 1 << ((byte)(iVar9 + 1) & 0x1f)) != 0) {
            puVar5 = (undefined4 *)(piVar10[0x38] * 0x30 + param_3);
            *puVar5 = puVar3[0x16];
            puVar5[1] = puVar3[0x17];
            puVar5[2] = puVar3[0x18];
            puVar5[4] = -(float)puVar3[0x1a];
            puVar5[5] = -(float)puVar3[0x1b];
            puVar5[6] = puVar3[0x1c];
            puVar5[7] = puVar3[0x1d];
            puVar5[8] = puVar3[0x1e];
            puVar5[9] = puVar3[0x1f];
            puVar5[10] = -(float)puVar3[0x20];
          }
          iVar8 = iVar8 + 4;
          puVar3 = puVar3 + 0x30;
          iVar9 = iVar9 + 4;
          piVar10 = piVar10 + 0x70;
        } while (iVar8 < iVar7 + -3);
      }
      if (iVar8 < iVar7) {
        puVar3 = (undefined4 *)(iVar8 * 0x30 + 8 + (int)param_2);
        piVar10 = (int *)(iVar8 * 0x70 + 0x3c + param_1);
        do {
          if ((*(uint *)(param_5 + (iVar8 >> 5) * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0) {
            puVar5 = (undefined4 *)(*piVar10 * 0x30 + param_3);
            *puVar5 = puVar3[-2];
            puVar5[1] = puVar3[-1];
            puVar5[2] = *puVar3;
            puVar5[4] = -(float)puVar3[2];
            puVar5[5] = -(float)puVar3[3];
            puVar5[6] = puVar3[4];
            puVar5[7] = puVar3[5];
            puVar5[8] = puVar3[6];
            puVar5[9] = puVar3[7];
            puVar5[10] = -(float)puVar3[8];
          }
          iVar8 = iVar8 + 1;
          puVar3 = puVar3 + 0xc;
          piVar10 = piVar10 + 0x1c;
        } while (iVar8 < iVar7);
      }
    }
    if (param_4 == '\0') {
      fVar1 = *(float *)(param_3 + 0x18);
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      *(float *)(param_3 + 0x18) = -*(float *)(param_3 + 0x10);
      *(float *)(param_3 + 0x1c) = -*(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x20) = -*(float *)(param_3 + 0x20);
      *(float *)(param_3 + 0x10) = fVar1;
      *(float *)(param_3 + 0x28) = -*(float *)(param_3 + 0x28);
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      return;
    }
  }
  return;
}

