/* speed.exe 007dc34f FUN_007dc34f; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007c6270 _atol
 */

void FUN_007dc34f(void)

{
  long lVar1;
  int unaff_EBP;
  
  _strncpy(PTR_DAT_00907140,*(char **)(unaff_EBP + -0x28),3);
  PTR_DAT_00907140[3] = 0;
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 3;
  if (**(char **)(unaff_EBP + -0x28) == '-') {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
  }
  lVar1 = _atol(*(char **)(unaff_EBP + -0x28));
  DAT_009070b0 = lVar1 * 0xe10;
  while ((**(char **)(unaff_EBP + -0x28) == '+' ||
         (('/' < **(char **)(unaff_EBP + -0x28) && (**(char **)(unaff_EBP + -0x28) < ':'))))) {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
  }
  if (**(char **)(unaff_EBP + -0x28) == ':') {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    lVar1 = _atol(*(char **)(unaff_EBP + -0x28));
    DAT_009070b0 = lVar1 * 0x3c + DAT_009070b0;
    while (('/' < **(char **)(unaff_EBP + -0x28) && (**(char **)(unaff_EBP + -0x28) < ':'))) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    }
    if (**(char **)(unaff_EBP + -0x28) == ':') {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      lVar1 = _atol(*(char **)(unaff_EBP + -0x28));
      DAT_009070b0 = lVar1 + DAT_009070b0;
      while (('/' < **(char **)(unaff_EBP + -0x28) && (**(char **)(unaff_EBP + -0x28) < ':'))) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
    }
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    DAT_009070b0 = -DAT_009070b0;
  }
  DAT_009070b4 = (int)**(char **)(unaff_EBP + -0x28);
  if (DAT_009070b4 == 0) {
    *PTR_DAT_00907144 = 0;
  }
  else {
    _strncpy(PTR_DAT_00907144,*(char **)(unaff_EBP + -0x28),3);
    PTR_DAT_00907144[3] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

