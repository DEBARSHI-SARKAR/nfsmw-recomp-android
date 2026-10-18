/* speed.exe 007ed66a FUN_007ed66a; analysis pseudocode, not buildable source.
 * calls 007ee5a3 FUN_007ee5a3
 * calls 007ee5e3 FUN_007ee5e3
 * calls 007ec268 FUN_007ec268
 * calls 007ecc6d FUN_007ecc6d
 * calls 007eccd3 FUN_007eccd3
 * calls 007f0df9 FUN_007f0df9
 * calls 007ec298 FUN_007ec298
 * calls EXTERNAL:0000004e SetEvent
 * calls EXTERNAL:00000006 CloseHandle
 * calls 007ec1b2 FUN_007ec1b2
 */

void FUN_007ed66a(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x84 + *(int *)(DAT_009bb13c + 0x98);
  cVar1 = FUN_007ee5e3(iVar2,0);
  if (cVar1 != '\0') {
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(iVar2 + 8) = 1;
      FUN_007ecc6d(iVar2 + 0x44);
      while (*(int *)(iVar2 + 4) != 0) {
        FUN_007ec298(0);
      }
      FUN_007eccd3(iVar2 + 0x44);
      SetEvent(*(HANDLE *)(iVar2 + 0x78));
      CloseHandle(*(HANDLE *)(iVar2 + 0x78));
      FUN_007ec268(iVar2 + 0x68);
      FUN_007ec1b2();
      FUN_007ec1b2();
      (**(code **)(**(int **)(iVar2 + 0x80) + 8))();
    }
    FUN_007f0df9(iVar2,4);
    FUN_007ee5a3(iVar2);
  }
  return;
}

