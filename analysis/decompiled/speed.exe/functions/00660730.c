/* speed.exe 00660730 FUN_00660730; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 0064c8b0 FUN_0064c8b0
 * calls 0065f860 FUN_0065f860
 */

void FUN_00660730(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char local_200 [511];
  undefined1 local_1;
  
  uVar1 = FUN_0065f860(DAT_009258dc + 0x14,&DAT_009258e4,0x40);
  iVar3 = 0;
  DAT_009258ec = uVar1;
  iVar2 = FUN_0064c8b0(local_200,1,0xb);
  while (iVar2 != 0) {
    if (iVar3 == 0x1fe) {
      iVar3 = 0x1ff;
      local_1 = 0;
    }
    if (local_200[iVar3] == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 1;
    }
    iVar2 = FUN_0064c8b0(local_200 + iVar3,1,0xb);
  }
  FUN_004655f0(uVar1);
  DAT_009258ec = 0;
  DAT_009258e4 = 0;
  return;
}

