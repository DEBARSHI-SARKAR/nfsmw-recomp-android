/* speed.exe 007ecbbe FUN_007ecbbe; analysis pseudocode, not buildable source.
 * calls 007c5f30 __allmul
 * calls 007ec7a2 FUN_007ec7a2
 * calls 007ec948 FUN_007ec948
 * calls 007ec875 FUN_007ec875
 * calls 007ecb42 FUN_007ecb42
 * calls 007f0df9 FUN_007f0df9
 */

longlong FUN_007ecbbe(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  
  if (DAT_009bb100 != '\x01') {
    DAT_009bb100 = 1;
    FUN_007ec948();
    iVar2 = FUN_007ec7a2();
    uVar4 = 1000000;
    if (iVar2 == 0) {
      iVar2 = FUN_007ec875();
      uVar4 = 5;
    }
    lVar6 = __allmul(iVar2,0,uVar4,0);
    if (lVar6 == 0) {
      FUN_007f0df9(&DAT_009bb0c8,0x38);
    }
    else {
      DAT_009bb0c8 = (int)lVar6;
      DAT_009bb0cc = (int)((ulonglong)lVar6 >> 0x20);
      pcVar3 = (char *)FUN_007ecb42();
      pcVar5 = &DAT_009bb0ec;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    return lVar6;
  }
  return CONCAT44(DAT_009bb0cc,DAT_009bb0c8);
}

