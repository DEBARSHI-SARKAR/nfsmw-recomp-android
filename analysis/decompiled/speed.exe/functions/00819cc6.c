/* speed.exe 00819cc6 FUN_00819cc6; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00819cc6(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[3];
  if (iVar5 != param_1[1]) {
    pcVar1 = (char *)*param_1;
    param_1[1] = iVar5;
    iVar2 = *(int *)(pcVar1 + 4);
    iVar6 = iVar2;
    if ((iVar2 <= iVar5) && (iVar6 = *(int *)(pcVar1 + 8), iVar5 <= *(int *)(pcVar1 + 8))) {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 - iVar2;
    if (*(float *)(pcVar1 + 0xc) == _DAT_0089096c) {
      if (*pcVar1 == '\x02') {
        iVar5 = (int)*(short *)(pcVar1 + iVar6 * 2 + 0x10);
      }
      else if (*pcVar1 == '\x01') {
        iVar5 = (int)pcVar1[iVar6 + 0x10];
      }
      else {
        iVar5 = *(int *)(pcVar1 + iVar6 * 4 + 0x10);
      }
    }
    else {
      iVar2 = (int)ROUND((float)iVar6 * *(float *)(pcVar1 + 0xc) - _DAT_008933d4);
      iVar5 = iVar2 + 1;
      if ((int)(uint)*(ushort *)(pcVar1 + 2) <= iVar5) {
        iVar5 = *(ushort *)(pcVar1 + 2) - 1;
      }
      if (*pcVar1 == '\x02') {
        fVar3 = (float)(int)*(short *)(pcVar1 + iVar2 * 2 + 0x10);
        fVar4 = (float)(int)*(short *)(pcVar1 + iVar5 * 2 + 0x10);
      }
      else if (*pcVar1 == '\x01') {
        fVar3 = (float)(int)pcVar1[iVar2 + 0x10];
        fVar4 = (float)(int)pcVar1[iVar5 + 0x10];
      }
      else {
        fVar3 = (float)*(int *)(pcVar1 + iVar2 * 4 + 0x10);
        fVar4 = (float)*(int *)(pcVar1 + iVar5 * 4 + 0x10);
      }
      iVar5 = (int)ROUND((fVar4 - fVar3) * ((float)iVar6 * *(float *)(pcVar1 + 0xc) - (float)iVar2)
                         + fVar3);
    }
    param_1[2] = iVar5;
  }
  return param_1[2];
}

