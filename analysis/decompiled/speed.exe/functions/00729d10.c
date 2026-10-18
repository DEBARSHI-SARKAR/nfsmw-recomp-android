/* speed.exe 00729d10 FUN_00729d10; analysis pseudocode, not buildable source.
 * calls 0045ca60 FUN_0045ca60
 */

int __thiscall FUN_00729d10(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_8 = 0;
  do {
    if (puVar1 == (undefined4 *)(param_1 + 0x10)) {
      return local_8;
    }
    iVar2 = 0;
    if (0 < *(short *)(puVar1 + 4)) {
      psVar4 = (short *)((int)puVar1 + 0x12);
      do {
        if (*psVar4 == param_2) {
          iVar2 = puVar1[2];
          iVar3 = (int)*(char *)(iVar2 + 10);
          iVar5 = 0;
          if (0 < iVar3) {
            do {
              iVar3 = FUN_0045ca60(iVar2 + 0x24,iVar3 << 3,0xffffffff);
              local_8 = local_8 + iVar3;
              iVar3 = (int)*(char *)(iVar2 + 10);
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          break;
        }
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 1;
      } while (iVar2 < *(short *)(puVar1 + 4));
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

