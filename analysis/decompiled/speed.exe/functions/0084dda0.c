/* speed.exe 0084dda0 FUN_0084dda0; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 0084d590 FUN_0084d590
 */

undefined4 FUN_0084dda0(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x94) != 2) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  bVar1 = *param_2;
  while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 0x80) = (bVar1 & 0xf) + *(int *)(param_1 + 0x80) * 10;
    bVar1 = *param_2;
  }
  iVar3 = FUN_007c97c0(param_2,0x3a);
  if (iVar3 == 0) {
    return 0xfffffffd;
  }
  pcVar4 = (char *)(iVar3 + 1);
  iVar3 = (param_1 + 0x9c) - (int)pcVar4;
  do {
    cVar2 = *pcVar4;
    pcVar4[iVar3] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  *(undefined4 *)(param_1 + 0x94) = 3;
  FUN_0084d590(*(undefined4 *)(param_1 + 0x80),2,param_1,0x4000,0,0);
  return 0;
}

