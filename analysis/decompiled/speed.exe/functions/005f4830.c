/* speed.exe 005f4830 FUN_005f4830; analysis pseudocode, not buildable source.
 * calls 005ed6f0 FUN_005ed6f0
 * calls 005e1970 FUN_005e1970
 * calls 005f2530 FUN_005f2530
 * calls 005e87f0 FUN_005e87f0
 */

void FUN_005f4830(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0091dfe4;
  if (DAT_0091dfe4 != 0) {
    if (*(short *)(DAT_0091dfe4 + 0x18) == 0) {
      FUN_005e1970();
    }
    iVar2 = iVar1;
    if (iVar1 != 0) {
      do {
        if (*(char *)(iVar1 + 0x3c) != '\0') {
          *(undefined1 *)(iVar1 + 0x3c) = 0;
          FUN_005e87f0(0,iVar1);
          FUN_005ed6f0();
          FUN_005f2530(*(undefined4 *)(*(int *)(iVar1 + 0x34) + 4));
          *(int *)(*(int *)(iVar1 + 0x34) + 4) = *(int *)(iVar1 + 0x34);
          *(undefined4 *)(iVar1 + 0x38) = 0;
          *(undefined4 *)*(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
          *(int *)(*(int *)(iVar1 + 0x34) + 8) = *(int *)(iVar1 + 0x34);
          iVar2 = DAT_0091dfe4;
        }
        iVar1 = *(int *)(iVar1 + 0x24);
        while( true ) {
          if (iVar1 == iVar2) {
            return;
          }
          if (*(short *)(iVar1 + 0x18) != 0) break;
          iVar1 = *(int *)(iVar1 + 0x24);
        }
      } while( true );
    }
  }
  return;
}

