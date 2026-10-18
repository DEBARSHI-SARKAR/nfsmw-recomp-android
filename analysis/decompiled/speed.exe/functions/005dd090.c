/* speed.exe 005dd090 FUN_005dd090; analysis pseudocode, not buildable source.
 * calls 007889d0 FUN_007889d0
 * calls 0064b410 FUN_0064b410
 * calls 005d9620 FUN_005d9620
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 00782c60 FUN_00782c60
 */

void FUN_005dd090(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  iVar1 = FUN_005d9620();
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_00454810(0xe244f26b,uVar5);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_006269b0(4);
      }
      pcVar4 = (char *)*puVar2;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 == '*')) {
        pcVar4 = pcVar4 + 1;
      }
      puVar2 = (undefined4 *)FUN_00454810(0xe244f26b,uVar5);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_006269b0(4);
      }
      if ((char *)*puVar2 == (char *)0x0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)*puVar2 == '*';
      }
      FUN_0064b410(pcVar4,bVar6);
      uVar5 = uVar5 + 1;
      uVar3 = FUN_005d9620();
    } while (uVar5 < uVar3);
  }
  FUN_00782c60();
  FUN_007889d0();
  return;
}

