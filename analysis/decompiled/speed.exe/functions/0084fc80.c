/* speed.exe 0084fc80 FUN_0084fc80; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 */

void FUN_0084fc80(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)FUN_007c97c0();
  if (pcVar3 != (char *)0x0) {
    uVar4 = 0;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      pcVar1 = pcVar3 + 1;
      uVar4 = (int)cVar2 ^ (int)uVar4 >> 0x1b ^ uVar4 << 5;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    *(uint *)(param_1 + 0x98) = uVar4;
  }
  return;
}

