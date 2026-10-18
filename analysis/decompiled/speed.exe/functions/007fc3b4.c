/* speed.exe 007fc3b4 FUN_007fc3b4; analysis pseudocode, not buildable source.
 * calls 007c9790 _fopen
 * calls 0080135f FUN_0080135f
 * calls 008012e4 FUN_008012e4
 * calls 007cb290 _fprintf
 * calls 00800ecc FUN_00800ecc
 * calls 008018fe FUN_008018fe
 * calls 007fe49d FUN_007fe49d
 * calls 007fdd78 FUN_007fdd78
 * calls 007c94f0 _fclose
 */

undefined4 FUN_007fc3b4(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FILE *_File;
  int iVar4;
  int unaff_ESI;
  int local_c;
  int local_8;
  
  FUN_007fdd78(&local_c);
  *(undefined4 *)(unaff_ESI + 0x1e8) = param_2;
  FUN_0080135f(unaff_ESI + 0x4510,param_1);
  iVar2 = FUN_008018fe();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(unaff_ESI + 0x948) != 0) || (*(char *)(unaff_ESI + 0x19d) == '\0')) {
    param_1 = *(int *)(unaff_ESI + 0x4520) + param_1;
    if (*(int *)(unaff_ESI + 0x4524) == 0) {
      FUN_008012e4(unaff_ESI + 0x170,param_1);
    }
    else {
      *(undefined4 *)(unaff_ESI + 400) = 0;
      *(undefined4 *)(unaff_ESI + 0x194) = 0;
      *(int *)(unaff_ESI + 0x198) = param_1;
    }
  }
  FUN_00800ecc();
  iVar2 = *(int *)(unaff_ESI + 0x254);
  *(int *)(unaff_ESI + 0x254) = *(int *)(unaff_ESI + 0x244);
  iVar4 = *(int *)(unaff_ESI + 0x26c);
  if (*(int *)(unaff_ESI + 0x26c) == 0) {
    iVar4 = iVar2;
  }
  *(int *)(unaff_ESI + 0x244) = iVar4;
  *(undefined4 *)(unaff_ESI + 0x26c) = 0;
  FUN_007fe49d(*(undefined4 *)(unaff_ESI + 0x29c),*(undefined4 *)(unaff_ESI + 0x254));
  if ((*(char *)(unaff_ESI + 0x1ac) == '\0') || (*(int *)(unaff_ESI + 0x69c) != 0)) {
    *(undefined4 *)(unaff_ESI + 0x26c) = *(undefined4 *)(unaff_ESI + 0x24c);
    *(undefined4 *)(unaff_ESI + 0x24c) = *(undefined4 *)(unaff_ESI + 0x254);
  }
  (*DAT_009c6810)();
  if (*(char *)(unaff_ESI + 0x1ac) == '\0') {
    *(undefined4 *)(unaff_ESI + 0x6a4) = **(undefined4 **)(unaff_ESI + 0x13c);
  }
  else {
    *(uint *)(unaff_ESI + 0x6a4) =
         **(int **)(unaff_ESI + 0x13c) + 2 + *(uint *)(unaff_ESI + 0x6a4) * 3 >> 2;
  }
  FUN_007fdd78(&local_8);
  uVar3 = (uint)(local_8 - local_c) / *(uint *)(unaff_ESI + 0x1a4);
  puVar1 = (uint *)(unaff_ESI + 0x918);
  *(uint *)(unaff_ESI + 0x914) = uVar3;
  if (*puVar1 == 0) {
    *puVar1 = uVar3;
  }
  else {
    *puVar1 = *puVar1 * 7 + uVar3 >> 3;
  }
  if (*(uint *)(unaff_ESI + 0x1e8) < *(uint *)(unaff_ESI + 0x160)) {
    _File = _fopen("badframes.stt","a");
    _fprintf(_File,"%8d %8d %8d \n",DAT_009c194c,*(uint *)(unaff_ESI + 0x160),
             *(undefined4 *)(unaff_ESI + 0x1e8));
    _fclose(_File);
  }
  DAT_009c194c = DAT_009c194c + 1;
  return 0;
}

