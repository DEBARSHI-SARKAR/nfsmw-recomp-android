/* speed.exe 006d2100 FUN_006d2100; analysis pseudocode, not buildable source.
 * calls 006c2760 FUN_006c2760
 * calls 006cb1e0 FUN_006cb1e0
 * calls 006cb190 FUN_006cb190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d2100(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  uVar1 = DAT_0093d89c;
  if (DAT_0093d898 == 0x8086) {
    if (DAT_0093d89c == 0x2572) {
      _DAT_008f944c = 0;
    }
  }
  else if (DAT_0093d898 == 0x102b) {
    DAT_00901840 = 0;
    DAT_00901844 = 0;
    goto LAB_006d215a;
  }
  DAT_00901840 = 3;
  DAT_00901844 = 1;
LAB_006d215a:
  if ((*(int *)(DAT_0093de80 + 0x10) == 0) ||
     (((DAT_0093d898 == 0x10de && (0x16f < DAT_0093d89c)) && (DAT_0093d89c < 0x183)))) {
    DAT_00901858 = 0;
  }
  else {
    DAT_00901858 = (uint)(*(int *)(DAT_0093dea4 + 0x10) != 0);
  }
  if (*(int *)(DAT_0093de7c + 0x10) == 0) {
    DAT_0090185c = 0;
  }
  else {
    DAT_0090185c = (*(int *)(DAT_0093dea4 + 0x10) != 0) + 2;
  }
  if (((*(int *)(DAT_0093dea4 + 0x10) == 0) || (*(int *)(DAT_0093dea8 + 0x10) == 0)) ||
     ((DAT_0093d944 & 0x2000) == 0)) {
    DAT_00901884 = 0;
  }
  else {
    DAT_00901884 = 1;
  }
  if ((*(int *)(DAT_0093dea4 + 0x10) == 0) || ((DAT_0093d944 & 0x2000) == 0)) {
    DAT_00901864 = 0;
  }
  else {
    DAT_00901864 = 1;
  }
  _DAT_0090188c = 1;
  DAT_00901894 = 1;
  DAT_00901888 = (uint)(*(int *)(DAT_0093deac + 0x10) != 0);
  DAT_00901898 = (uint)(*(int *)(DAT_0093deb0 + 0x10) != 0);
  DAT_0090189c = 1;
  DAT_009018a0 = (uint)((DAT_0093d958 & 0x20000) != 0);
  if ((DAT_0093d958 & 0x400) != 0) {
    DAT_009018a0 = DAT_009018a0 + 1;
  }
  DAT_00901860 = (uint)(*(char *)(DAT_0093de78 + 0x40) == '\x01');
  DAT_00901848 = 2;
  DAT_0090186c = 1;
  DAT_00901870 = 1;
  DAT_00901874 = 1;
  DAT_0090187c = 3;
  DAT_00901880 = 1;
  _DAT_009018ac = 1;
  if (((DAT_0093d954 & 2) != 0) && ((DAT_0093d954 & 0x100) == 0)) {
    DAT_00901888 = 0;
    DAT_00901890 = 0;
    DAT_00901864 = 0;
    DAT_00901884 = 0;
    DAT_0090185c = 0;
  }
  DAT_00901878 = 0;
  DAT_00901868 = 0;
  DAT_0090184c = 0;
  if (DAT_0093d898 == 0x1002) {
    iVar3 = FUN_006c2760();
    if (iVar3 != 0) {
      DAT_00901890 = 0;
    }
    if (uVar1 == 0x5834) {
      DAT_0090185c = 0;
    }
  }
  else if (DAT_0093d898 == 0x18ca) {
    DAT_00901890 = 0;
  }
  else if (DAT_0093d898 == 0x10de) {
    cVar2 = FUN_006cb1e0(0x10de,DAT_0093d89c);
    if ((cVar2 != '\0') &&
       (fVar4 = (float10)FUN_006cb190(0x10de,uVar1),
       fVar4 < (float10)_DAT_00890d3c != (fVar4 == (float10)_DAT_00890d3c))) {
      DAT_00901890 = 0;
    }
  }
  else if (DAT_0093d898 == 0x1039) {
    DAT_0090185c = 0;
  }
  else if (DAT_0093d898 == 0x8086) {
    if (DAT_0093d89c == 0x2572) {
      DAT_0090185c = 0;
    }
  }
  else if (DAT_0093d898 == 0x102b) {
    DAT_00982c04 = 1;
  }
  else if ((DAT_0093d898 == 0x5333) && (DAT_0093d89c == 0x8e00)) {
    DAT_00901888 = 0;
    DAT_00901884 = 0;
    DAT_00901868 = 0;
  }
  if (*(int *)(DAT_0093deb8 + 0x10) != 0) {
    DAT_009018b0 = 1;
    _DAT_009018b4 = 0;
  }
  if (DAT_00982c08 != 0) {
    DAT_00982c3c = *(int *)(DAT_0093de78 + 0x38);
    if (*(int *)(DAT_0093de78 + 0x38) < *(int *)(DAT_0093de7c + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093de7c + 0x38);
    }
    if (DAT_00982c3c < *(int *)(DAT_0093de84 + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093de84 + 0x38);
    }
    if (DAT_00982c3c < *(int *)(DAT_0093de88 + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093de88 + 0x38);
    }
    if (DAT_00982c3c < *(int *)(DAT_0093dec0 + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093dec0 + 0x38);
    }
    if (DAT_00982c3c < *(int *)(DAT_0093de8c + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093de8c + 0x38);
    }
    if (DAT_00982c3c < *(int *)(DAT_0093de90 + 0x38)) {
      DAT_00982c3c = *(int *)(DAT_0093de90 + 0x38);
    }
  }
  if (2 < DAT_00982c3c) {
    DAT_00982c3c = 2;
    DAT_009018b8 = 2;
    return;
  }
  if (0 < DAT_00982c3c) {
    DAT_009018b8 = 2;
    return;
  }
  DAT_009018b8 = 0;
  return;
}

