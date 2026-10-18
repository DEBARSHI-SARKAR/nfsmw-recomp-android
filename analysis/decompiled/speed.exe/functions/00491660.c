/* speed.exe 00491660 FUN_00491660; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007c6610 FUN_007c6610
 */

void __thiscall FUN_00491660(undefined4 *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  int iStack_a0;
  int *piStack_9c;
  int iStack_94;
  char acStack_80 [128];
  
  iVar14 = 0;
  piStack_9c = (int *)(*(code *)PTR_FUN_008ee4d0)(0x430,0);
  if (piStack_9c == (int *)0x0) {
    piStack_9c = (int *)0x0;
  }
  else {
    *piStack_9c = 0;
    piStack_9c[2] = 0;
    *(undefined1 *)(piStack_9c + 3) = 0;
    piStack_9c[4] = 0;
    piStack_9c[5] = 0;
    piStack_9c[6] = 0;
    piStack_9c[7] = 0;
    piStack_9c[0x108] = 0;
    piStack_9c[0x109] = 0;
    piStack_9c[0x10a] = (int)param_1;
    piStack_9c[0x10b] = 0;
  }
  iVar3 = param_1[4];
  piStack_9c[7] = iVar3;
  uVar7 = *(uint *)(iVar3 + 0x20);
  uVar10 = param_1[5];
  if (uVar7 < uVar10) {
    iStack_a0 = param_1[4] + uVar7;
  }
  else {
    if (param_1[6] == 0) {
      if (uVar10 < uVar7) {
        iStack_a0 = 0;
        goto LAB_00491701;
      }
      iStack_a0 = param_1[4];
    }
    else {
      iStack_a0 = param_1[6] - uVar10;
    }
    iStack_a0 = iStack_a0 + uVar7;
  }
LAB_00491701:
  piStack_9c[6] = iStack_a0;
  piStack_9c[5] = 0;
  if (*(short *)(iVar3 + 0x30) != 0) {
    iVar13 = iStack_a0 + 8;
    do {
      uVar7 = *(uint *)(iVar13 + 8);
      uVar10 = param_1[5];
      if (uVar7 < uVar10) {
LAB_0049172e:
        iVar4 = param_1[4];
LAB_00491731:
        iVar4 = iVar4 + uVar7;
      }
      else {
        if (param_1[6] != 0) {
          iVar4 = param_1[6] - uVar10;
          goto LAB_00491731;
        }
        if (uVar7 <= uVar10) goto LAB_0049172e;
        iVar4 = 0;
      }
      *(int *)(iVar13 + 8) = iVar4;
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 0x28;
    } while (iVar14 < (int)(uint)*(ushort *)(iVar3 + 0x30));
  }
  iVar14 = *(int *)(iStack_a0 + 0x10 + (uint)*(ushort *)(iVar3 + 0x32) * 0x28);
  iStack_94 = 0;
  if (*(short *)(iVar3 + 0x30) != 0) {
    piVar12 = (int *)(iStack_a0 + 0x10);
    do {
      switch(piVar12[-3]) {
      case 2:
        piVar12[2] = *(int *)(iStack_a0 + 0x10 + piVar12[2] * 0x28);
        iVar13 = 8;
        bVar16 = true;
        pcVar11 = ".symtab";
        pcVar15 = (char *)(piVar12[-4] + iVar14);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar16 = *pcVar11 == *pcVar15;
          pcVar11 = pcVar11 + 1;
          pcVar15 = pcVar15 + 1;
        } while (bVar16);
        if (bVar16) {
          piStack_9c[5] = *piVar12;
          piStack_9c[4] = (int)(piVar12[1] + (piVar12[1] >> 0x1f & 0xfU)) >> 4;
        }
        break;
      case 3:
        iVar13 = 8;
        bVar16 = true;
        pcVar11 = ".strtab";
        pcVar15 = (char *)(piVar12[-4] + iVar14);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar16 = *pcVar11 == *pcVar15;
          pcVar11 = pcVar11 + 1;
          pcVar15 = pcVar15 + 1;
        } while (bVar16);
        if (bVar16) {
          pcVar11 = (char *)*piVar12;
          piStack_9c[2] = (int)pcVar11;
          for (iVar13 = piVar12[1]; 0 < iVar13;
              iVar13 = iVar13 + (-1 - ((int)pcVar5 - (int)pcVar15))) {
            pcVar15 = pcVar11 + 1;
            pcVar5 = pcVar11;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            if ((*pcVar11 == '_') && (pcVar11[1] == '_')) {
              pcVar8 = pcVar11 + 2;
              puVar6 = (undefined1 *)FUN_007c6610(pcVar8,&DAT_008956b0);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = 0;
                iVar4 = -(int)pcVar8;
                do {
                  cVar1 = *pcVar8;
                  pcVar8[(int)(acStack_80 + iVar4)] = cVar1;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                pcVar8 = ":::";
                do {
                  pcVar9 = pcVar8;
                  pcVar8 = pcVar9 + 1;
                } while (*pcVar9 != '\0');
                pcVar9 = pcVar9 + -0x8956b0 + (int)puVar6;
                pcVar8 = pcVar9;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                pcVar8 = pcVar8 + (1 - (int)(pcVar9 + 1));
                FID_conflict__memcpy(pcVar11,pcVar9,(size_t)pcVar8);
                pcVar9 = acStack_80;
                pcVar11[(int)pcVar8] = '\x7f';
                iVar4 = 1 - (int)pcVar9;
                do {
                  cVar1 = *pcVar9;
                  pcVar9[(int)(pcVar11 + (int)pcVar8 + iVar4)] = cVar1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar1 != '\0');
              }
            }
            pcVar11 = pcVar11 + ((int)pcVar5 - (int)pcVar15) + 1;
          }
        }
        break;
      case 9:
        piVar12[3] = *(int *)(iStack_a0 + 0x10 + piVar12[3] * 0x28);
        piVar12[2] = *(int *)(iStack_a0 + 0x10 + piVar12[2] * 0x28);
      }
      iStack_94 = iStack_94 + 1;
      piVar12 = piVar12 + 10;
    } while (iStack_94 < (int)(uint)*(ushort *)(iVar3 + 0x30));
  }
  piStack_9c[0x10b] = param_2;
  piVar12 = piStack_9c + 8;
  for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
    *piVar12 = -1;
    piVar12 = piVar12 + 1;
  }
  iVar14 = (*(code *)PTR_FUN_008ee4d0)(piStack_9c[4] << 2,"EAGL4::dynamic symbols");
  piStack_9c[0x108] = iVar14;
  iVar14 = (*(code *)PTR_FUN_008ee4d0)(piStack_9c[4],"EAGL4::dynamic symbols 2");
  piStack_9c[0x109] = iVar14;
  iVar14 = 0;
  if (0 < piStack_9c[4]) {
    iVar13 = 0;
    do {
      iVar4 = piStack_9c[5];
      pcVar11 = (char *)(piStack_9c[2] + *(int *)(iVar4 + iVar13));
      uVar7 = 0;
      cVar1 = *pcVar11;
      while (cVar1 != '\0') {
        uVar7 = uVar7 * 0x10 + (int)cVar1;
        pcVar11 = pcVar11 + 1;
        uVar10 = uVar7 & 0xf0000000;
        if (uVar10 != 0) {
          uVar7 = uVar7 ^ uVar10 >> 0x18;
        }
        uVar7 = uVar7 & ~uVar10;
        cVar1 = *pcVar11;
      }
      *(int *)(piStack_9c[0x108] + iVar14 * 4) = piStack_9c[(uVar7 & 0xff) + 8];
      piStack_9c[(uVar7 & 0xff) + 8] = iVar14;
      uVar2 = *(ushort *)(iVar4 + 0xe + iVar13);
      if ((uVar2 == 0) || (*(ushort *)(iVar3 + 0x30) <= uVar2)) {
        *(undefined1 *)(iVar14 + piStack_9c[0x109]) = 0;
      }
      else {
        *(undefined1 *)(iVar14 + piStack_9c[0x109]) = 1;
      }
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 0x10;
    } while (iVar14 < piStack_9c[4]);
  }
  *piStack_9c = (int)DAT_009117e4;
  if (DAT_009117e4 != (int *)0x0) {
    *(int **)((int)DAT_009117e4 + 4) = piStack_9c;
  }
  piStack_9c[1] = 0;
  *param_1 = piStack_9c;
  DAT_009117e4 = piStack_9c;
  return;
}

