/* speed.exe 0082c880 FUN_0082c880; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 007c6100 _sprintf
 */

int FUN_0082c880(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined1 local_8;
  
  iVar6 = 0;
  if ((((param_1 & 0xffffff) == 0) || ((param_1 & 0xf000000) == 0)) || ((param_1 & 0xf0000000) == 0)
     ) {
    return -8;
  }
  do {
    if ((param_1 & 1 << ((byte)iVar6 & 0x1f)) != 0) break;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x18);
  if (*(int *)(DAT_009c2964 + 0x40 + iVar6 * 4) != 0) {
    return -0xd;
  }
  puVar4 = (undefined4 *)FUN_00829480(0x140);
  if (puVar4 == (undefined4 *)0x0) {
    return -0x6c;
  }
  puVar10 = puVar4;
  for (iVar7 = 0x50; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  uVar8 = puVar4[2];
  local_8 = (undefined1)iVar6;
  *(undefined1 *)puVar4 = local_8;
  puVar4[2] = uVar8 & 0xfbffffff;
  *(undefined1 *)((int)puVar4 + 2) = DAT_0090d1e0;
  *(undefined2 *)((int)puVar4 + 0x1a) = 0xffff;
  *(undefined2 *)(puVar4 + 6) = 0xffff;
  *(undefined2 *)(puVar4 + 7) = 0xffff;
  *(undefined2 *)((int)puVar4 + 0x2a) = 0xffff;
  *(undefined2 *)(puVar4 + 10) = 0xffff;
  *(undefined2 *)(puVar4 + 0xb) = 0xffff;
  *(undefined2 *)(puVar4 + 0xe) = 0xffff;
  *(undefined2 *)(puVar4 + 0xf) = 0xffff;
  *(undefined2 *)(puVar4 + 0x12) = 0xffff;
  *(undefined2 *)(puVar4 + 0x13) = 0xffff;
  *(undefined2 *)(puVar4 + 0x16) = 0xffff;
  *(undefined2 *)(puVar4 + 0x17) = 0xffff;
  uVar8 = uVar8 & 0xfbffffff | 0x1f00000;
  puVar4[2] = uVar8;
  puVar4[1] = puVar4[1] | 0xffff;
  *(undefined1 *)((int)puVar4 + 3) = 0x7f;
  iVar7 = DAT_009c2984;
  *(undefined2 *)((int)puVar4 + 6) = 0xffff;
  puVar4[0x1e] = 0xffffffff;
  puVar4[0x47] = 0xffffffff;
  uVar8 = (iVar7 << 0x1c ^ uVar8) & 0x70000000 ^ uVar8;
  puVar4[2] = uVar8;
  puVar4[2] = (uint)((param_1 & 0xf0000000) == 0x10000000) * -0x80000000 | uVar8 & 0x7fffffff;
  puVar4[0x4f] = 1;
  puVar4[0x48] = 0xbedfaced;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5[(int)puVar4 + (0x7c - (int)param_2)] = cVar1;
    pcVar5 = pcVar5 + 1;
    pcVar2 = param_2;
  } while (cVar1 != '\0');
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if (param_2 <= pcVar5) {
    while ((cVar1 = *pcVar5, cVar1 != '\\' && (cVar1 != '/'))) {
      if ((cVar1 == ':') || (pcVar5 = pcVar5 + -1, pcVar5 < param_2)) break;
    }
  }
  iVar7 = 0;
  do {
    if ((param_1 & 0xff000000 & 1 << ((char)iVar7 + 0x1cU & 0x1f)) != 0) break;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  _sprintf((char *)(puVar4 + 0x3f),"%x%s",iVar7 + 1,pcVar5 + 1);
  pbVar9 = (byte *)((int)puVar4 + 0xfd);
  bVar3 = 0x61;
  do {
    if (puVar4 + 0x47 <= pbVar9) {
LAB_0082ca85:
      *(undefined1 *)((int)puVar4 + 0x107) = 0;
      *(undefined4 **)(DAT_009c2964 + 0x40 + iVar6 * 4) = puVar4;
      return iVar6;
    }
    if (((bVar3 == 0) || (*pbVar9 == 0)) ||
       (((bVar3 = *pbVar9 | 0x20, (char)bVar3 < 'a' || ('z' < (char)bVar3)) &&
        (((char)bVar3 < '0' || ('9' < (char)bVar3)))))) {
      bVar3 = 0;
      if (puVar4 + 0x42 <= pbVar9) {
        *pbVar9 = 0;
        goto LAB_0082ca85;
      }
      *pbVar9 = 0x20;
    }
    pbVar9 = pbVar9 + 1;
  } while( true );
}

