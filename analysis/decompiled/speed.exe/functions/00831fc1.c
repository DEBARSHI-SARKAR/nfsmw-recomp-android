/* speed.exe 00831fc1 FUN_00831fc1; analysis pseudocode, not buildable source.
 * calls 00831f67 FUN_00831f67
 */

void FUN_00831fc1(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  int local_8;
  
  uVar2 = (&DAT_009c2ae4)[param_1 * 8];
  local_8 = 0;
  uVar3 = (&DAT_009c2ae0)[param_1 * 4];
  cVar1 = (&DAT_009c2ae7)[param_1 * 0x10];
  pcVar4 = &DAT_009c2ae7;
  do {
    if (((((local_8 != param_1) && (pcVar4[-1] != '\0')) && (*pcVar4 == cVar1)) &&
        ((*(uint *)(pcVar4 + -7) < uVar3 ||
         ((*(uint *)(pcVar4 + -7) == uVar3 && (*(ushort *)(pcVar4 + -3) < uVar2)))))) &&
       ((*(byte *)(*(int *)(pcVar4 + 1) + 10) & 4) == 0)) {
      FUN_00831f67(local_8);
    }
    local_8 = local_8 + 1;
    pcVar4 = pcVar4 + 0x10;
  } while ((int)pcVar4 < 0x9c2be7);
  return;
}

