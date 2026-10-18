/* speed.exe 008196e8 FUN_008196e8; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 008311ec FUN_008311ec
 * calls 00831220 FUN_00831220
 * calls 00819648 FUN_00819648
 * calls 008316f2 FUN_008316f2
 * calls 008318fa FUN_008318fa
 * calls 00831782 FUN_00831782
 */

undefined4 FUN_008196e8(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[3] != 0) {
    FUN_00819648(param_1[1]);
    FUN_00819648(param_1[1] + 8);
    iVar2 = param_1[1];
    iVar3 = iVar2 + 0x18;
    if (*(char *)(*param_1 + 0x25) != '\0') {
      FUN_008311ec(iVar3);
      iVar3 = iVar2 + 0x2c;
    }
    iVar2 = 0;
    if (*(short *)(*param_1 + 0x20) != 0) {
      do {
        FUN_008318fa(iVar3,iVar3 + 8);
        iVar3 = iVar3 + 0x1c;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(*param_1 + 0x20));
    }
    if (*(char *)(*param_1 + 0x26) != '\0') {
      FUN_00831220(iVar3);
      iVar3 = iVar3 + 0x14 + (uint)*(byte *)(iVar3 + 0x10) * 4;
    }
    iVar2 = 0;
    if (*(short *)(*param_1 + 0x22) != 0) {
      do {
        FUN_008316f2(iVar3,iVar3 + 8);
        iVar3 = iVar3 + 0x1c + (uint)*(byte *)(iVar3 + 0x18) * 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(*param_1 + 0x22));
    }
    iVar3 = 0;
    piVar4 = (int *)(*param_1 + 0x3c);
    if (*(char *)(*param_1 + 0x24) != '\0') {
      do {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        cVar1 = *(char *)(iVar2 + param_1[1] + 0x10);
        if (-1 < cVar1) {
          (**(code **)(&DAT_0090bc00 + cVar1 * 4))(iVar2 + param_1[1]);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(*param_1 + 0x24));
    }
    iVar3 = 0;
    if (*(char *)(*param_1 + 0x27) != '\0') {
      do {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        if (*(int *)(iVar2 + param_1[1] + 8) != 0) {
          FUN_00831782();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(*param_1 + 0x27));
    }
    *(short *)(*param_1 + 0x1c) = *(short *)(*param_1 + 0x1c) + -1;
    FUN_0081eae9(param_1[1]);
  }
  return 0;
}

