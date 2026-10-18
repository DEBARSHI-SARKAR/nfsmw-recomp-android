/* speed.exe 00828c6b FUN_00828c6b; analysis pseudocode, not buildable source.
 */

void FUN_00828c6b(int param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = *(char **)(param_1 + 0xc);
  if (*pcVar3 == -0x12) {
    *(char **)(param_1 + 0xc) = pcVar3 + 1;
    cVar1 = pcVar3[2];
    cVar2 = pcVar3[1];
    *(char **)(param_1 + 0xc) = pcVar3 + 3;
    iVar4 = 0x1c;
    *(float *)(param_1 + 4) = (float)(int)CONCAT11(cVar2,cVar1);
    cVar1 = pcVar3[4];
    cVar2 = pcVar3[3];
    *(char **)(param_1 + 0xc) = pcVar3 + 5;
    *(float *)(param_1 + 8) = (float)(int)CONCAT11(cVar2,cVar1);
    do {
      **(float **)(param_1 + 0x10) =
           (float)(int)CONCAT11(**(undefined1 **)(param_1 + 0xc),
                                (*(undefined1 **)(param_1 + 0xc))[1]);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

