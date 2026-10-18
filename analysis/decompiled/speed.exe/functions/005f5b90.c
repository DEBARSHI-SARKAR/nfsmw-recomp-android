/* speed.exe 005f5b90 FUN_005f5b90; analysis pseudocode, not buildable source.
 * calls 005e2e70 FUN_005e2e70
 * calls 005e1700 FUN_005e1700
 * calls 005f3ae0 FUN_005f3ae0
 */

int FUN_005f5b90(undefined4 param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_8;
  uint local_4;
  
  iVar3 = 0;
  local_4 = 0xffffffff;
  local_8 = DAT_0091dfec;
  if (DAT_0091dfec != 0) {
    iVar4 = DAT_0091dfec;
    if (*(short *)(DAT_0091dfec + 0x18) == 0) {
      FUN_005e1700();
      iVar4 = local_8;
    }
    uVar1 = local_4;
    if (iVar4 != 0) {
      do {
        local_8 = iVar4;
        cVar2 = FUN_005e2e70(param_1,iVar4);
        if (cVar2 != '\0') {
          if (param_2 != 0) {
            FUN_005f3ae0(&local_8);
          }
          iVar3 = iVar3 + 1;
        }
        iVar4 = *(int *)(iVar4 + 0x24);
        while( true ) {
          if (iVar4 == DAT_0091dfec) {
            return iVar3;
          }
          if ((uVar1 & *(ushort *)(iVar4 + 0x18)) != 0) break;
          iVar4 = *(int *)(iVar4 + 0x24);
        }
      } while( true );
    }
  }
  return 0;
}

