/* speed.exe 0081bb45 FUN_0081bb45; analysis pseudocode, not buildable source.
 * calls 008219bb FUN_008219bb
 * calls 0081efb2 FUN_0081efb2
 * calls 0081d7a4 FUN_0081d7a4
 * calls 0081f39d FUN_0081f39d
 * calls 0081f025 FUN_0081f025
 * calls 008218a0 FUN_008218a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081bb45(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int local_4;
  
  DAT_009c2190 = DAT_009c2190 + 1;
  FUN_0081f025();
  iVar7 = 0;
  if ('\0' < DAT_009c218a) {
    do {
      (*(code *)(&DAT_009c2194)[iVar7])();
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_009c218a);
  }
  iVar7 = 0;
  if (0 < DAT_009c218c) {
    local_4 = 0;
    do {
      piVar1 = (int *)(local_4 + DAT_009c21f4);
      if (*(char *)((int)piVar1 + 0x6d) == '\x01') {
        if ((-1 < *piVar1) && (piVar1[0x20] != 0)) {
          *(char *)(piVar1 + 0x1b) = (char)piVar1[0x1b] + '\x01';
          if (*(byte *)((int)piVar1 + 0x6a) <= *(byte *)(piVar1 + 0x1b)) {
            *(undefined1 *)(piVar1 + 0x1b) = 0;
          }
          *(undefined2 *)((int)piVar1 + 0x8a) = 0;
          FUN_008219bb(iVar7);
          FUN_0081efb2(iVar7);
        }
        bVar6 = false;
        if (piVar1[0x1f] != 0) {
          *(char *)((int)piVar1 + 0x6b) = *(char *)((int)piVar1 + 0x6b) + '\x01';
          bVar6 = true;
          if (*(byte *)((int)piVar1 + 0x69) <= *(byte *)((int)piVar1 + 0x6b)) {
            *(undefined1 *)((int)piVar1 + 0x6b) = 0;
          }
        }
        if ((float)piVar1[0xc] == _DAT_00890968) {
LAB_0081bc3d:
          piVar1[0x11] = piVar1[0x11] + -1;
          if (piVar1[0xf] != 0) {
            piVar1[0x10] = piVar1[0x10] + piVar1[0xf];
            bVar6 = true;
          }
          if (piVar1[0x11] == 0) {
            *(char *)((int)piVar1 + 0x5d) = *(char *)((int)piVar1 + 0x5d) + '\x01';
            if ((char)piVar1[0x17] <= *(char *)((int)piVar1 + 0x5d)) goto LAB_0081bc5f;
            piVar2 = (int *)(piVar1[0x1c] + *(char *)((int)piVar1 + 0x5d) * 8);
            iVar4 = *piVar2;
            piVar1[0x11] = iVar4;
            if (iVar4 < 0) {
              piVar1[0x11] = 0x7fffffff;
            }
            piVar1[0xf] = (piVar2[1] * 0x10000 - piVar1[0x10]) / piVar1[0x11];
          }
          if (bVar6) {
            FUN_008218a0(iVar7);
            FUN_0081d7a4(iVar7);
          }
        }
        else {
          fVar5 = (float)piVar1[0xe] + (float)piVar1[0xc];
          bVar6 = true;
          piVar1[0xe] = (int)fVar5;
          fVar3 = (float)piVar1[0xd];
          if (_DAT_00890968 <= (float)piVar1[0xc]) {
            if (fVar5 >= fVar3) goto LAB_0081bc22;
          }
          else if (fVar5 < fVar3 != (fVar5 == fVar3)) {
LAB_0081bc22:
            piVar1[0xc] = 0;
            piVar1[0xe] = piVar1[0xd];
          }
          if (_DAT_00890968 <= (float)piVar1[0xe]) goto LAB_0081bc3d;
LAB_0081bc5f:
          FUN_0081f39d(*piVar1);
        }
      }
      local_4 = local_4 + 0x90;
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_009c218c);
  }
  return;
}

